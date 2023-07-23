#include <iostream>
#include "board.h"
#include "tile.h"
#include "resourceEnum.h"
#include "tile.h"
#include "edgeEnum.h"
#include "vertexEnum.h"
 
using namespace std;

const int tilesNum = 19;

Board::Board(ifstream &ifs): tiles{
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
    
    // reading in resources and tile values from ifs
    int tileVal, resoc;
    for (int i = 0 ; i < tilesNum; i++) {
        ifs >> resoc >> tileVal;
        tiles[i].setTileVal(tileVal);
        tiles[i].setResoc(static_cast<Resource>(resoc));
    }

       // TILE 0
    // Tile 0, Vertex 0
    // Adjacent Vertices: 1(TR), 3(ML)
    tiles[0].placeAdjVerticesV(vertexEnum::TL, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::TR), tiles[0].getVertexAdr(vertexEnum::ML)});
    // Adjacent Edges: 0(T), 1(TL)
    tiles[0].placeAdjEdgesV(vertexEnum::TL, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::T), tiles[0].getEdgeAdr(edgeEnum::TL)});

    // Tile 0, Edge 0
    // Adjacent Vertices: 0(TL), 1(TR)
    tiles[0].placeAdjVerticesE(edgeEnum::T,
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::TL), tiles[0].getVertexAdr(vertexEnum::TR)});
    // Adjacent Edges: 1(TL), 2(TR)
    tiles[0].placeAdjEdgesE(edgeEnum::T,
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::TL), tiles[0].getEdgeAdr(edgeEnum::TR)});

    // Tile 0, Vertex 1
    // Adjacent Vertices: 0(TL), 4(MR)
    tiles[0].placeAdjVerticesV(vertexEnum::TR, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::TL), tiles[0].getVertexAdr(vertexEnum::MR)});
    // Adjacent Edges: 0(T), 2(TR)
    tiles[0].placeAdjEdgesV(vertexEnum::TR, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::T), tiles[0].getEdgeAdr(edgeEnum::TR)});

    // Tile 0, Edge 1
    // Adjacent Vertices: 0(TL), 3(ML)
    tiles[0].placeAdjVerticesE(edgeEnum::TL,
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::TL), tiles[0].getVertexAdr(vertexEnum::ML)});
    // Adjacent Edges: 3(TILE 1: T), 6(BL), 0(T)
    tiles[0].placeAdjEdgesE(edgeEnum::TL,
        vector<Edge*>{tiles[1].getEdgeAdr(edgeEnum::T), tiles[0].getEdgeAdr(edgeEnum::BL), tiles[0].getEdgeAdr(edgeEnum::T)});

    // Tile 0, Edge 2
    // Adjacent Vertices: TR, MR
    tiles[0].placeAdjVerticesE(edgeEnum::TR, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::TR), tiles[0].getVertexAdr(vertexEnum::MR)});
    // Adjacent Edges: T, BR, TILE 2: T
    tiles[0].placeAdjEdgesE(edgeEnum::TR, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::T), tiles[0].getEdgeAdr(edgeEnum::B), tiles[2].getEdgeAdr(edgeEnum::T)});

    // Tile 0, Vertex 3
    // Adjacent Vertices: TL, BL, TILE 1: TL
    tiles[0].placeAdjVerticesV(vertexEnum::ML, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::TL), tiles[0].getVertexAdr(vertexEnum::BL), tiles[1].getVertexAdr(vertexEnum::TL)});
    // Adjacent Edges: TL, BL, TILE 1: T
    tiles[0].placeAdjEdgesV(vertexEnum::ML, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::TL), tiles[0].getEdgeAdr(edgeEnum::BL), tiles[1].getEdgeAdr(edgeEnum::T)});

    // Tile 0, Vertex 4
    // Adjacent Vertices: TR, BR, TILE 2: TR
    tiles[0].placeAdjVerticesV(vertexEnum::MR, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::TR), tiles[0].getVertexAdr(vertexEnum::BR), tiles[2].getVertexAdr(vertexEnum::TR)});
    // Adjacent Edges: TR, BR, TILE 2: T
    tiles[0].placeAdjEdgesV(vertexEnum::MR, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::TR), tiles[0].getEdgeAdr(edgeEnum::BR), tiles[2].getEdgeAdr(edgeEnum::T)});

    // Tile 0, Edge 6
    // Adjacent Vertices: ML, BL
    tiles[0].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::ML), tiles[0].getVertexAdr(vertexEnum::BL)});
    // Adjacent Edges: TL, B, TILE 1: T, BR
    tiles[0].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::TL), tiles[0].getEdgeAdr(edgeEnum::BL), tiles[1].getEdgeAdr(edgeEnum::T), tiles[1].getEdgeAdr(edgeEnum::BR)});

    // Tile 0, Edge 7
    // Adjacent Vertices: MR, BR
    tiles[0].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::MR), tiles[0].getVertexAdr(vertexEnum::BR)});
    // Adjacent Edges: TR, B, TILE 2: T, BL
    tiles[0].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::TR), tiles[0].getEdgeAdr(edgeEnum::B), tiles[2].getEdgeAdr(edgeEnum::T), tiles[2].getEdgeAdr(edgeEnum::BL)});

    // Tile 0, Vertex 8
    // Adjacent Vertices: ML, BR, TILE 1: BR
    tiles[0].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::ML), tiles[0].getVertexAdr(vertexEnum::BR), tiles[1].getVertexAdr(vertexEnum::BR)});
    // Adjacent Edges: BL, B, TILE 1: BR
    tiles[0].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::BL), tiles[0].getEdgeAdr(edgeEnum::B), tiles[1].getEdgeAdr(edgeEnum::BR)});
    
    // Tile 0, Edge 10
    // Adjacent Vertices: BL, BR
    tiles[0].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::BL), tiles[0].getVertexAdr(vertexEnum::BR)});
    // Adjacent Edges: BL, BR, TILE 4: TL, TR
    tiles[0].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::BL), tiles[0].getEdgeAdr(edgeEnum::BR), tiles[4].getEdgeAdr(edgeEnum::TL), tiles[4].getEdgeAdr(edgeEnum::TR)});

    // Tile 0, Vertex 9
    // Adjacent Vertices: MR, BL, TILE 2: BL
    tiles[0].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::MR), tiles[0].getVertexAdr(vertexEnum::BL), tiles[2].getVertexAdr(vertexEnum::BL)});
    // Adjacent Edges: BR, B, TILE 2: BL
    tiles[0].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::BR), tiles[0].getEdgeAdr(edgeEnum::B), tiles[2].getEdgeAdr(edgeEnum::BL)});
    
    // ---------------------------------------------

    // TILE 1
    // Tile 1, Vertex 2
    tiles[1].placeAdjVerticesV(vertexEnum::TL, 
        vector<Vertex*>{tiles[1].getVertexAdr(vertexEnum::TR), tiles[1].getVertexAdr(vertexEnum::ML)});
    tiles[1].placeAdjEdgesV(vertexEnum::TL, 
        vector<Edge*>{tiles[1].getEdgeAdr(edgeEnum::T), tiles[1].getEdgeAdr(edgeEnum::TL)});

    // Tile 1, Edge 3
    tiles[1].placeAdjVerticesE(edgeEnum::T,
        vector<Vertex*>{tiles[1].getVertexAdr(vertexEnum::TL), tiles[1].getVertexAdr(vertexEnum::TR)});
    tiles[1].placeAdjEdgesE(edgeEnum::T,
        vector<Edge*>{tiles[1].getEdgeAdr(edgeEnum::TL), tiles[1].getEdgeAdr(edgeEnum::TR)});

    // Tile 1, Edge 5
    tiles[1].placeAdjVerticesE(edgeEnum::TL,
        vector<Vertex*>{tiles[1].getVertexAdr(vertexEnum::TL), tiles[1].getVertexAdr(vertexEnum::ML)});
    tiles[1].placeAdjEdgesE(edgeEnum::TL,
        vector<Edge*>{tiles[1].getEdgeAdr(edgeEnum::T), tiles[0].getEdgeAdr(edgeEnum::BL), tiles[3].getEdgeAdr(edgeEnum::T)});

    // Tile 1, Vertex 7
    tiles[1].placeAdjVerticesV(vertexEnum::ML, 
        vector<Vertex*>{tiles[1].getVertexAdr(vertexEnum::TL), tiles[1].getVertexAdr(vertexEnum::BL), tiles[3].getVertexAdr(vertexEnum::TL)});
    tiles[1].placeAdjEdgesV(vertexEnum::ML, 
        vector<Edge*>{tiles[1].getEdgeAdr(edgeEnum::TL), tiles[1].getEdgeAdr(edgeEnum::BL), tiles[3].getEdgeAdr(edgeEnum::T)});

    // Tile 1, Edge 13
    tiles[1].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[1].getVertexAdr(vertexEnum::ML), tiles[1].getVertexAdr(vertexEnum::BL)});
    tiles[1].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[1].getEdgeAdr(edgeEnum::TL), tiles[1].getEdgeAdr(edgeEnum::B), tiles[3].getEdgeAdr(edgeEnum::T), tiles[3].getEdgeAdr(edgeEnum::BR)});

    // Tile 1, Edge 14
    tiles[1].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[1].getVertexAdr(vertexEnum::MR), tiles[1].getVertexAdr(vertexEnum::BR)});
    tiles[1].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[1].getEdgeAdr(edgeEnum::TR), tiles[1].getEdgeAdr(edgeEnum::B), tiles[4].getEdgeAdr(edgeEnum::T), tiles[4].getEdgeAdr(edgeEnum::BL)});

    // Tile 1, Vertex 13
    tiles[1].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[1].getVertexAdr(vertexEnum::ML), tiles[1].getVertexAdr(vertexEnum::BR), tiles[3].getVertexAdr(vertexEnum::BR)});
    tiles[1].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[1].getEdgeAdr(edgeEnum::BL), tiles[1].getEdgeAdr(edgeEnum::B), tiles[3].getEdgeAdr(edgeEnum::BR)});
    
    // Tile 1, Edge 18
    tiles[1].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[1].getVertexAdr(vertexEnum::BL), tiles[1].getVertexAdr(vertexEnum::BR)});
    tiles[1].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[1].getEdgeAdr(edgeEnum::BL), tiles[1].getEdgeAdr(edgeEnum::BR), tiles[6].getEdgeAdr(edgeEnum::TL), tiles[6].getEdgeAdr(edgeEnum::TR)});

    // Tile 1, Vertex 14
    tiles[1].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[1].getVertexAdr(vertexEnum::MR), tiles[1].getVertexAdr(vertexEnum::BL), tiles[4].getVertexAdr(vertexEnum::BL)});
    tiles[1].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[1].getEdgeAdr(edgeEnum::BR), tiles[1].getEdgeAdr(edgeEnum::B), tiles[4].getEdgeAdr(edgeEnum::BL)});

    // ---------------------------------------

    // TILE 2
    // Tile 2, Edge 4
    tiles[2].placeAdjVerticesE(edgeEnum::T,
        vector<Vertex*>{tiles[2].getVertexAdr(vertexEnum::TL), tiles[2].getVertexAdr(vertexEnum::TR)});
    tiles[2].placeAdjEdgesE(edgeEnum::T,
        vector<Edge*>{tiles[2].getEdgeAdr(edgeEnum::TL), tiles[2].getEdgeAdr(edgeEnum::TR)});

    // Tile 2, Vertex 5
    tiles[2].placeAdjVerticesV(vertexEnum::TR, 
        vector<Vertex*>{tiles[2].getVertexAdr(vertexEnum::TL), tiles[2].getVertexAdr(vertexEnum::MR)});
    tiles[2].placeAdjEdgesV(vertexEnum::TR, 
        vector<Edge*>{tiles[2].getEdgeAdr(edgeEnum::T), tiles[2].getEdgeAdr(edgeEnum::TR)});

    // Tile 2, Edge 8
    tiles[2].placeAdjVerticesE(edgeEnum::TR, 
        vector<Vertex*>{tiles[2].getVertexAdr(vertexEnum::TR), tiles[2].getVertexAdr(vertexEnum::MR)});
    tiles[2].placeAdjEdgesE(edgeEnum::TR, 
        vector<Edge*>{tiles[2].getEdgeAdr(edgeEnum::T), tiles[2].getEdgeAdr(edgeEnum::BR), tiles[5].getEdgeAdr(edgeEnum::T)});

    // Tile 2, Vertex 10
    tiles[2].placeAdjVerticesV(vertexEnum::MR, 
        vector<Vertex*>{tiles[2].getVertexAdr(vertexEnum::TR), tiles[2].getVertexAdr(vertexEnum::BR), tiles[5].getVertexAdr(vertexEnum::TR)});
    tiles[2].placeAdjEdgesV(vertexEnum::MR, 
        vector<Edge*>{tiles[2].getEdgeAdr(edgeEnum::TR), tiles[2].getEdgeAdr(edgeEnum::BR), tiles[5].getEdgeAdr(edgeEnum::T)});

    // Tile 2, Edge 15
    tiles[2].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[2].getVertexAdr(vertexEnum::ML), tiles[2].getVertexAdr(vertexEnum::BL)});
    tiles[2].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[2].getEdgeAdr(edgeEnum::TL), tiles[2].getEdgeAdr(edgeEnum::B), tiles[4].getEdgeAdr(edgeEnum::T), tiles[4].getEdgeAdr(edgeEnum::BR)});

    // Tile 2, Edge 16
    tiles[2].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[2].getVertexAdr(vertexEnum::MR), tiles[2].getVertexAdr(vertexEnum::BR)});
    tiles[2].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[2].getEdgeAdr(edgeEnum::TR), tiles[2].getEdgeAdr(edgeEnum::B), tiles[5].getEdgeAdr(edgeEnum::T), tiles[5].getEdgeAdr(edgeEnum::BL)});

    // Tile 2, Vertex 15
    tiles[2].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[2].getVertexAdr(vertexEnum::ML), tiles[2].getVertexAdr(vertexEnum::BR), tiles[4].getVertexAdr(vertexEnum::BR)});
    tiles[2].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[2].getEdgeAdr(edgeEnum::BL), tiles[2].getEdgeAdr(edgeEnum::B), tiles[4].getEdgeAdr(edgeEnum::BR)});
    
    // Tile 2, Edge 19
    tiles[2].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[2].getVertexAdr(vertexEnum::BL), tiles[2].getVertexAdr(vertexEnum::BR)});
    tiles[2].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[2].getEdgeAdr(edgeEnum::BL), tiles[2].getEdgeAdr(edgeEnum::BR), tiles[7].getEdgeAdr(edgeEnum::TL), tiles[7].getEdgeAdr(edgeEnum::TR)});

    // Tile 2, Vertex 16
    tiles[2].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[2].getVertexAdr(vertexEnum::MR), tiles[2].getVertexAdr(vertexEnum::BL), tiles[5].getVertexAdr(vertexEnum::BL)});
    // Adjacent Edges: BR, B, TILE 2: BL
    tiles[2].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[2].getEdgeAdr(edgeEnum::BR), tiles[2].getEdgeAdr(edgeEnum::B), tiles[5].getEdgeAdr(edgeEnum::BL)});

    // ---------------------------------------

    // TILE 3
    // Tile 3, Vertex 6
    tiles[3].placeAdjVerticesV(vertexEnum::TL, 
        vector<Vertex*>{tiles[3].getVertexAdr(vertexEnum::TR), tiles[3].getVertexAdr(vertexEnum::ML)});
    tiles[3].placeAdjEdgesV(vertexEnum::TL, 
        vector<Edge*>{tiles[3].getEdgeAdr(edgeEnum::T), tiles[3].getEdgeAdr(edgeEnum::TL)});

    // Tile 3, Edge 9
    tiles[3].placeAdjVerticesE(edgeEnum::T,
        vector<Vertex*>{tiles[3].getVertexAdr(vertexEnum::TL), tiles[3].getVertexAdr(vertexEnum::TR)});
    tiles[3].placeAdjEdgesE(edgeEnum::T,
        vector<Edge*>{tiles[3].getEdgeAdr(edgeEnum::TL), tiles[3].getEdgeAdr(edgeEnum::TR)});

    // Tile 3, Edge 12
    tiles[3].placeAdjVerticesE(edgeEnum::TL,
        vector<Vertex*>{tiles[3].getVertexAdr(vertexEnum::TL), tiles[3].getVertexAdr(vertexEnum::ML)});
    tiles[3].placeAdjEdgesE(edgeEnum::TL,
        vector<Edge*>{tiles[3].getEdgeAdr(edgeEnum::T), tiles[3].getEdgeAdr(edgeEnum::BL)});

    // Tile 3, Vertex 12
    tiles[3].placeAdjVerticesV(vertexEnum::ML, 
        vector<Vertex*>{tiles[3].getVertexAdr(vertexEnum::TL), tiles[3].getVertexAdr(vertexEnum::BL)});
    tiles[3].placeAdjEdgesV(vertexEnum::ML, 
        vector<Edge*>{tiles[3].getEdgeAdr(edgeEnum::TL), tiles[3].getEdgeAdr(edgeEnum::BL)});

    // Tile 3, Edge 20
    tiles[3].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[3].getVertexAdr(vertexEnum::ML), tiles[3].getVertexAdr(vertexEnum::BL)});
    tiles[3].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[3].getEdgeAdr(edgeEnum::TL), tiles[3].getEdgeAdr(edgeEnum::B), tiles[8].getEdgeAdr(edgeEnum::TL)});

    // Tile 3, Edge 21
    tiles[3].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[3].getVertexAdr(vertexEnum::MR), tiles[3].getVertexAdr(vertexEnum::BR)});
    tiles[3].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[3].getEdgeAdr(edgeEnum::TR), tiles[3].getEdgeAdr(edgeEnum::B), tiles[6].getEdgeAdr(edgeEnum::T), tiles[6].getEdgeAdr(edgeEnum::BL)});

    // Tile 3, Vertex 18
    tiles[3].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[3].getVertexAdr(vertexEnum::ML), tiles[3].getVertexAdr(vertexEnum::BR), tiles[8].getVertexAdr(vertexEnum::ML)});
    tiles[3].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[3].getEdgeAdr(edgeEnum::BL), tiles[3].getEdgeAdr(edgeEnum::B), tiles[8].getEdgeAdr(edgeEnum::TL)});
    
    // Tile 3, Edge 36
    tiles[3].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[3].getVertexAdr(vertexEnum::BL), tiles[3].getVertexAdr(vertexEnum::BR)});
    tiles[3].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[3].getEdgeAdr(edgeEnum::BL), tiles[3].getEdgeAdr(edgeEnum::BR), tiles[8].getEdgeAdr(edgeEnum::TL), tiles[8].getEdgeAdr(edgeEnum::TR)});

    // Tile 3, Vertex 19
    tiles[3].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[3].getVertexAdr(vertexEnum::MR), tiles[3].getVertexAdr(vertexEnum::BL), tiles[8].getVertexAdr(vertexEnum::MR)});
    tiles[3].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[3].getEdgeAdr(edgeEnum::BR), tiles[3].getEdgeAdr(edgeEnum::B), tiles[8].getEdgeAdr(edgeEnum::TR)});

    // ---------------------------------------

    // TILE 4
    // Tile 4, Edge 22
    tiles[4].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[4].getVertexAdr(vertexEnum::ML), tiles[4].getVertexAdr(vertexEnum::BL)});
    tiles[4].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[4].getEdgeAdr(edgeEnum::TL), tiles[4].getEdgeAdr(edgeEnum::B), tiles[6].getEdgeAdr(edgeEnum::T), tiles[6].getEdgeAdr(edgeEnum::BR)});

    // Tile 4, Edge 23
    tiles[4].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[4].getVertexAdr(vertexEnum::MR), tiles[4].getVertexAdr(vertexEnum::BR)});
    tiles[4].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[4].getEdgeAdr(edgeEnum::TR), tiles[4].getEdgeAdr(edgeEnum::B), tiles[7].getEdgeAdr(edgeEnum::T), tiles[7].getEdgeAdr(edgeEnum::BL)});

    // Tile 4, Vertex 20
    tiles[4].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[4].getVertexAdr(vertexEnum::ML), tiles[4].getVertexAdr(vertexEnum::BR), tiles[9].getVertexAdr(vertexEnum::ML)});
    tiles[4].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[4].getEdgeAdr(edgeEnum::BL), tiles[4].getEdgeAdr(edgeEnum::B), tiles[9].getEdgeAdr(edgeEnum::TL)});
    
    // Tile 4, Edge 27
    tiles[4].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[4].getVertexAdr(vertexEnum::BL), tiles[4].getVertexAdr(vertexEnum::BR)});
    tiles[4].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[4].getEdgeAdr(edgeEnum::BL), tiles[4].getEdgeAdr(edgeEnum::BR), tiles[9].getEdgeAdr(edgeEnum::TL), tiles[9].getEdgeAdr(edgeEnum::TR)});

    // Tile 4, Vertex 21
    tiles[4].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[4].getVertexAdr(vertexEnum::MR), tiles[4].getVertexAdr(vertexEnum::BL), tiles[9].getVertexAdr(vertexEnum::MR)});
    tiles[4].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[4].getEdgeAdr(edgeEnum::BR), tiles[4].getEdgeAdr(edgeEnum::B), tiles[9].getEdgeAdr(edgeEnum::TR)});

    // ---------------------------------------

    // TILE 5
    // Tile 5, Edge 11
    tiles[5].placeAdjVerticesE(edgeEnum::T,
        vector<Vertex*>{tiles[5].getVertexAdr(vertexEnum::TL), tiles[5].getVertexAdr(vertexEnum::TR)});
    tiles[5].placeAdjEdgesE(edgeEnum::T,
        vector<Edge*>{tiles[5].getEdgeAdr(edgeEnum::TL), tiles[5].getEdgeAdr(edgeEnum::TR)});

    // Tile 5, Vertex 11
    tiles[5].placeAdjVerticesV(vertexEnum::TR, 
        vector<Vertex*>{tiles[5].getVertexAdr(vertexEnum::TL), tiles[5].getVertexAdr(vertexEnum::MR), tiles[0].getVertexAdr(vertexEnum::MR)});
    tiles[5].placeAdjEdgesV(vertexEnum::TR, 
        vector<Edge*>{tiles[5].getEdgeAdr(edgeEnum::T), tiles[5].getEdgeAdr(edgeEnum::TR), tiles[0].getEdgeAdr(edgeEnum::BR)});

    // Tile 5, Edge 17
    tiles[5].placeAdjVerticesE(edgeEnum::TR, 
        vector<Vertex*>{tiles[5].getVertexAdr(vertexEnum::TR), tiles[5].getVertexAdr(vertexEnum::MR)});
    tiles[5].placeAdjEdgesE(edgeEnum::TR, 
        vector<Edge*>{tiles[5].getEdgeAdr(edgeEnum::T), tiles[5].getEdgeAdr(edgeEnum::BR), tiles[2].getEdgeAdr(edgeEnum::TL), tiles[2].getEdgeAdr(edgeEnum::B)});

    // Tile 5, Vertex 17
    tiles[5].placeAdjVerticesV(vertexEnum::MR, 
        vector<Vertex*>{tiles[5].getVertexAdr(vertexEnum::TR), tiles[5].getVertexAdr(vertexEnum::BR), tiles[7].getVertexAdr(vertexEnum::TR)});
    tiles[5].placeAdjEdgesV(vertexEnum::MR, 
        vector<Edge*>{tiles[5].getEdgeAdr(edgeEnum::TR), tiles[5].getEdgeAdr(edgeEnum::BR), tiles[7].getEdgeAdr(edgeEnum::T)});

    // Tile 5, Edge 24
    tiles[5].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[5].getVertexAdr(vertexEnum::ML), tiles[5].getVertexAdr(vertexEnum::BL)});
    tiles[5].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[5].getEdgeAdr(edgeEnum::TL), tiles[5].getEdgeAdr(edgeEnum::BL), tiles[7].getEdgeAdr(edgeEnum::T), tiles[7].getEdgeAdr(edgeEnum::BR)});

    // Tile 5, Edge 25
    tiles[5].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[5].getVertexAdr(vertexEnum::MR), tiles[5].getVertexAdr(vertexEnum::BR)});
    tiles[5].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[5].getEdgeAdr(edgeEnum::TR), tiles[5].getEdgeAdr(edgeEnum::B), tiles[10].getEdgeAdr(edgeEnum::TR)});

    // Tile 5, Vertex 22
    tiles[5].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[5].getVertexAdr(vertexEnum::ML), tiles[5].getVertexAdr(vertexEnum::BR), tiles[10].getVertexAdr(vertexEnum::ML)});
    tiles[5].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[5].getEdgeAdr(edgeEnum::BL), tiles[5].getEdgeAdr(edgeEnum::B), tiles[10].getEdgeAdr(edgeEnum::TL)});
    
    // Tile 5, Edge 28
    tiles[5].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[5].getVertexAdr(vertexEnum::BL), tiles[5].getVertexAdr(vertexEnum::BR)});
    tiles[5].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[5].getEdgeAdr(edgeEnum::BL), tiles[5].getEdgeAdr(edgeEnum::BR), tiles[10].getEdgeAdr(edgeEnum::TL), tiles[10].getEdgeAdr(edgeEnum::TR)});

    // Tile 5, Vertex 23
    tiles[5].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[5].getVertexAdr(vertexEnum::MR), tiles[5].getVertexAdr(vertexEnum::BL), tiles[10].getVertexAdr(vertexEnum::MR)});
    tiles[5].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[5].getEdgeAdr(edgeEnum::BR), tiles[5].getEdgeAdr(edgeEnum::B), tiles[10].getEdgeAdr(edgeEnum::TR)});
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