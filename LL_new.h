// File: LL_new.h

#include<iostream>

#define VECTOR_SIZE 3				// define vector size

class List {

public:						

	List();							// used to initialize variables
	void addNode(float* newCoord);	// creates a node, adds the data, then links to the list
	void delNode(float* delCoord);	// not used
	void printList();				// prints the list starting from the head

private:

	// define node structure

	typedef struct node {			
		float coord[VECTOR_SIZE];	// define data & type, can be whatever you want
		node* next;					// define next node, which is used to link other nodes
	} *nodePtr;						// create new nodes by using type 'nodePtr'

	nodePtr temp;			// temporary node
	nodePtr head;			// head node
	nodePtr curr;			// current node
};