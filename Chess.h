#pragma once
//再class类中定义方法，再cpp中实现方法
#include<vector>
#include<graphics.h>
struct ChessPos {
	int row;
	int col;
	ChessPos(int r = 0, int c = 0) :row(r), col(c) {}
};
//定义单元类

typedef enum
{
	CHESS_WHITE = -1,//白
	CHESS_BLACK = 1//黑
} chess_kind_t;
class Chess
{
public:
	Chess();

	Chess(int gradeSize, int margin_x, int margin_y, float chessSize);
	//棋盘初始化
	void init();

	void chessDown(ChessPos* spos, chess_kind_t val);

	bool clickBoard(int x, int y, ChessPos* pos);

	int getGradeSize();//获取棋盘大小
	bool checkWin();//判断胜负是否出来
	bool checkOver();//检查是否结束对局

	int getChessData(ChessPos* pos);

	int getChessData(int row, int col);


	IMAGE chessBlackImg;//黑棋子

	IMAGE chessWhiteImg;//白棋子

	int gradeSize;//棋盘大小
	int margin_x;//边缘左侧x
	int margin_y;//边缘顶部y
	float chessSize;//棋子大小；
	//存储棋盘数据 0 空   -1 白   1 黑
	std::vector<std::vector<int>> chessMap;

	//表示现在谁下棋
	bool playerFlag;//true 黑子      false 白子
	ChessPos lastPos; //最近落子位置, Chess的private数据成员
	void updateGameMap(ChessPos* pos);
};

