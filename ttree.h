#include "node.h"
//-------------------------------------
//	    Ternary Tree Class
//-------------------------------------
// Represents a ternary tree data
// structure comprised of nodes that 
// can hold up to two values each
//-------------------------------------

class tTree {
public:
	void insert(float inVal, node * &passIn);
	void printTree(node * src);
	tTree();
	~tTree();
	node * root;
};
