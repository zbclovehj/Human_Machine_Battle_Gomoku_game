#pragma once
//��class���ж��巽������cpp��ʵ�ַ���
#include<vector>
#include<graphics.h>
struct ChessPos {
	int row;
	int col;
	ChessPos(int r = 0, int c = 0) :row(r), col(c) {}
};
//���嵥Ԫ��

typedef enum
{
	CHESS_WHITE = -1,//��
	CHESS_BLACK = 1//��
} chess_kind_t;
class Chess
{
public:
	Chess();

	Chess(int gradeSize, int margin_x, int margin_y, float chessSize);
	//���̳�ʼ��
	void init();

	void chessDown(ChessPos* spos, chess_kind_t val);

	bool clickBoard(int x, int y, ChessPos* pos);

	int getGradeSize();//��ȡ���̴�С
	bool checkWin();//�ж�ʤ���Ƿ����
	bool checkOver();//����Ƿ�����Ծ�

	int getChessData(ChessPos* pos);

	int getChessData(int row, int col);


	IMAGE chessBlackImg;//������

	IMAGE chessWhiteImg;//������

	int gradeSize;//���̴�С
	int margin_x;//��Ե���x
	int margin_y;//��Ե����y
	float chessSize;//���Ӵ�С��
	//�洢�������� 0 ��   -1 ��   1 ��
	std::vector<std::vector<int>> chessMap;

	//��ʾ����˭����
	bool playerFlag;//true ����      false ����
	ChessPos lastPos; //�������λ��, Chess��private���ݳ�Ա
	void updateGameMap(ChessPos* pos);
};

