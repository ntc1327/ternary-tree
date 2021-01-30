#include "node.h"
#include <iostream>
#include <cmath> // included for isnan and NAN

node::node() {
	lesserVal = NAN;
	greaterVal = NAN;
	lessThan = NULL;
	between = NULL;
	greaterThan = NULL;	
} // constructor

node::~node() {
	if (lessThan) delete lessThan;
	if (between) delete between;
	if (greaterThan) delete greaterThan;
} // destructor

// reorganize method - swaps values in node if the passed in value is actually smaller than lesserVal
void node::reorganize() {
	// returns if the value is bigger or the same
	if (isnan(greaterVal) == 1 || greaterVal == lesserVal) {
		return;
	}
	
	// switches values is greaterVal is actually smaller
	if (greaterVal < lesserVal) {
		int temp = lesserVal;
		lesserVal = greaterVal;
		greaterVal = temp;
	}
}
