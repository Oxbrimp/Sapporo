#ifndef TOKEN_H
#define TOKEN_H

#include <iostream>


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
	Tilde,
	EndStatm,
	EndOfFile
};

struct Token
{
	TokenType type;
	std::string value;
};


#endif // !TOKEN_H
