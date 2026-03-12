#pragma once 
#ifndef LEXER.h
#define LEXER.h

#include <iostream>

class Lexer
{
public:
	int a;
	Lexer();
	void tokenise(std::string userInput);
};


#endif // !Lexer.h
