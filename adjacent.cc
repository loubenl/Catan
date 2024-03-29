#include <iostream>
#include "edgeEnum.h"
#include "vertexEnum.h"
#include "tile.h"

using namespace std;

int main() {
    Tile tiles[];

    // Tile 0, Vertex 0
    tiles[0].placeAdjVerticesV(vertexEnum::TL, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::TR), tiles[0].getVertexAdr(vertexEnum::ML)});
    tiles[0].placeAdjEdgesV(vertexEnum::TL, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::T), tiles[0].getEdgeAdr(edgeEnum::TL)});

    // Tile 0, Edge 0
    tiles[0].placeAdjVerticesE(edgeEnum::T,
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::TL), tiles[0].getVertexAdr(vertexEnum::TR)});
    tiles[0].placeAdjEdgesE(edgeEnum::T,
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::TL), tiles[0].getEdgeAdr(edgeEnum::TR)});

    // Tile 0, Vertex 1
    tiles[0].placeAdjVerticesV(vertexEnum::TR, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::TL), tiles[0].getVertexAdr(vertexEnum::MR)});
    tiles[0].placeAdjEdgesV(vertexEnum::TR, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::T), tiles[0].getEdgeAdr(edgeEnum::TR)});

    // Tile 0, Edge 1
    tiles[0].placeAdjVerticesE(edgeEnum::TL,
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::TL), tiles[0].getVertexAdr(vertexEnum::ML)});
    tiles[0].placeAdjEdgesE(edgeEnum::TL,
        vector<Edge*>{tiles[1].getEdgeAdr(edgeEnum::T), tiles[0].getEdgeAdr(edgeEnum::BL), tiles[0].getEdgeAdr(edgeEnum::T)});

    // Tile 0, Edge 2
    tiles[0].placeAdjVerticesE(edgeEnum::TR, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::TR), tiles[0].getVertexAdr(vertexEnum::MR)});
    tiles[0].placeAdjEdgesE(edgeEnum::TR, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::T), tiles[0].getEdgeAdr(edgeEnum::B), tiles[2].getEdgeAdr(edgeEnum::T)});

    // Tile 0, Vertex 3
    tiles[0].placeAdjVerticesV(vertexEnum::ML, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::TL), tiles[0].getVertexAdr(vertexEnum::BL), tiles[1].getVertexAdr(vertexEnum::TL)});
    tiles[0].placeAdjEdgesV(vertexEnum::ML, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::TL), tiles[0].getEdgeAdr(edgeEnum::BL), tiles[1].getEdgeAdr(edgeEnum::T)});

    // Tile 0, Vertex 4
    tiles[0].placeAdjVerticesV(vertexEnum::MR, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::TR), tiles[0].getVertexAdr(vertexEnum::BR), tiles[2].getVertexAdr(vertexEnum::TR)});
    tiles[0].placeAdjEdgesV(vertexEnum::MR, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::TR), tiles[0].getEdgeAdr(edgeEnum::BR), tiles[2].getEdgeAdr(edgeEnum::T)});

    // Tile 0, Edge 6
    tiles[0].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::ML), tiles[0].getVertexAdr(vertexEnum::BL)});
    tiles[0].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::TL), tiles[0].getEdgeAdr(edgeEnum::BL), tiles[1].getEdgeAdr(edgeEnum::T), tiles[1].getEdgeAdr(edgeEnum::BR)});

    // Tile 0, Edge 7
    tiles[0].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::MR), tiles[0].getVertexAdr(vertexEnum::BR)});
    tiles[0].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::TR), tiles[0].getEdgeAdr(edgeEnum::B), tiles[2].getEdgeAdr(edgeEnum::T), tiles[2].getEdgeAdr(edgeEnum::BL)});

    // Tile 0, Vertex 8
    tiles[0].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::ML), tiles[0].getVertexAdr(vertexEnum::BR), tiles[1].getVertexAdr(vertexEnum::BR)});
    tiles[0].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::BL), tiles[0].getEdgeAdr(edgeEnum::B), tiles[1].getEdgeAdr(edgeEnum::BR)});
    
    // Tile 0, Edge 10
    tiles[0].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::BL), tiles[0].getVertexAdr(vertexEnum::BR)});
    tiles[0].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::BL), tiles[0].getEdgeAdr(edgeEnum::BR), tiles[4].getEdgeAdr(edgeEnum::TL), tiles[4].getEdgeAdr(edgeEnum::TR)});

    // Tile 0, Vertex 9
    tiles[0].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[0].getVertexAdr(vertexEnum::MR), tiles[0].getVertexAdr(vertexEnum::BL), tiles[2].getVertexAdr(vertexEnum::BL)});
    tiles[0].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[0].getEdgeAdr(edgeEnum::BR), tiles[0].getEdgeAdr(edgeEnum::B), tiles[2].getEdgeAdr(edgeEnum::BL)});

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

    // Tile 6, Edge 30
    tiles[6].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[6].getVertexAdr(vertexEnum::ML), tiles[6].getVertexAdr(vertexEnum::BL)});
    tiles[6].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[6].getEdgeAdr(edgeEnum::TL), tiles[6].getEdgeAdr(edgeEnum::B), tiles[8].getEdgeAdr(edgeEnum::T), tiles[8].getEdgeAdr(edgeEnum::BR)});

    // Tile 6, Edge 31
    tiles[6].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[6].getVertexAdr(vertexEnum::MR), tiles[6].getVertexAdr(vertexEnum::BR)});
    tiles[6].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[6].getEdgeAdr(edgeEnum::TR), tiles[6].getEdgeAdr(edgeEnum::B), tiles[9].getEdgeAdr(edgeEnum::T), tiles[9].getEdgeAdr(edgeEnum::BL)});

    // Tile 6, Vertex 25
    tiles[6].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[6].getVertexAdr(vertexEnum::ML), tiles[6].getVertexAdr(vertexEnum::BR), tiles[8].getVertexAdr(vertexEnum::BR)});
    tiles[6].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[6].getEdgeAdr(edgeEnum::BL), tiles[6].getEdgeAdr(edgeEnum::B), tiles[8].getEdgeAdr(edgeEnum::BR)});
    
    // Tile 6, Edge 35
    tiles[6].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[6].getVertexAdr(vertexEnum::BL), tiles[6].getVertexAdr(vertexEnum::BR)});
    tiles[6].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[6].getEdgeAdr(edgeEnum::BL), tiles[6].getEdgeAdr(edgeEnum::BR), tiles[11].getEdgeAdr(edgeEnum::TL), tiles[11].getEdgeAdr(edgeEnum::TR)});

    // Tile 6, Vertex 26
    tiles[6].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[6].getVertexAdr(vertexEnum::MR), tiles[6].getVertexAdr(vertexEnum::BL), tiles[11].getVertexAdr(vertexEnum::MR)});
    tiles[6].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[6].getEdgeAdr(edgeEnum::BR), tiles[6].getEdgeAdr(edgeEnum::B), tiles[11].getEdgeAdr(edgeEnum::TR)});

    // Tile 7, Edge 32
    tiles[7].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[7].getVertexAdr(vertexEnum::ML), tiles[7].getVertexAdr(vertexEnum::BL)});
    tiles[7].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[7].getEdgeAdr(edgeEnum::TL), tiles[7].getEdgeAdr(edgeEnum::B), tiles[9].getEdgeAdr(edgeEnum::T), tiles[9].getEdgeAdr(edgeEnum::BR)});

    // Tile 7, Edge 33
    tiles[7].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[7].getVertexAdr(vertexEnum::MR), tiles[7].getVertexAdr(vertexEnum::BR)});
    tiles[7].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[7].getEdgeAdr(edgeEnum::TR), tiles[7].getEdgeAdr(edgeEnum::B), tiles[10].getEdgeAdr(edgeEnum::T), tiles[10].getEdgeAdr(edgeEnum::BL)});

    // Tile 7, Vertex 27
    tiles[7].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[7].getVertexAdr(vertexEnum::ML), tiles[7].getVertexAdr(vertexEnum::BR), tiles[9].getVertexAdr(vertexEnum::BR)});
    tiles[7].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[7].getEdgeAdr(edgeEnum::BL), tiles[7].getEdgeAdr(edgeEnum::B), tiles[9].getEdgeAdr(edgeEnum::BR)});
    
    // Tile 7, Edge 36
    tiles[7].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[7].getVertexAdr(vertexEnum::BL), tiles[7].getVertexAdr(vertexEnum::BR)});
    tiles[7].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[7].getEdgeAdr(edgeEnum::BL), tiles[7].getEdgeAdr(edgeEnum::BR), tiles[12].getEdgeAdr(edgeEnum::TL), tiles[12].getEdgeAdr(edgeEnum::TR)});

    // Tile 7, Vertex 28
    tiles[7].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[7].getVertexAdr(vertexEnum::MR), tiles[7].getVertexAdr(vertexEnum::BL), tiles[12].getVertexAdr(vertexEnum::MR)});
    tiles[7].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[7].getEdgeAdr(edgeEnum::BR), tiles[7].getEdgeAdr(edgeEnum::B), tiles[12].getEdgeAdr(edgeEnum::TR)});

    // Tile 8, Edge 29
    tiles[8].placeAdjVerticesE(edgeEnum::TL,
        vector<Vertex*>{tiles[8].getVertexAdr(vertexEnum::TL), tiles[8].getVertexAdr(vertexEnum::ML)});
    tiles[8].placeAdjEdgesE(edgeEnum::TL,
        vector<Edge*>{tiles[8].getEdgeAdr(edgeEnum::T), tiles[8].getEdgeAdr(edgeEnum::BL), tiles[4].getEdgeAdr(edgeEnum::BL), tiles[4].getEdgeAdr(edgeEnum::B)});

    // Tile 8, Vertex 24
    tiles[8].placeAdjVerticesV(vertexEnum::ML, 
        vector<Vertex*>{tiles[8].getVertexAdr(vertexEnum::TL), tiles[8].getVertexAdr(vertexEnum::BL)});
    tiles[8].placeAdjEdgesV(vertexEnum::ML, 
        vector<Edge*>{tiles[8].getEdgeAdr(edgeEnum::TL), tiles[8].getEdgeAdr(edgeEnum::BL)});

    // Tile 8, Edge 37
    tiles[8].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[8].getVertexAdr(vertexEnum::ML), tiles[8].getVertexAdr(vertexEnum::BL)});
    tiles[8].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[8].getEdgeAdr(edgeEnum::TL), tiles[8].getEdgeAdr(edgeEnum::B), tiles[13].getEdgeAdr(edgeEnum::TL)});

    // Tile 8, Edge 38
    tiles[8].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[8].getVertexAdr(vertexEnum::MR), tiles[8].getVertexAdr(vertexEnum::BR)});
    tiles[8].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[8].getEdgeAdr(edgeEnum::TR), tiles[8].getEdgeAdr(edgeEnum::B), tiles[11].getEdgeAdr(edgeEnum::T), tiles[11].getEdgeAdr(edgeEnum::BL)});

    // Tile 8, Vertex 30
    tiles[8].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[8].getVertexAdr(vertexEnum::ML), tiles[8].getVertexAdr(vertexEnum::BR), tiles[13].getVertexAdr(vertexEnum::ML)});
    tiles[8].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[8].getEdgeAdr(edgeEnum::BL), tiles[8].getEdgeAdr(edgeEnum::B), tiles[13].getEdgeAdr(edgeEnum::TL)});
    
    // Tile 8, Edge 43
    tiles[8].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[8].getVertexAdr(vertexEnum::BL), tiles[8].getVertexAdr(vertexEnum::BR)});
    tiles[8].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[8].getEdgeAdr(edgeEnum::BL), tiles[8].getEdgeAdr(edgeEnum::BR), tiles[13].getEdgeAdr(edgeEnum::TL), tiles[13].getEdgeAdr(edgeEnum::TR)});

    // Tile 8, Vertex 31
    tiles[8].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[8].getVertexAdr(vertexEnum::MR), tiles[8].getVertexAdr(vertexEnum::BL), tiles[13].getVertexAdr(vertexEnum::MR)});
    tiles[8].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[8].getEdgeAdr(edgeEnum::BR), tiles[8].getEdgeAdr(edgeEnum::B), tiles[13].getEdgeAdr(edgeEnum::TR)});

    // Tile 9, Edge 39
    tiles[9].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[9].getVertexAdr(vertexEnum::ML), tiles[9].getVertexAdr(vertexEnum::BL)});
    tiles[9].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[9].getEdgeAdr(edgeEnum::TL), tiles[9].getEdgeAdr(edgeEnum::B), tiles[11].getEdgeAdr(edgeEnum::T), tiles[11].getEdgeAdr(edgeEnum::BR)});

    // Tile 9, Edge 40
    tiles[9].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[9].getVertexAdr(vertexEnum::MR), tiles[9].getVertexAdr(vertexEnum::BR)});
    tiles[9].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[9].getEdgeAdr(edgeEnum::TR), tiles[9].getEdgeAdr(edgeEnum::B), tiles[12].getEdgeAdr(edgeEnum::T), tiles[12].getEdgeAdr(edgeEnum::BL)});

    // Tile 9, Vertex 32
    tiles[9].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[9].getVertexAdr(vertexEnum::ML), tiles[9].getVertexAdr(vertexEnum::BR), tiles[14].getVertexAdr(vertexEnum::ML)});
    tiles[9].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[9].getEdgeAdr(edgeEnum::BL), tiles[9].getEdgeAdr(edgeEnum::B), tiles[14].getEdgeAdr(edgeEnum::TL)});
    
    // Tile 9, Edge 44
    tiles[9].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[9].getVertexAdr(vertexEnum::BL), tiles[9].getVertexAdr(vertexEnum::BR)});
    tiles[9].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[9].getEdgeAdr(edgeEnum::BL), tiles[9].getEdgeAdr(edgeEnum::BR), tiles[14].getEdgeAdr(edgeEnum::TL), tiles[14].getEdgeAdr(edgeEnum::TR)});

    // Tile 9, Vertex 33
    tiles[9].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[9].getVertexAdr(vertexEnum::MR), tiles[9].getVertexAdr(vertexEnum::BL), tiles[2].getVertexAdr(vertexEnum::MR)});
    tiles[9].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[9].getEdgeAdr(edgeEnum::BR), tiles[9].getEdgeAdr(edgeEnum::B), tiles[14].getEdgeAdr(edgeEnum::TR)});

    // Tile 10, Edge 34
    tiles[10].placeAdjVerticesE(edgeEnum::TR, 
        vector<Vertex*>{tiles[10].getVertexAdr(vertexEnum::TR), tiles[10].getVertexAdr(vertexEnum::MR)});
    tiles[10].placeAdjEdgesE(edgeEnum::TR, 
        vector<Edge*>{tiles[10].getEdgeAdr(edgeEnum::T), tiles[10].getEdgeAdr(edgeEnum::BR), tiles[5].getEdgeAdr(edgeEnum::BR)});

    // Tile 10, Vertex 29
    tiles[10].placeAdjVerticesV(vertexEnum::MR, 
        vector<Vertex*>{tiles[10].getVertexAdr(vertexEnum::TR), tiles[10].getVertexAdr(vertexEnum::BR)});
    tiles[10].placeAdjEdgesV(vertexEnum::MR, 
        vector<Edge*>{tiles[10].getEdgeAdr(edgeEnum::TR), tiles[10].getEdgeAdr(edgeEnum::BR)});

    // Tile 10, Edge 41
    tiles[10].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[10].getVertexAdr(vertexEnum::ML), tiles[10].getVertexAdr(vertexEnum::BL)});
    tiles[10].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[10].getEdgeAdr(edgeEnum::TL), tiles[10].getEdgeAdr(edgeEnum::B), tiles[12].getEdgeAdr(edgeEnum::T), tiles[12].getEdgeAdr(edgeEnum::BR)});

    // Tile 10, Edge 42
    tiles[10].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[10].getVertexAdr(vertexEnum::MR), tiles[10].getVertexAdr(vertexEnum::BR)});
    tiles[10].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[10].getEdgeAdr(edgeEnum::TR), tiles[10].getEdgeAdr(edgeEnum::B), tiles[15].getEdgeAdr(edgeEnum::TR)});

    // Tile 10, Vertex 34
    tiles[10].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[10].getVertexAdr(vertexEnum::ML), tiles[10].getVertexAdr(vertexEnum::BR), tiles[15].getVertexAdr(vertexEnum::ML)});
    tiles[10].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[10].getEdgeAdr(edgeEnum::BL), tiles[10].getEdgeAdr(edgeEnum::B), tiles[15].getEdgeAdr(edgeEnum::TL)});
    
    // Tile 10, Edge 45
    tiles[10].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[10].getVertexAdr(vertexEnum::BL), tiles[10].getVertexAdr(vertexEnum::BR)});
    tiles[10].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[10].getEdgeAdr(edgeEnum::BL), tiles[10].getEdgeAdr(edgeEnum::BR), tiles[15].getEdgeAdr(edgeEnum::TL), tiles[15].getEdgeAdr(edgeEnum::TR)});

    // Tile 10, Vertex 35
    tiles[10].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[10].getVertexAdr(vertexEnum::MR), tiles[10].getVertexAdr(vertexEnum::BL), tiles[15].getVertexAdr(vertexEnum::MR)});
    tiles[10].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[10].getEdgeAdr(edgeEnum::BR), tiles[10].getEdgeAdr(edgeEnum::B), tiles[15].getEdgeAdr(edgeEnum::TR)});

    // Tile 11, Edge 47
    tiles[11].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[11].getVertexAdr(vertexEnum::ML), tiles[11].getVertexAdr(vertexEnum::BL)});
    tiles[11].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[11].getEdgeAdr(edgeEnum::TL), tiles[11].getEdgeAdr(edgeEnum::B), tiles[13].getEdgeAdr(edgeEnum::TL)});

    // Tile 11, Edge 48
    tiles[11].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[11].getVertexAdr(vertexEnum::MR), tiles[11].getVertexAdr(vertexEnum::BR)});
    tiles[11].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[11].getEdgeAdr(edgeEnum::TR), tiles[11].getEdgeAdr(edgeEnum::B), tiles[14].getEdgeAdr(edgeEnum::T), tiles[14].getEdgeAdr(edgeEnum::BL)});

    // Tile 11, Vertex 37
    tiles[11].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[11].getVertexAdr(vertexEnum::ML), tiles[11].getVertexAdr(vertexEnum::BR), tiles[13].getVertexAdr(vertexEnum::ML)});
    tiles[11].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[11].getEdgeAdr(edgeEnum::BL), tiles[11].getEdgeAdr(edgeEnum::B), tiles[13].getEdgeAdr(edgeEnum::BR)});
    
    // Tile 11, Edge 52
    tiles[11].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[11].getVertexAdr(vertexEnum::BL), tiles[11].getVertexAdr(vertexEnum::BR)});
    tiles[11].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[11].getEdgeAdr(edgeEnum::BL), tiles[11].getEdgeAdr(edgeEnum::BR), tiles[16].getEdgeAdr(edgeEnum::TL), tiles[16].getEdgeAdr(edgeEnum::TR)});

    // Tile 11, Vertex 38
    tiles[11].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[11].getVertexAdr(vertexEnum::MR), tiles[11].getVertexAdr(vertexEnum::BL), tiles[16].getVertexAdr(vertexEnum::MR)});
    tiles[11].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[11].getEdgeAdr(edgeEnum::BR), tiles[11].getEdgeAdr(edgeEnum::B), tiles[16].getEdgeAdr(edgeEnum::TR)});

    // Tile 12, Edge 49
    tiles[12].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[12].getVertexAdr(vertexEnum::ML), tiles[12].getVertexAdr(vertexEnum::BL)});
    tiles[12].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[12].getEdgeAdr(edgeEnum::TL), tiles[12].getEdgeAdr(edgeEnum::B), tiles[14].getEdgeAdr(edgeEnum::T), tiles[14].getEdgeAdr(edgeEnum::BR)});

    // Tile 12, Edge 50
    tiles[12].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[12].getVertexAdr(vertexEnum::MR), tiles[12].getVertexAdr(vertexEnum::BR)});
    tiles[12].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[12].getEdgeAdr(edgeEnum::TR), tiles[12].getEdgeAdr(edgeEnum::B), tiles[15].getEdgeAdr(edgeEnum::T), tiles[15].getEdgeAdr(edgeEnum::BL)});

    // Tile 12, Vertex 39
    tiles[12].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[12].getVertexAdr(vertexEnum::ML), tiles[12].getVertexAdr(vertexEnum::BR), tiles[14].getVertexAdr(vertexEnum::ML)});
    tiles[12].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[12].getEdgeAdr(edgeEnum::BL), tiles[12].getEdgeAdr(edgeEnum::B), tiles[14].getEdgeAdr(edgeEnum::BR)});
    
    // Tile 12, Edge 53
    tiles[12].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[12].getVertexAdr(vertexEnum::BL), tiles[12].getVertexAdr(vertexEnum::BR)});
    tiles[12].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[12].getEdgeAdr(edgeEnum::BL), tiles[12].getEdgeAdr(edgeEnum::BR), tiles[17].getEdgeAdr(edgeEnum::TL), tiles[17].getEdgeAdr(edgeEnum::TR)});

    // Tile 12, Vertex 40
    tiles[12].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[12].getVertexAdr(vertexEnum::MR), tiles[12].getVertexAdr(vertexEnum::BL), tiles[14].getVertexAdr(vertexEnum::MR)});
    tiles[12].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[12].getEdgeAdr(edgeEnum::BR), tiles[12].getEdgeAdr(edgeEnum::B), tiles[17].getEdgeAdr(edgeEnum::TR)});

    // Tile 13, Edge 46
    tiles[13].placeAdjVerticesE(edgeEnum::TL,
        vector<Vertex*>{tiles[13].getVertexAdr(vertexEnum::TL), tiles[13].getVertexAdr(vertexEnum::ML)});
    tiles[13].placeAdjEdgesE(edgeEnum::TL,
        vector<Edge*>{tiles[1].getEdgeAdr(edgeEnum::T), tiles[13].getEdgeAdr(edgeEnum::BL), tiles[8].getEdgeAdr(edgeEnum::BL)});

    // Tile 13, Vertex 36
    tiles[13].placeAdjVerticesV(vertexEnum::ML, 
        vector<Vertex*>{tiles[13].getVertexAdr(vertexEnum::TL), tiles[13].getVertexAdr(vertexEnum::BL)});
    tiles[13].placeAdjEdgesV(vertexEnum::ML, 
        vector<Edge*>{tiles[13].getEdgeAdr(edgeEnum::TL), tiles[13].getEdgeAdr(edgeEnum::BL)});

    // Tile 13, Edge 54
    tiles[13].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[13].getVertexAdr(vertexEnum::ML), tiles[13].getVertexAdr(vertexEnum::BL)});
    tiles[13].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[13].getEdgeAdr(edgeEnum::TL), tiles[13].getEdgeAdr(edgeEnum::B)});

    // Tile 13, Edge 55
    tiles[13].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[13].getVertexAdr(vertexEnum::MR), tiles[13].getVertexAdr(vertexEnum::BR)});
    tiles[13].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[13].getEdgeAdr(edgeEnum::TR), tiles[13].getEdgeAdr(edgeEnum::B), tiles[16].getEdgeAdr(edgeEnum::T), tiles[16].getEdgeAdr(edgeEnum::BL)});

    // Tile 13, Vertex 42
    tiles[13].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[13].getVertexAdr(vertexEnum::ML), tiles[13].getVertexAdr(vertexEnum::BR)});
    tiles[13].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[13].getEdgeAdr(edgeEnum::BL), tiles[13].getEdgeAdr(edgeEnum::B)});
    
    // Tile 13, Edge 60
    tiles[13].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[13].getVertexAdr(vertexEnum::BL), tiles[13].getVertexAdr(vertexEnum::BR)});
    tiles[13].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[13].getEdgeAdr(edgeEnum::BL), tiles[13].getEdgeAdr(edgeEnum::BR), tiles[16].getEdgeAdr(edgeEnum::BL)});

    // Tile 13, Vertex 43
    tiles[13].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[13].getVertexAdr(vertexEnum::MR), tiles[13].getVertexAdr(vertexEnum::BL), tiles[16].getVertexAdr(vertexEnum::BL)});
    tiles[13].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[13].getEdgeAdr(edgeEnum::BR), tiles[13].getEdgeAdr(edgeEnum::B), tiles[16].getEdgeAdr(edgeEnum::BL)});

    // Tile 14, Edge 56
    tiles[14].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[14].getVertexAdr(vertexEnum::ML), tiles[14].getVertexAdr(vertexEnum::BL)});
    tiles[14].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[14].getEdgeAdr(edgeEnum::TL), tiles[14].getEdgeAdr(edgeEnum::B), tiles[16].getEdgeAdr(edgeEnum::T), tiles[16].getEdgeAdr(edgeEnum::BR)});

    // Tile 14, Edge 57
    tiles[14].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[14].getVertexAdr(vertexEnum::MR), tiles[14].getVertexAdr(vertexEnum::BR)});
    tiles[14].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[14].getEdgeAdr(edgeEnum::TR), tiles[14].getEdgeAdr(edgeEnum::B), tiles[17].getEdgeAdr(edgeEnum::T), tiles[17].getEdgeAdr(edgeEnum::BL)});

    // Tile 14, Vertex 44
    tiles[14].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[14].getVertexAdr(vertexEnum::ML), tiles[14].getVertexAdr(vertexEnum::BR), tiles[16].getVertexAdr(vertexEnum::BR)});
    tiles[14].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[14].getEdgeAdr(edgeEnum::BL), tiles[14].getEdgeAdr(edgeEnum::B), tiles[16].getEdgeAdr(edgeEnum::BR)});
    
    // Tile 14, Edge 61
    tiles[14].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[14].getVertexAdr(vertexEnum::BL), tiles[14].getVertexAdr(vertexEnum::BR)});
    tiles[14].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[14].getEdgeAdr(edgeEnum::BL), tiles[14].getEdgeAdr(edgeEnum::BR), tiles[18].getEdgeAdr(edgeEnum::TL), tiles[18].getEdgeAdr(edgeEnum::TR)});

    // Tile 14, Vertex 45
    tiles[14].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[14].getVertexAdr(vertexEnum::MR), tiles[14].getVertexAdr(vertexEnum::BL), tiles[18].getVertexAdr(vertexEnum::MR)});
    tiles[14].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[14].getEdgeAdr(edgeEnum::BR), tiles[14].getEdgeAdr(edgeEnum::B), tiles[18].getEdgeAdr(edgeEnum::TR)});

    // Tile 15, Edge 51
    tiles[15].placeAdjVerticesE(edgeEnum::TR, 
        vector<Vertex*>{tiles[15].getVertexAdr(vertexEnum::TR), tiles[15].getVertexAdr(vertexEnum::MR)});
    tiles[15].placeAdjEdgesE(edgeEnum::TR, 
        vector<Edge*>{tiles[15].getEdgeAdr(edgeEnum::T), tiles[15].getEdgeAdr(edgeEnum::BR), tiles[10].getEdgeAdr(edgeEnum::BR)});

    // Tile 15, Vertex 41
    tiles[15].placeAdjVerticesV(vertexEnum::MR, 
        vector<Vertex*>{tiles[15].getVertexAdr(vertexEnum::TR), tiles[15].getVertexAdr(vertexEnum::BR)});
    tiles[15].placeAdjEdgesV(vertexEnum::MR, 
        vector<Edge*>{tiles[15].getEdgeAdr(edgeEnum::TR), tiles[15].getEdgeAdr(edgeEnum::BR)});

    // Tile 15, Edge 58
    tiles[15].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[15].getVertexAdr(vertexEnum::ML), tiles[15].getVertexAdr(vertexEnum::BL)});
    tiles[15].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[15].getEdgeAdr(edgeEnum::TL), tiles[15].getEdgeAdr(edgeEnum::B), tiles[17].getEdgeAdr(edgeEnum::T), tiles[17].getEdgeAdr(edgeEnum::BR)});

    // Tile 15, Edge 59
    tiles[15].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[15].getVertexAdr(vertexEnum::MR), tiles[15].getVertexAdr(vertexEnum::BR)});
    tiles[15].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[15].getEdgeAdr(edgeEnum::TR), tiles[15].getEdgeAdr(edgeEnum::B)});

    // Tile 15, Vertex 46
    tiles[15].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[15].getVertexAdr(vertexEnum::ML), tiles[15].getVertexAdr(vertexEnum::BR), tiles[17].getVertexAdr(vertexEnum::BR)});
    tiles[15].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[15].getEdgeAdr(edgeEnum::BL), tiles[15].getEdgeAdr(edgeEnum::B), tiles[17].getEdgeAdr(edgeEnum::BR)});
    
    // Tile 15, Edge 62
    tiles[15].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[15].getVertexAdr(vertexEnum::BL), tiles[15].getVertexAdr(vertexEnum::BR)});
    tiles[15].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[15].getEdgeAdr(edgeEnum::BL), tiles[15].getEdgeAdr(edgeEnum::BR), tiles[17].getEdgeAdr(edgeEnum::T=BR)});

    // Tile 15, Vertex 47
    tiles[15].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[15].getVertexAdr(vertexEnum::MR), tiles[15].getVertexAdr(vertexEnum::BL)});
    tiles[15].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[15].getEdgeAdr(edgeEnum::BR), tiles[15].getEdgeAdr(edgeEnum::B)});

    // Tile 16, Edge 63
    tiles[16].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[16].getVertexAdr(vertexEnum::ML), tiles[16].getVertexAdr(vertexEnum::BL)});
    tiles[16].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[16].getEdgeAdr(edgeEnum::TL), tiles[16].getEdgeAdr(edgeEnum::B), tiles[13].getEdgeAdr(edgeEnum::B)});

    // Tile 16, Edge 64
    tiles[16].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[16].getVertexAdr(vertexEnum::MR), tiles[16].getVertexAdr(vertexEnum::BR)});
    tiles[16].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[16].getEdgeAdr(edgeEnum::TR), tiles[16].getEdgeAdr(edgeEnum::B), tiles[18].getEdgeAdr(edgeEnum::T), tiles[18].getEdgeAdr(edgeEnum::BL)});

    // Tile 16, Vertex 48
    tiles[16].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[16].getVertexAdr(vertexEnum::ML), tiles[16].getVertexAdr(vertexEnum::BR)});
    tiles[16].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[16].getEdgeAdr(edgeEnum::BL), tiles[16].getEdgeAdr(edgeEnum::B)});
    
    // Tile 16, Edge 67
    tiles[16].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[16].getVertexAdr(vertexEnum::BL), tiles[16].getVertexAdr(vertexEnum::BR)});
    tiles[16].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[16].getEdgeAdr(edgeEnum::BL), tiles[16].getEdgeAdr(edgeEnum::BR), tiles[18].getEdgeAdr(edgeEnum::BL)});

    // Tile 16, Vertex 49
    tiles[16].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[16].getVertexAdr(vertexEnum::MR), tiles[16].getVertexAdr(vertexEnum::BL), tiles[18].getVertexAdr(vertexEnum::BL)});
    tiles[16].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[16].getEdgeAdr(edgeEnum::BR), tiles[16].getEdgeAdr(edgeEnum::B), tiles[18].getEdgeAdr(edgeEnum::BL)});

    // Tile 17, Edge 65
    tiles[17].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[17].getVertexAdr(vertexEnum::ML), tiles[17].getVertexAdr(vertexEnum::BL)});
    tiles[17].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[17].getEdgeAdr(edgeEnum::TL), tiles[17].getEdgeAdr(edgeEnum::B), tiles[18].getEdgeAdr(edgeEnum::T), tiles[18].getEdgeAdr(edgeEnum::BR)});

    // Tile 17, Edge 66
    tiles[17].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[17].getVertexAdr(vertexEnum::MR), tiles[17].getVertexAdr(vertexEnum::BR)});
    tiles[17].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[17].getEdgeAdr(edgeEnum::TR), tiles[17].getEdgeAdr(edgeEnum::B), tiles[15].getEdgeAdr(edgeEnum::B)});

    // Tile 17, Vertex 50
    tiles[17].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[17].getVertexAdr(vertexEnum::ML), tiles[17].getVertexAdr(vertexEnum::BR)});
    tiles[17].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[17].getEdgeAdr(edgeEnum::BL), tiles[17].getEdgeAdr(edgeEnum::B)});
    
    // Tile 17, Edge 68
    tiles[17].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[17].getVertexAdr(vertexEnum::BL), tiles[17].getVertexAdr(vertexEnum::BR)});
    tiles[17].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[17].getEdgeAdr(edgeEnum::BL), tiles[17].getEdgeAdr(edgeEnum::BR), tiles[18].getEdgeAdr(edgeEnum::BR)});

    // Tile 17, Vertex 51
    tiles[17].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[17].getVertexAdr(vertexEnum::MR), tiles[17].getVertexAdr(vertexEnum::BL)});
    tiles[17].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[17].getEdgeAdr(edgeEnum::BR), tiles[17].getEdgeAdr(edgeEnum::B)});

    // Tile 18, Edge 69
    tiles[18].placeAdjVerticesE(edgeEnum::BL, 
        vector<Vertex*>{tiles[18].getVertexAdr(vertexEnum::ML), tiles[18].getVertexAdr(vertexEnum::BL)});
    tiles[18].placeAdjEdgesE(edgeEnum::BL, 
        vector<Edge*>{tiles[18].getEdgeAdr(edgeEnum::TL), tiles[18].getEdgeAdr(edgeEnum::B), tiles[16].getEdgeAdr(edgeEnum::B)});

    // Tile 18, Edge 70
    tiles[18].placeAdjVerticesE(edgeEnum::BR, 
        vector<Vertex*>{tiles[18].getVertexAdr(vertexEnum::MR), tiles[18].getVertexAdr(vertexEnum::BR)});
    tiles[18].placeAdjEdgesE(edgeEnum::BR, 
        vector<Edge*>{tiles[18].getEdgeAdr(edgeEnum::TR), tiles[18].getEdgeAdr(edgeEnum::B), tiles[17].getEdgeAdr(edgeEnum::B)});

    // Tile 18, Vertex 52
    tiles[18].placeAdjVerticesV(vertexEnum::BL, 
        vector<Vertex*>{tiles[18].getVertexAdr(vertexEnum::ML), tiles[18].getVertexAdr(vertexEnum::BR)});
    tiles[18].placeAdjEdgesV(vertexEnum::BL, 
        vector<Edge*>{tiles[18].getEdgeAdr(edgeEnum::BL), tiles[18].getEdgeAdr(edgeEnum::B)});
    
    // Tile 18, Edge 71
    tiles[18].placeAdjVerticesE(edgeEnum::B, 
        vector<Vertex*>{tiles[18].getVertexAdr(vertexEnum::BL), tiles[18].getVertexAdr(vertexEnum::BR)});
    tiles[18].placeAdjEdgesE(edgeEnum::B, 
        vector<Edge*>{tiles[18].getEdgeAdr(edgeEnum::BL), tiles[18].getEdgeAdr(edgeEnum::BR)});

    // Tile 18, Vertex 53
    tiles[18].placeAdjVerticesV(vertexEnum::BR, 
        vector<Vertex*>{tiles[18].getVertexAdr(vertexEnum::MR), tiles[18].getVertexAdr(vertexEnum::BL)});
    tiles[18].placeAdjEdgesV(vertexEnum::BR, 
        vector<Edge*>{tiles[18].getEdgeAdr(edgeEnum::BR), tiles[18].getEdgeAdr(edgeEnum::B)});
}
