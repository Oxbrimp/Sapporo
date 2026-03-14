#include <iostream>

#include <vector>

#include"Parser.h"
#include"Token.h"

// Constructor Method 
Parser::Parser(const std::vector<Token> &token)
{

}


Token Parser::peekNavigateToken()
{

}

// Set the (global) class lexerTokens vector to the actual output
void Parser::receiveParsedLexer(std::string lexerOutput)
{
	this->lexerTokens = lexerOutput;
}

void Parser::parse(std::vector<Token> lexedOutput)
{

}