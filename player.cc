#include "player.h"
#include <iostream> 
#include <string>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include "colorEnum.h"
#include "tile.h"

using namespace std;

Player::Player(Color color) : color{color}, 
    resocMap{
        {Resource::BRICK, 0},
        {Resource::ENERGY, 0},
        {Resource::GLASS, 0},
        {Resource::HEAT, 0},
        {Resource::WIFI, 0}
    }  {}

Player::Player(istringstream &playerData, Color color) : color{color} {
    int num;
    for (int r = 0; r < resocAmount - 1; r++) {// park isn't included
        playerData >> num;
        resocMap[static_cast<Resource>(r)] = num;
    }
}

int Player::getBuildingPoints() { return buildingPoints; }

bool Player::hasOccupTile(int tileNum) {
    for (auto num : occupiedTiles) {
        if (num == tileNum) { return true; }
    }
    return false;
}

void Player::addOccupiedTiles(int tileNum) {
    // the original tile found was checked already to be a duplicate by hasOccupTilesu
    // but the original tiles' shared tiles still might be a duplicate
    for (auto num : occupiedTiles) {
        if (num == tileNum) { return; }
    }
    occupiedTiles.emplace_back(tileNum);
}

void Player::setDice(string cmd) {
    dice.setDice(cmd);
}

void Player::addBuildingPoints(int num) { buildingPoints += num; }

bool Player::hasEnoughResoc(const map<Resource,int> &rMapNeed) {
    for (auto [resoc, amount] : rMapNeed) {
        if (resocMap[resoc] < amount ) { return false; }
    }
    return true;
}

int Player::getResocTotal() { return resocTotal; }

Color Player::getColour() {
    return color;
}

 vector<pair<string, int>> Player::removeHalfResocs() {
    vector<pair<string, int>> resocs;

    int numToLose = resocTotal / 2;

    vector<Resource> allResocs;
    vector<Resource> lostResocs;
    std::map<Resource, int> lostResocsCounts;

    
    // put all currently owned resources from resocMap into a new vector
    for (const auto& pair : resocMap) {
        const Resource& r = pair.first;
        int count = pair.second;

        for (int i = 0; i < count; ++i) {
            allResocs.emplace_back(r);
        }
    }

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine rng{seed};

    for (int i = 0; i < numToLose; i++) {
        if (allResocs.empty()) {
            break; // Stop if there are no more resources to remove
        }

        // Generate a random index to remove from the allResocs vector
        std::uniform_int_distribution<size_t> dist(0, allResocs.size() - 1);
        size_t indexToRemove = dist(rng);

        // Add the lost resource to the 'lostResocs' vector before erasing it from 'allResocs'
        Resource lost = allResocs[indexToRemove];
        lostResocs.emplace_back(lost);

        // Erase the randomly selected resource from 'allResocs'
        allResocs.erase(allResocs.begin() + indexToRemove);
    }

    int b; // brick
    int e; // energy
    int g; // glass
    int h; // heat
    int w; // wifi
    int p; // park

    for (const auto& r : lostResocs) {
        if (r == Resource::BRICK) ++b;
        else if (r == Resource::ENERGY) ++e;
        else if (r == Resource::GLASS) ++g;
        else if (r == Resource::HEAT) ++h;
        else if (r == Resource::WIFI) ++w;
        else if (r == Resource::PARK) ++p;
        else continue;
    }

    int total = b + e + g + h + w + p;
    resocTotal -= total;

    if (b > 0) {
        resocs.emplace_back(make_pair("BRICK", b));
        resocMap[Resource::BRICK] -= b;
    }

    if (e > 0) {
        resocs.emplace_back(make_pair("ENERGY", e));
        resocMap[Resource::ENERGY] -= e;
    }

    if (g > 0) {
        resocs.emplace_back(make_pair("GLASS", g));
        resocMap[Resource::GLASS] -= g;
    }
    
    if (h > 0) {
        resocs.emplace_back(make_pair("HEAT", h));
        resocMap[Resource::HEAT] -= h;
    }

    if (w > 0) {
        resocs.emplace_back(make_pair("WIFI", w));
        resocMap[Resource::WIFI] -= w;
    }

    if (p > 0) {
        resocs.emplace_back(make_pair("PARK", p));
        resocMap[Resource::PARK] -= p;
    }


    return resocs;
 }
/*

Color color
int buildingPoints = 0
int resocTotal = 0
Dice dice
std::map<Resource, int> resocMap
std::vector<int> occupiedTiles

*/


void Player::updateResocMap(const pair<Resource, int> &gainedResoc) {
    resocMap[gainedResoc.first] += gainedResoc.second;
    ++resocTotal;
}

void Player::removeResoc(const pair<Resource, int> &lostResoc) {
    resocMap[lostResoc.first] -= lostResoc.second;
    --resocTotal;
}

map<Resource, int>& Player::getResocMap() { return resocMap; }

vector<int>& Player::getOccupiedTiles() { return occupiedTiles; }

bool Player::hasRes(int tileNum) {
    for (auto n : occupiedTiles) {
        if (tileNum == n) {
            return true;
        }
    }

    return false;
}

string Player::stealResoc() {
    string stolenResoc;
    //int numToLose = 1;
    vector<Resource> allResocs;

    // put all currently owned resources from resocMap into a new vector
    for (const auto& pair : resocMap) {
        const Resource& r = pair.first;
        int count = pair.second;

        for (int i = 0; i < count; ++i) {
            allResocs.emplace_back(r);
        }
    }

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine rng{seed};

    // Generate a random index to remove from the allResocs vector
    std::uniform_int_distribution<size_t> dist(0, allResocs.size() - 1);
    size_t indexToRemove = dist(rng);

    // Add the lost resource
    Resource lost = allResocs[indexToRemove];
    
    stolenResoc = getResocStr(lost);

    std::pair<Resource, int> lostR(lost, 1);

    removeResoc(lostR);

    return stolenResoc;
}


/*
void Player::addResoc(string resoc) {
    Resource r = getResocR(resoc);
    resocMap[r] += 1;
}
*/

string Player::getDiceType() {
    return dice.getDiceType();
}

/*void Player::removeResoc(string resoc) {
    Resource r = getResocR(resoc);
    resocMap[r] -= 1;
}*/


int Player::fairRoll() {
    int rollVal = dice.rollFair();
    return rollVal;

}

bool Player::enoughResoc(string give) {
    Resource r = getResocR(give);
    if(resocMap[r] <= 0) return false;
    else return true;
}

bool Player::validSteal(string take) {
    Resource r = getResocR(take);
    if(resocMap[r] <= 0) return false;
    else return true;
}
