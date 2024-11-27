#ifndef STACK_H
#define STACK_H
class Node{
	private:
		int object;
		Node *nextNode;
	public:
		int get();
		void set(int object);
		Node *getNext();
		void setNext(Node *getNext);	
};
class Stack{
	private:
		Node *headNode;	
	public:
		Stack();
		void push (int x);
		int pop();
		int top();
		bool isEmpty();
		
};
#endif