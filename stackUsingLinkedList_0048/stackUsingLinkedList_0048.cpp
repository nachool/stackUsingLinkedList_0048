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
		Node* newNode = new Node(); //1. allocate memory for the new node
		newNode->data = value; //2. assign value
		newNode->next = top; //3. set the next pointer of the new node to the current top node
		top = newNode; //4. update the top pointer to the new node
		cout << "push value: " << value << endl;
		return value;
	}

	//pop operation: remove the topmost element from the stack
	void pop() {

	}

	//peek/top opersastion: retrieve the value of the top most element without removing it
	void peek() {
		if (top == NULL) {
			cout << "List is empty." << endl;
			current - current->next;
		}
	}
};

int main()
{
   
}

