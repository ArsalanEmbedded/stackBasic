# stackBasic
Just implemented basic Stack structure using Linked List. 
My code simply consists of a stack.h file, stackImplementation.cpp file and main.cpp.
In stack.h, I created a class called Node with data members as object and a pointer nextNode.
Member Functions of this class are get(), set(), getNext() and setNext()
Next I created stack class and only member was a pointer headNode.
Member functions of this class include push(), pop(), top(), isEmpty() and a constructor.

Next I have designed the member functions in the stackImplementation.cpp file.
Get() functions gets the data in the Node of a Linked List.
Set() sets the data.
GetNext() gets the nextNode pointer.
Finally SetNext() sets the NextNode pointer to point to the Node.
Push() function of the stack class pushes the element in the stack.
Pop() returns the most recently pushed element and also removes it from the stack.
Top() returns the most recently pushed element.
isEmpty is a boolean function and it checks whether the stack is empty or not.
Basically Stacks perform Last In First Out Behaviour so we can get only the most recent element from the stack.

Finally main.cpp runs the program by creating Object and Calling the desired functions.
That's it. I hope that some of the beginners might understand.
Good Luck.
