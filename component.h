#ifndef COMPONENT_H
#define COMPONENT_H
#include <vector>
#include <string>
#include "residenceEnum.h"
#include "colorEnum.h"

using namespace std; 

class Edge;
class Vertex;
 
class Component {   

 protected:
 	std::string location; //vertex number or edge number
	Color player = Color::DNE; //Player that built res/road
	//std::vector<Vertex*> adjVertices;
	//std::vector<Edge*> adjEdges;
	std::vector<Vertex*> adjVertices; // PRIVATE
	std::vector<Edge*> adjEdges; // PRIVATE


	
	bool isOccupied();
	//bool hasAdjVertices() const;
	//bool hasAdjEdges() const;
 public:
 	bool isOwnedBy(Color color);
 	//std::string location; //vertex number or edge number // PRIVATE
 
	explicit Component(std::string location);
	//Component(std::string location,  Color playerType);
	// virtual void print() const = 0;
	void setAdjV(std::vector<Vertex*> &&adjVertices);
	void setAdjE(std::vector<Edge*> &&adjEdges);
	bool isNum(std::string num); // returns true if location matches the location of the vertex/edge
	bool isPlayer(Color c);
	std::string getLocation();
	std::string getPlayer();
};


class Edge final : public Component {
	bool isRoad = false;
 public:
	explicit Edge(std::string location); // ctor
	void setValidRoad(Color color); // places a road, known to be valid
	string getEdge();
	// void print() const override;
	//void checkRoad(Color color, int edge) const; // ???
};




class Vertex final : public Component {
	Residence residenceType = Residence::NONE;
 public: 
	explicit Vertex(std::string location);
	int getResidenceAmount(Color color) const; // returns the corresponding num for a residence only if its owned by color
	void setValidRes(Color color, Residence res);
	Residence getRes();
	/* throws true if vertex found and basement was placed.
        throws false if vertex found and basement can't be placed.
        doesn't do anything if vertex not found. */
	void placeBasement(std::string bVertex, Color c, bool isDuringTurn);
	string getVertex(); 

	//void printResidences() const;
	//void print() const override;

};

#endif