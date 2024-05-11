#include <iostream>
using namespace std;

//Node class representing a single node in the linked list
class Node {
public:
	int data;
	Node* next;

	Node() {
		next = NULL;
	}
};

//stack class
class stack {
private:
	Node* top; //pointer to the top no de of the stack

public: 
	stack() {
		top = NULL; //initialize the stack with a null top pointer
	}

	//push operation: insert an element onto the top of the stack
	int push(int value) {
		Node* newNode(); //1. allocate memory for the new node
		newNode->data = value; //2. assign value
		newNode->next = top; //3. set the next pointer of the new node to the current top node
	}
};

int main()
{
   
}

