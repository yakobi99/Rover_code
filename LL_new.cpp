// File: LL_new.cpp

#include<iostream>
#include<cstdlib>
#include"LL_new.h"

using namespace std;

List::List() { // constructor

	// Initialize list pointers

	head = NULL;
	curr = NULL;
	temp = NULL;
}

void List::addNode(float *newCoord) {

	nodePtr n = new node;		// create new node
	n->next = NULL;				// set new node as end of list, pointing to nothing
	
	for(int i=0; i<VECTOR_SIZE; i++) {
	
		n->coord[i] = newCoord[i];			// store data
	}

	if(head != NULL) {			// check to see if a list already exists

		curr = head;			// set the current node to the front of the list

		while(curr->next != NULL) { // while we're not at the end of the list

			curr = curr->next;	// advance until the end of the list
		}

		curr->next = n;			// attach new node to the end of the list
	} 

	else {

		head = n;				/* if the new node is the first node in the list, 
									set it as the head of the list */

	}
}

void List::delNode(float *delCoord) {


// code here

}

void List::printList() {

	temp = head;

	cout << "[";

	while(temp != NULL) {

		for(int i=0; i<VECTOR_SIZE; i++) {

			if(i < (VECTOR_SIZE - 1)) printf("%0.4f ", temp->coord[i]);

			else printf("%0.4f ]\n", temp->coord[i]);
		}

		temp = temp->next;

		if(temp == NULL) cout << "End of List" << endl;
	}

	cout << endl;
}