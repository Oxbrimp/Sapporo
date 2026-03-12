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


	

	//std::string val = lexer.removeWhitespace(input);
	



	//lexer.tokenise(input);


	return 0; 
}