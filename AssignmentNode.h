#ifndef ASSIGNMENTNODE_h
#define ASSIGMENTNODE_h

#include <string>

#include"ASTNode.h"

class AssignmentNode : public ASTNode
{
public:
	std::string name;
	ASTNode* expression;

	AssignmentNode(const std::string &name, ASTNode* expr) 
		: name(name), expression(expr) {}
};


#endif 