#pragma once
#include "Chess.h"
class Man
{
public:
	Man();
	void init(Chess* chess);
	void go();
private:
	Chess* chess;
};


