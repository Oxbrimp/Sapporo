#ifndef PARSER_H
#define PARSER_H

#include <vector>>

#include"Token.h"


// Forward Declaration of ASTNode
class ASTNode;


class Parser
{
public:
	Parser(const std::vector<Token> &tokens);
	ASTNode* parse(); // root of AST



private:

	// definition of the token stream
	std::vector<Token> lexerTokens; // Parsed form of Lexer Tokens
	size_t cursor = 0; 

	// navigation 
	const Token& peek() const;
	const Token& advance();
	bool match(TokenType type);

	const Token& expect(TokenType type);
	bool atEnd() const;

	// Grammar - TO DO : 
	ASTNode* parseProgram();
	//ASTNode* parseStatement();
	//ASTNode* parseDisplay();


};

#endif // !PARSER_H
