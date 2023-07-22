#include <iostream>
#include "board.h"
#include "tile.h"
#include "resourceEnum.h"
#include "tile.h"
 
using namespace std;

const int tilesNum = 19;

Board::Board(ifstream ifs): tiles{
    Tile(0, "0", "1", "3", "4", "8", "9", "0", "1", "2", "6", "7", "10"),
    Tile(1, "2", "3", "7", "8", "13", "14", "3", "5", "6", "13", "14", "18"),
    Tile(2, "4", "5", "9", "10", "15", "16", "4", "7", "8", "15", "16", "19"),
    Tile(3, "6", "7", "12", "13", "18", "19", "9", "12", "13", "20", "21", "26"),
    Tile(4, "8", "9", "14", "15", "20", "21", "10", "14", "15", "22", "23", "27"),
    Tile(5, "10", "11", "16", "17", "22", "23", "11", "16", "17", "24", "25", "28"),
    Tile(6, "13", "14", "19", "20", "25", "26", "18", "21", "22", "30", "31", "35"),
    Tile(7, "15", "16", "21", "22", "27", "28", "19", "23", "24", "32", "33", "36"),
    Tile(8, "18", "19", "24", "25", "30", "31", "26", "29", "30", "37", "38", "43"),
    Tile(9, "20", "21", "26", "27", "32", "33", "27", "31", "32", "29", "40", "44"),
    Tile(10, "22", "23", "28", "29", "34", "35", "28", "33", "34", "41", "42", "45"),
    Tile(11, "25", "26", "31", "32", "37", "38", "35", "38", "39", "47", "48", "52"),
    Tile(12, "27", "28", "33", "34", "39", "40", "36", "40", "41", "49", "50", "53"),
    Tile(13,  "30", "31", "36", "37", "42", "43", "43", "46", "47", "54", "55", "60"),
    Tile(14, "32", "33", "38", "39", "44", "45", "44", "48", "49", "56", "57", "61"),
    Tile(15, "34", "35", "40", "41", "46", "47", "45", "50", "51", "58", "59", "62"),
    Tile(16, "37", "38", "43", "44", "48", "49", "52", "55", "56", "63", "64", "67"),
    Tile(17, "39", "40", "45", "46", "50", "51", "53", "57", "58", "65", "66", "68"),
    Tile(18, "44", "45", "49", "50", "52", "53", "61", "64", "65", "69", "70", "71")
} {
    int tileVal, r;
    for (int i = 0 ; i < tilesNum; i++) {
        ifs >> r >> tileVal;
        tiles[i].setTileVal(tileVal);
        tiles[i].setResoc(static_cast<Resource>(r));
    }


}
    /*
    int tileVal, r;
    ifs >> r >> tileVal;
    tile[0].setVal(tileVal);
    tile[0].setResoc(r);   
   
    tile[0].placeAdjVerticesV(0, vector<Vertex*> temp {tile[0].getVertexAt(1), tile[0].getVertexAt(3)});
    placeAdjEdgesV

    Vertex Class:
    placeAdjVerticesV
    placeAdjEdgesV

    Edge Class:
    placeAdjVerticesE
    placeAdjEdgesE
*/

pair<Resource, int> Board::getResoc(int tileNum, int tileValRolled, Color player) const {
    return tiles[tileNum].evalResoc(tileValRolled, player);
}