#ifndef BINARYOPNODE_h
#define BINARYOPNODE_h

#include"ASTNode.h"
#include"Token.h"

class BinaryOpNode : public ASTNode
{
public:
	ASTNode* left;
	Token op;
	ASTNode* right;


	BinaryOpNode(ASTNode* left, Token Op, ASTNode* right) 
		: left(left), op(op), right(right) {}

};


#endif // !BINARYOPNODE_h
