#include "Man.h"

/*
������־
1��������Ŀ�������ز�
2�������Ŀ�Ŀ��
*/

void Man::init(Chess*chess)
{
	this->chess = chess;
}

void Man::go()
{
	MOUSEMSG msg;
	ChessPos pos;
	//��ȡ�������Ϣ
	
	//ͨ�����̶���������  �ж������Ƿ���Ч���Լ����ӹ���
	while (1)
	{
		msg = GetMouseMsg();
		if (msg.uMsg == WM_LBUTTONDOWN && chess->clickBoard(msg.x, msg.y, &pos))
		{
			break;
		}
	}
	//printf("%d,%d\n", pos.col, pos.row);
	//����
	chess->chessDown(&pos, CHESS_BLACK);

}
