// File: main.cpp

#include<iostream>
#include<cstdlib>
#include"LL_new.h"

using namespace std;

int main() {

	srand(time(NULL));			// used to generate random seed

	float coord[VECTOR_SIZE]; 	// test coordinate

	List test;					// declare object

	for(int i=0; i<10; i++) { 	// generate 100 nodes

		for(int j=0; j<VECTOR_SIZE; j++) { 

			coord[j] = float(rand()) / float(RAND_MAX) * 100.0; /* store randomly generated coordinates
																into array indeces */
		}


		test.addNode(coord); // add the coordinate and create a node
	}

	test.printList(); // print the list starting from the head

	return 0;
}