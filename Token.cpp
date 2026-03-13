#include <iostream>

#include"Token.h"

std::string tokenTypeToString(TokenType type)
{
	switch (type)
	{
		case TokenType::NUMBER : return "NUMBER";
		case TokenType::PLUS: return "PLUS";
		case TokenType::MINUS : return "MINUS";
		case TokenType::MULTIPLY : return "MULTIPLY";
		case TokenType::DIVIDE : return "DIVIDE";
		case TokenType::POWER : return "POWER";
		case TokenType::TILDE : return "TILDE";
		case TokenType::LPAREN : return "LPAREN";
		case TokenType::RPAREN : return "RPAREN";
		case TokenType::IDENTIFIER : return "IDENTIFIER";
		case TokenType::DISPLAY : return "DISPLAY";
		case TokenType::DIS : return "DIS";

	}
}