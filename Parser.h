#ifndef PARSER_H
#define PARSER_H

#include <vector>>

#include"Token.h"

class Parser
{
public:
	Parser();
	void parse(std::vector<Token> lexedOutput);

private:
};

#endif // !PARSER_H
