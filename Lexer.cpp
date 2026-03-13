#include <iostream>
#include<vector>
#include<unordered_map>


#include"Lexer.h"
#include"Token.h"

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


std::vector<Token> &Lexer::returnTokenisedVector()
{
	return this->tokenisedInput;
}

// Parses the User Input and tokenises all relevant keywords
void Lexer::tokenise(std::string userInput)
{
	size_t pos = 0; // Positive Unsign. Int Counter for Looping
	std::vector<Token> *tokens = &this->tokenisedInput;

	while (pos < userInput.length())
	{
		char c = userInput[pos];

		// Skip all whitespace instances 
		if (isspace(c))
		{
			pos++;
			continue;
		}

		// Identifiers / keyword detection 
		if (isalpha(c)) // check if alphabetical character
		{
			size_t start = pos;
			while (pos < userInput.length() && isalnum(userInput[pos]))
			{
				pos++;
			}
			std::string word = userInput.substr(start, pos - start);

			auto it = KEYWORDS.find(word);

			if (it != KEYWORDS.end())
			{
				tokens->push_back({ it->second, word });
			}
			else
			{
				tokens->push_back({ TokenType::IDENTIFIER, word });
			}
			continue;

		}


		switch (c)
		{
		case '+': tokens->push_back({ TokenType::PLUS, "+"}); break;
		case '-': tokens->push_back({ TokenType::MINUS, "-"}); break;
		case '*': tokens->push_back({ TokenType::MULTIPLY, "*"}); break;
		case '/': tokens->push_back({ TokenType::DIVIDE, "/"}); break;
		case '^': tokens->push_back({ TokenType::POWER, "^"}); break;
		case '~': tokens->push_back({ TokenType::TILDE, "~"}); break;
		case '(': tokens->push_back({ TokenType::LPAREN, "("}); break;
		case ')': tokens->push_back({ TokenType::RPAREN, ")"}); break;


		default:
			std::cerr << "Uknown Character : " << c << "\n";
		}

		pos++;
		continue;

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

