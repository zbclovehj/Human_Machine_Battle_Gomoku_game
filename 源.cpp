/*
开发日志
五子棋
zbc
*/
#include <iostream>
#include "Chess.h"
#include "Man.h"
#include "AI.h"
#include "ChessGame.h"
#include <functional>
#include <stdio.h>
int main() {
	
	AI* ai = new AI();
	//初始化棋盘参数
	Chess* chess = new Chess(13, 44, 43, 67.4);
	Man* man = new Man();
	//初始化棋局数据
	ChessGame game(man, ai, chess);
	game.play();
	
	return 0;
}