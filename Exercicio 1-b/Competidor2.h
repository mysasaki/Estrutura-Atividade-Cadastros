#pragma once

#include<string>
class Competidor2
{
public:
	Competidor2();
	~Competidor2();

	void AddNome(std::string nome);
	void AddScore(int score);
	void AddId(int id);
	void SetId(int id);

	std::string GetNome();
	int GetScore();
	int GetId();

private:
	std::string name;
	int score;
	int id;


};

