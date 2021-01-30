//---------------------------------------
//		Node Class
//---------------------------------------
// Represents and describes a node within
// the ternary tree.
//---------------------------------------

class node {
	friend class ternaryTree;

public:
	void reorganize();
	node();
	~node();
	float lesserVal;
	float greaterVal;
	node * lessThan;
	node * between;
	node * greaterThan;	
};
