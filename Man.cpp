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
	//通过msg 存下鼠标点击消息
	while (1) {
		msg = GetMouseMsg();
		//通过chess对象判断落子是否有效
		if (msg.uMsg == WM_LBUTTONDOWN && chess->clickBoard(int(msg.x), int(msg.y), &pos)) {
			break;
		}
	}
	//printf("%d, %d\n", pos.row, pos.col);
	//落子

	chess->chessDown(&pos, CHESS_BLACK);
}
