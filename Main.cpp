#include <iostream>
#include <vector>

#include"Lexer.h"
#include"Token.h"



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
	//std::string input = "a=   2+  2~display (2^3)b=2~display (b+a)";
	std::string input = "2+3-1";

	lexer.tokenise(input);
	std::vector<Token> &c = lexer.returnTokenisedVector();
	

	//std::string val = lexer.removeWhitespace(input);
	



	//lexer.tokenise(input);


	return 0; 
}