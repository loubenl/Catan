#include <utility>
#include "controller.h"
#include <utility>
 
using namespace std;



const int playerNum = 4;

Controller::Controller() : players{Player{Color::B}, Player{Color::R}, Player{Color::O}, Player{Color::Y}} {}

//this acts like the main function essentially 
void Controller::general() {
    // deal with input 

    // then create board 
    //Board(ifstream ifs);
   

    

   // all input and output should be dealt in here!

}

void Controller::roll() {
    int tileValRolled = players[static_cast<int>(turn)].roll();
    if (tileValRolled == 7) {
        // GEESE STUFF HERE 
    }

    // gets resources for each player 
    for (int player = 0; player < playerNum - 1; player++) {
        vector<int> occupiedTiles = players[player].getOccupiedTiles();
        int vecSize = occupiedTiles.size();
        for (int j = 0; j < vecSize; j++) {
            // gets the number of resources for 1 tile
            const pair<Resource, int> gainedResoc = board.getResoc(occupiedTiles[j], tileValRolled, static_cast<Color>(player));
            if (gainedResoc.second != 0) {
                players[player].updateResocMap(gainedResoc);
            }
        }
    }
//auto [resoc, amount] resocGained =
                    

}


/*    
int tileValRolled;
Color turn = Color::DNE;
std::map<Settlement, std::map<Resource,int>> settlementCost; 
Player players[4];

*/ 