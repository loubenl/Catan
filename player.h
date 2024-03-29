#ifndef PLAYER_H
#define PLAYER_H
#include <map>
#include <vector>
#include <utility>
#include <sstream>
#include "resourceEnum.h"
#include "colorEnum.h"
#include "dice.h"
#include "tile.h"

extern const int numresocType;

class Player {
    Color color;
    Dice dice;
    std::map<Resource, int> resocMap;
    std::vector<int> occupiedTiles;
    int buildingPoints = 0, resocTotal = 0;
 public:
    Player(std::istringstream &playerData, Color color);
    // adds tileNum to vector of occupiedTiles, doesn't add duplicates
    void addOccupiedTiles(int tileNum);
    void setDice(std::string cmd);
    explicit Player(Color color);
    void addBuildingPoints(int num);
    int getBuildingPoints();
    bool hasEnoughResoc(const std::map<Resource,int> &rMapNeed);
    bool hasOccupTile(int tileNum);
    void updateResocMap(const std::pair<Resource, int> &gainedResoc);
    void removeResoc(const std::pair<Resource, int> &lostResoc);
    std::map<Resource, int>& getResocMap();
    // accessors
    std::vector<int>& getOccupiedTiles();
    int getResocTotal();
    Color getColour();
    // geese functions
    std::vector<std::pair<std::string, int>> removeHalfResocs();
    bool hasRes(int tileNum);
    std::string stealResoc();
    //void addResoc(std::string resoc);
    std::string getDiceType();
    //void removeResoc(std::string resoc);
    int fairRoll();
    bool enoughResoc(std::string give);
    bool validSteal(std::string take);
};

#endif
