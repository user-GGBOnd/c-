//���ŵĶ���
#define Row 3
#define Col 3
#include <stdio.h>
#include <stdlib.h>

//����������

//��ʼ������
void InitBoard(char board[Row][Col],int row,int col);

//��ӡ���̵ĺ���
void DisplayBoard(char board[Row][Col],int row,int col);

//�������
void PlayerMove(char board[Row][Col],int row,int col);

//��������
void ComputerMove(char board[Row][Col],int row,int col);

//
//1���Ӯ-*
//2����Ӯ-#
//ƽ��-Q
//��Ϸ����-C
char IsWin(char board[Row][Col],int row,int col);
