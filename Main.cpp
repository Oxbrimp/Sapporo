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
	//std::string input = "2+3-1";
	std::string input = "5 -          3   +  2   /  11";

	lexer.tokenise(input);
	std::vector<Token> &c = lexer.returnTokenisedVector();
	std::string lexedInput;

	/*
	for (const Token &current : c)
	{
		lexedInput.append(current.value);

		// Optional space
		// lexedInput.append(" ");
	}
	*/

	for (const Token& current : c)
	{
		lexedInput.append(tokenTypeToString(current.type));


		// DEBUG FOR VISUALISATION 
		lexedInput.append("(");
		lexedInput.append(current.value);
		lexedInput.append(")");
		//////////////////////////

		// Optional Space
		lexedInput.append(" ");
	}

	std::cout << lexedInput;
	
	//std::string val = lexer.removeWhitespace(input);
	



	//lexer.tokenise(input);


	return 0; 
}