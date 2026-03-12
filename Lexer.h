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


	//std::string removeWhitespace(std::string userInput); // Depreciated 


};


#endif // !Lexer.h
