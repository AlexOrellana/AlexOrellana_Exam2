#include "node.hpp"
#include <string>
#include "person.hpp"

using namespace std;

Node::Node(){

}
Node::Node(Person persona){
	this->persona=persona;
}
Node::~Node(){

}
Person Node::getValue(){
	return persona;
}
Node* Node::getNext(){
	
}
void Node::setValue(Person persona){

}
void Node::setNext(Node* next){

}
bool Node::hasNext(){

}
