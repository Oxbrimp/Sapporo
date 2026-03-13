#ifndef TOKEN_H
#define TOKEN_H

#include <iostream>


enum class TokenType
{
	IDENTIFIER, // ie  = 
	NUMBER,
	PLUS,
	MINUS,
	MULTIPLY,
	DIVIDE,
	POWER,
	ASSIGN,
	STARTSTATM,
	TILDE,
	ENDSTATM,
	ENDOFFILE,
	DISPLAY,
	LPAREN,
	RPAREN,
	DIS
};

struct Token
{
	TokenType type;
	std::string value;
};


#endif // !TOKEN_H
