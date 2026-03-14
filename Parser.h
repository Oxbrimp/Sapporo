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


	std::string lexerTokens; // Parsed form of Lexer Tokens
	Token peekNavigateToken();
	void parse(std::vector<Token> lexedOutput);

	void receiveParsedLexer(std::string lexerOutput);




private:



};

#endif // !PARSER_H
