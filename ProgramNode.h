#ifndef PROGRAMNODE_h
#define PROGRAMNODE_h

#include <vector>

#include"ASTNode.h"


class ProgramNode : public ASTNode
{
public:
	std::vector<ASTNode*> statements;

	void add(ASTNode* stmt)
	{
		statements.push_back(stmt);
	}
};


#endif 