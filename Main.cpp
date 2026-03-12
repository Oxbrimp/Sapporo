#include <iostream>
#include "Lexer.h"



int main()
{
	Lexer lexer;


	std::string input = "a=2+2~dis(2^2)";

	lexer.tokenise(input);


	return 0; 
}