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
	return this->persona;
}
Node* Node::getNext(){
	return this->next;
}
void Node::setValue(Person persona){
	this->persona = persona;
}
void Node::setNext(Node* next){
	this->next = next;
}
bool Node::hasNext(){
	if(next==0){
		return false;
	}else{
		return true;
	}
}
