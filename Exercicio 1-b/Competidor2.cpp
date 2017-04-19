#include "Competidor2.h"



Competidor2::Competidor2()
{
	id = 0;
	score = 0;
}


Competidor2::~Competidor2()
{
}

void Competidor2::AddNome(std::string nome)
{
	name = nome;
}

void Competidor2::AddScore(int score)
{
	this->score = score;
}

void Competidor2::AddId(int id)
{
	this->id = id;
}

void Competidor2::SetId(int id)
{
	this->id = id;
}

std::string Competidor2::GetNome()
{
	return name;
}

int Competidor2::GetScore()
{
	return score;
}

int Competidor2::GetId()
{
	return id;
}
