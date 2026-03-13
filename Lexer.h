#pragma once 
#ifndef LEXER_h
#define LEXER_h

#include <iostream>
#include <vector>

class Lexer
{
public:
	std::vector<int> tokenisedInput;
	Lexer();
	void tokenise(std::string userInput);


	//std::string removeWhitespace(std::string userInput); // Depreciated 


};


#endif // !Lexer.h
