#include "stack.h"
#include "stackImplementation.cpp"
#include <iostream>
using namespace std;
int main(){
	Stack stack;
	stack.push(20);
	stack.push(30);
	stack.push(40);
	cout<<"The Top element is the stack is: "<<stack.top()<<endl;
	stack.pop();
	stack.pop();
	cout<<"The Top element is the stack is: "<<stack.top()<<endl;
	stack.pop();
	cout<<"Is Stack Empty? "<< (stack.isEmpty() ? "Yes" : "No")<<endl;
	return 0;
}