#include "ChessGame.h"
#include "graphics.h"
#include "Chess.h"
ChessGame::ChessGame(Man* man, AI* ai, Chess* chess)
{
	//this关键字指向类中的成员变量
	this->man= man;
	 this->ai= ai;
	this->chess = chess;
	man->init(chess);
	ai->init(chess);
}

void ChessGame::play()
{
	chess->init();
	while (1) {
		//先由棋手走
		man->go();
		if (chess->checkOver()) {
			chess->init();
			continue;
		}
		// 由AI走棋
	
		ai->go();
		if (chess->checkOver()) {
			chess->init();
			continue;
		}
	}
}
