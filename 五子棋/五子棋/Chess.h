#pragma once
#include<graphics.h>
#include<vector>
using namespace std;

//��ʾ����λ��
struct ChessPos
{
	int row;
	int col;
};

typedef enum
{
	CHESS_WHITE=-1,//����
	CHESS_BLACK=1//����
}chess_kind_t;

class Chess
{

public:
	Chess(int gradeSize, int marginX, int marginY, float chessSize);

	//���̵ĳ�ʼ�����������̵�ͼƬ����ʼ�����̵��������
	void init();
	//�ж���ָ������(x,y)λ�ã��Ƿ�����Ч���
	//����ж�����Ч���������Ч�����λ�ñ����ڲ���pos��
	bool clickBoard(int x,int y,ChessPos*pos);
	//�����̵�ָ��λ��(pos)������(kind)
	void chessDown(ChessPos *pos, chess_kind_t kind);
	//��ȡ���̵Ĵ�С
	int getGradeSize();//��ȡ���̴�С
	int getChessDate(ChessPos* pos);
	int getChessDate(int row, int col);
	bool checkOver();//�������Ƿ����
private:
	IMAGE chessBlackImg;//����
	IMAGE chessWhiteImg;//����

	int gradeSize;//���̴�С
	int margin_x;//�������߽�
	int margin_y;//�����߽�
	float chessSize;//���Ӵ�С������С��
	//���浱ǰ��ֵ����ӷֲ�����0���հ� 1������ 2������
	//chessMap[3][5]��ʾ���̵ĵ����е����е��������
	vector<vector<int>>chessMap;

	//��ʾ���ڸ�˭����
	bool playerFlag;//ture:���� false������



};