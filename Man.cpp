#include "Man.h"
#include "Chess.h"
Man::Man()
{
}
void Man::init(Chess* chess)
{
	this->chess = chess;
}
void Man::go()
{
	MOUSEMSG msg;
	ChessPos pos;
	//ͨ��msg �����������Ϣ
	while (1) {
		msg = GetMouseMsg();
		//ͨ��chess�����ж������Ƿ���Ч
		if (msg.uMsg == WM_LBUTTONDOWN && chess->clickBoard(int(msg.x), int(msg.y), &pos)) {
			break;
		}
	}
	//printf("%d, %d\n", pos.row, pos.col);
	//����

	chess->chessDown(&pos, CHESS_BLACK);
}
