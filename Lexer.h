#pragma once 
#ifndef LEXER_h
#define LEXER_h

#include <iostream>
#include <vector>

#include"Token.h"

class Lexer
{
public:
	Lexer();
	void tokenise(std::string userInput);
	std::vector<Token> &returnTokenisedVector();


	//std::string removeWhitespace(std::string userInput); // Depreciated 
private:
	std::vector<Token> tokenisedInput;


};


#endif // !Lexer.h
