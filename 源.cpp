/*
������־
������
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
	//��ʼ�����̲���
	Chess* chess = new Chess(13, 44, 43, 67.4);
	Man* man = new Man();
	//��ʼ���������
	ChessGame game(man, ai, chess);
	game.play();
	
	return 0;
}