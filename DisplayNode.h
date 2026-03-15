#ifndef DISPLAYNODE_h
#define DISPLAYNODE_h

#include"ASTNode.h"

class DisplayNode : public ASTNode
{
public:
	ASTNode* expression;

	DisplayNode(ASTNode* expr) : expression(expr) {}
};


#endif 