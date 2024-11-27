#include "stack.h"
#include <iostream>
using namespace std;
int Node::get(){
	return object;
}
void Node::set(int object){
	this->object = object;
}
Node *Node::getNext(){
	return nextNode;
}
void Node::setNext(Node *nextNode){
	this->nextNode = nextNode;
}
Stack::Stack(){
	headNode = NULL;
}
void Stack::push(int x){
	Node *newNode = new Node;
	newNode->set(x);
	newNode->setNext(headNode);
	headNode = newNode;
	cout<<x<<" pushed to the Stack"<<endl;
}
int Stack::pop(){
	Node *temp = headNode;
	int data = headNode->get();
	headNode = headNode->getNext();
	delete temp;
	cout<<data<<" has been popped from Stack"<<endl;
	return data;
}
bool Stack::isEmpty(){
	return headNode ==NULL;
}
int Stack::top(){
	if (isEmpty()){
		cout<<"No elements in the Stack."<<endl;
		return -1;
	}
	return headNode->get();
}





