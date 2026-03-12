#include <iostream>
#include "Lexer.h"

Lexer::Lexer()
{

}

void Lexer::tokenise(std::string userInput)
{

}



// [!] although this exists, the main program will simply skip over whitespace - the code for removing whitespace will be soon depreciated completely 

/*
// Removes the whitespace being parsed from the User Input 
std::string Lexer::removeWhitespace(std::string userInput)
{
	std::string parsedOutput;


	for (int c = 0; c < userInput.length(); c++)
	{
		if (!isspace(userInput[c]))
		{
			parsedOutput.append(userInput[c]);
		}
	}


	return parsedOutput;

}
*/

