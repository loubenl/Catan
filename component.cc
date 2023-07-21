#include "component.h"

using namespace std;
 
Component::Component(int location) : location{location} {}
Component::Component(int location,  Color playerType) : location{location}, playerType{playerType} {}
Edge::Edge(int location) : Component{location} {}
Vertex::Vertex(int location) : Component{location} {}