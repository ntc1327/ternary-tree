#include <iostream>
#include <cmath> // included for isnan and NAN
#include "ttree.h"

using namespace std; // to execute couts here

tTree::tTree() {
	root = NULL;
} // constructor

tTree::~tTree() {
	if (root) delete root;
} // destructor

// insert method - takes in a value and a node pointer to where it may go and inserts the value into the proper node and position
void tTree::insert(float inVal, node * &passIn) {
	float storeGreaterVal; // used to make the isnan function cleaner
	
	// if there was no existing node being pointed to, creates one and inserts the given value and returns
	if (passIn == NULL) {
                passIn = new node;
                passIn->lesserVal = inVal;
                return;
        }

	storeGreaterVal = passIn->greaterVal; // stores the greaterVal
	// if there isn't a greaterVal aleady in the node being pointed to, inserts the val into greaterVal and calls reorganize() to check it
	if (isnan(storeGreaterVal) == 1) {
		passIn->greaterVal = inVal;
		passIn->reorganize();
		return;
	}
		
	// These statements execute only if the node passed in already has 2 values
	// First is the lessThan case, second is the between case, and third is the greaterThan case
	if (inVal <= passIn->lesserVal) {
		insert(inVal, passIn->lessThan);
	}
	else if (inVal > passIn->lesserVal && inVal <= passIn->greaterVal) {
		insert(inVal, passIn->between);
	}
	else if (inVal > passIn->greaterVal) {
		insert(inVal, passIn->greaterThan);
	}
}

// printTree method - prints out the tree inorder with parentheses showing the nodes, is done recursively
void tTree::printTree(node * src) {
	// returns if passed in node pointed to nothing
	if (src == NULL) {
		return;
	}
	
	// if statement gets rid of extra set of parentheses on the whole tree
	if (src != root) {	
		cout << "(";
	}

	// if statement allowed the space to act correctly
	if (src->lessThan != NULL) {
		printTree(src->lessThan);
		cout << " ";
	} 

	cout << src->lesserVal; // prints lesserVal of the node

	// if statement allows the space to act correctly in the case where there was a between node
	if (src->between != NULL) {
		cout << " ";
	}
	
	// checks if greaterVal exists and traverses between and prints the greaterVal of the node
	if (isnan(src->greaterVal) == 0){
		printTree(src->between);
		cout << " " << src->greaterVal;
		// if statement allowed the space to act correctly
		if (src->greaterThan != NULL) {
			cout << " ";
			printTree(src->greaterThan);
		}
	}

	// if statement gets rid of extra set of parentheses on the whole tree
	if (src != root) {
		cout << ")";
	}
}		
