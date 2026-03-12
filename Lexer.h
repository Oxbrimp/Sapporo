#pragma once 
#ifndef LEXER_h
#define LEXER_h

#include <iostream>

class Lexer
{
public:
	int a;
	Lexer();
	void tokenise(std::string userInput);
};


#endif // !Lexer.h
