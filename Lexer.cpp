#include <iostream>
#include "Lexer.h"

Lexer::Lexer()
{

}


enum class TokenType
{
	Identifier,
	Number,
	Plus,
	Minus,
	Multiply,
	Divide,
	Power,
	Assign,
	StartStatm,
	EndStatm,
	EndOfFile
};

struct Token
{
	TokenType type;
	std::string value;
};


void Lexer::tokenise(std::string userInput)
{

}