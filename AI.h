#pragma once
#include "Chess.h"

class AI
{
public:
	void init(Chess* chess);
	void go();
private:
	Chess* chess;
	//int data[13][13];
	std::vector<std::vector<int>> scoreMap;
private:
	void calculateScore();
	ChessPos think();
};

