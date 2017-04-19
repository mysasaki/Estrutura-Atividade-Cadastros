#include "Competidor.h"



Competidor::Competidor()
{
	id = 0;
	score = 0;
}


Competidor::~Competidor()
{
}

void Competidor::AddNome(std::string nome)
{
	name = nome;
}

void Competidor::AddScore(int score)
{
	this->score = score;
}

void Competidor::AddId(int id)
{
	this->id = id;
}

void Competidor::SetId(int id)
{
	this->id = id;
}

std::string Competidor::GetNome()
{
	return name;
}

void Competidor::GETNOME()
{
	std::cout << name << std::endl;
}

int Competidor::GetScore()
{
	return score;
}

int Competidor::GetId()
{
	return id;
}
