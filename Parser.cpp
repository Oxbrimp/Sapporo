#include <iostream>

#include <vector>

#include"Parser.h"
#include"Token.h"

// AST Inclusion 
#include"ASTNode.h"
// Subcategories of ASTNode Inclusion
#include"NumberNode.h"
#include"IdentifierNode.h"
#include"BinaryOpNode.h"
#include"DisplayNode.h"
#include"AssignmentNode.h"
#include"ProgramNode.h"


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
		left = new BinaryOpNode(left, operatorConsumed, right);
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
		left = new BinaryOpNode(left, operatorConsumed, right);
	}

	return left;
}

// Handling Numbers / Identifiers / Parentheses 
ASTNode* Parser::parsePrimary()
{
	if (match(TokenType::NUMBER))
	{
		Token number = lexerTokens[cursor - 1];
		return new NumberNode(std::stod(number.value)); // string to double 
	}

	if (match(TokenType::IDENTIFIER))
	{
		Token id = lexerTokens[cursor - 1];
		return new IdentifierNode(id.value);
	}

	if (match(TokenType::LPAREN))
	{
		ASTNode* expr = parseExpression();
		expect(TokenType::RPAREN);
		return expr;
	}

	return nullptr;
}

// Handling of exponentiations ( ^ ) 
ASTNode* Parser::parseFactor()
{
	ASTNode* left = parsePrimary();

	if (match(TokenType::POWER))
	{
		Token operatorConsumed = lexerTokens[cursor - 1];
		ASTNode* right = parseFactor(); // recursive procedure 
		return new BinaryOpNode(left, operatorConsumed, right);
	}

	return left;
}


