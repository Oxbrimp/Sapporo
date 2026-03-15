#include <iostream>

#include <vector>
#include <Binar>

#include"Parser.h"
#include"Token.h"

// Constructor Method 
Parser::Parser(const std::vector<Token>& token) : lexerTokens(token)
{
	// Set the (global) class lexerTokens vector to the actual output
	//this->lexerTokens = token;
}

// Navigation of the data stream
const Token& Parser::peek() const
{
	return lexerTokens[cursor];
}

const Token& Parser::advance()
{
	return lexerTokens[cursor++]; // Increment current pos.
}

bool Parser::match(TokenType type)
{
	if (peek().type == type)
	{
		advance();
		return true; // accept keyword
	}
	return false; // Unknown keyword
}

const Token& Parser::expect(TokenType type)
{
	if (peek().type != type)
	{
		// Error Handle 
	}
	return advance();

}


bool Parser::atEnd() const
{
	return peek().type == TokenType::ENDOFFILE; //EoF expected & returned 
}

// Grammar 
ASTNode* Parser::parse()
{
	return parseProgram();
}

ASTNode* Parser::parseProgram()
{
	return nullptr; // NULL (/) 0 
}


// Handling of + & - expressions
ASTNode* Parser::parseExpression()
{
	ASTNode* left = parseTerm();

	while (match(TokenType::PLUS) || match(TokenType::MINUS))
	{
		Token operatorConsumed = lexerTokens[cursor - 1]; // Operator just consumed 
		ASTNode* right = parseTerm();
		//left = new BinaryOpNode(left, op, right);
	}

	return left;
}


// Handling of * & / expressions 
ASTNode* Parser::parseTerm()
{
	ASTNode* left = parseFactor();

	while (match(TokenType::MULTIPLY) || match(TokenType::DIVIDE))
	{
		Token operatorConsumed = lexerTokens[cursor - 1]; 
		ASTNode* right = parseFactor();
		//left = new BinaryOpNode(left, op, right);
	}

	return left;
}


// Handling of exponentiations ( ^ ) 
ASTNode* Parser::parseFactor()
{
	ASTNode* left parsePrimary();

	if (match(TokenType::POWER))
	{
		Token op = lexerTokens[cursor - 1];
		ASTNode* right = parseFactor(); // recursive procedure 
	}
	return left;
}