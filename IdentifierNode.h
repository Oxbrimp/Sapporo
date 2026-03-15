#ifndef IDENTIFIERNODE_h
#define IDENTIFIERNODE_h


#include <string>

#include"ASTNode.h"

class IdentifierNode : public ASTNode
{
public:
	std::string name;

	IdentifierNode(const std::string& name) : name(name) {}
};


#endif // !IDENTIFIERNODE_h
