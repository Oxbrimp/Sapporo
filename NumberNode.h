#ifndef NUMBERNODE_h
#define NUMBERNODE_h

#include"ASTNode.h"


// Literal number represented, ie : (256) 
class NumberNode : public ASTNode
{
public:
	double value;

	NumberNode(double value) : value(value) {}
};

#endif // !NUMBERNODE_h
