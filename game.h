//符号的定义
#define Row 3
#define Col 3
#include <stdio.h>
#include <stdlib.h>

//函数的声明

//初始化棋盘
void InitBoard(char board[Row][Col],int row,int col);

//打印棋盘的函数
void DisplayBoard(char board[Row][Col],int row,int col);

//玩家下棋
void PlayerMove(char board[Row][Col],int row,int col);

//电脑下棋
void ComputerMove(char board[Row][Col],int row,int col);

//
//1玩家赢-*
//2电脑赢-#
//平局-Q
//游戏继续-C
char IsWin(char board[Row][Col],int row,int col);
