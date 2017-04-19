#pragma once
#include<exception>
class CadastrosException : public std::exception
{
public:
	CadastrosException(const char* const mensagem) : std::exception(mensagem)
	{

	}
};

