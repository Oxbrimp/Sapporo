#include <iostream>
#include "Lexer.h"



/*
		Source Code 
			|
			V
		  Lexer
			|
			V
		  Parser
			|
			V
		   AST --> Interpreter 

*/



int main()
{
	Lexer lexer;

	// test input - should output '86'
	std::string input = "a=   2+  2~display (2^3)b=2~display (b+a)";



	char* char_array = new char[input.length() + 1];
	for (int i = 0; i < input.size(); i++)
	{
		char_array[i] = input[i];
		std::cout << bool(isspace(char_array[i])) << std::endl;
	}

	
	for (int c = 0; c < (input.length()); c++)
	{
		if (!isspace(char_array[c]))
		{
			std::cout << char_array[c];
		}
	}




	lexer.tokenise(input);


	return 0; 
}