#include "node.hpp"
#include "list.hpp"

using namespace std;

List::List(){

}
List::List(Person persona){
	this->head = new Node(persona);
}
List::~List(){

}
void List::setHead(Person persona){
	this->head = new Node(persona);
}
Person List::getHead(){
	return head->getValue();
}
void List::insert(int posicion, Person persona){
	
}
Person List::at(int posicion){

}
void List::erase(int posicion){

}
void List::concat(List* lista){

}
int List::find(Person persona){
	int posicion=0;
	while(head->hasNext()){
		if(head->getValue().getName()==persona.getName() && head->getValue().getPhone()==persona.getPhone()){
			return posicion;
		}
	posicion++;
	}
}
int List::size(){
	int size=0;
	while(head->hasNext()){
		size++;
	}
	return size;
}
void List::push_back(Person persona){

}
Node* List::first(){

}
