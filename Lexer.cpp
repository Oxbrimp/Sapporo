#include <iostream>
#include<vector>
#include<unordered_map>


#include "Lexer.h"
#include "Token.h"

// Constructor Method
Lexer::Lexer()
{

}

// Only alphabetical symbols 
static const std::unordered_map<std::string, TokenType> KEYWORDS =
{
	{"display", TokenType::DISPLAY},
	{"dis", TokenType::DIS}
};


// Parses the User Input and tokenises all relevant keywords
void Lexer::tokenise(std::string userInput)
{
	
	size_t pos = 0; // Positive Unsign. Int Counter for Looping
	while (pos < userInput.length())
	{
		char c = userInput[pos];

	}


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

