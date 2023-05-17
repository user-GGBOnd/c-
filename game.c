//函数的实现
#include "game.h"
void InitBoard(char board[Row][Col],int row,int col)
{
 int i=0;
 int j=0;
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   board[i][j]=' ';
  }
 }
}

void DisplayBoard(char board[Row][Col],int row,int col)
{
 int i=0;
 for(i=0;i<row;i++)
 {
     int j=0;
     for(j=0;j<col;j++)
     {
      printf(" %c ",board[i][j]);
   if(j<col-1)
   printf("|");
  }
     printf("\n");
     
  if(i<row-1)
    {
      // printf("---|---|---\n");
          int j=0;
          for (j=0;j<col;j++)
          {
            printf("---");
            if(j<col-1)
                printf("|");
          }
          printf("\n");
    }
 }
}

void PlayerMove(char board[Row][Col],int row,int col)
{
 int x=0;
 int y=0;
 printf("玩家走：>\n");
while(1)
{
  printf("请输入下棋的坐标:>");
  scanf("%d%d",&x,&y);
  //判断坐标合法性
  if (x>=1&&x<=row&&y>=1&&y<=col)
  {
   //下棋
   //判断坐标是否被占用
   if(board[x-1][y-1]==' ')
   {
    board[x-1][y-1]='*';
    break;
   }
   else 
   {
    printf("该坐标已经被占用,请重新输入\n");
    
   }
  }
  else
  {
      printf("坐标非法，请重新输入坐标\n");
  } 
}
 
} 
 
 
void ComputerMove(char board[Row][Col],int row,int col)
{
 printf("电脑走：>\n");
 
 while(1)
 {
  int x=rand()%row;
  int y=rand()%col;
  
  //判断占用
  if(board[x][y]==' ')
  {
   board[x][y]='#';
   break;
  }
 }
}
int  IsFull(char board[Row][Col],int row,int col)
{
 int i=0;
 int j=0;
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   if (board[i][j]==' ')
      {
    return 0;//棋盘没满
   }
  }
 
 }
 return 1;
 
}

char IsWin(char board[Row][Col],int row,int col)
{
 int i=0;
 for (i=0;i<row;i++)//判断行相等
 {
  if (board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][0]!=' ')
  return board[i][0];
 }
 for (i=0;i<col;i++)//判断列相等
 {
  if (board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[0][i]!=' ')
  return board[0][i];
  
 } 
 //判断对角线相等
 if (board[0][0]==board[1][1]&&board[0][0]==board[2][2]&&board[0][0]!=' ')
 {
  return board[0][1];
