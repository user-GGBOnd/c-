//������ʵ��
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
 printf("����ߣ�>\n");
while(1)
{
  printf("���������������:>");
  scanf("%d%d",&x,&y);
  //�ж�����Ϸ���
  if (x>=1&&x<=row&&y>=1&&y<=col)
  {
   //����
   //�ж������Ƿ�ռ��
   if(board[x-1][y-1]==' ')
   {
    board[x-1][y-1]='*';
    break;
   }
   else 
   {
    printf("�������Ѿ���ռ��,����������\n");
    
   }
  }
  else
  {
      printf("����Ƿ�����������������\n");
  } 
}
 
} 
 
 
void ComputerMove(char board[Row][Col],int row,int col)
{
 printf("�����ߣ�>\n");
 
 while(1)
 {
  int x=rand()%row;
  int y=rand()%col;
  
  //�ж�ռ��
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
    return 0;//����û��
   }
  }
 
 }
 return 1;
 
}

char IsWin(char board[Row][Col],int row,int col)
{
 int i=0;
 for (i=0;i<row;i++)//�ж������
 {
  if (board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][0]!=' ')
  return board[i][0];
 }
 for (i=0;i<col;i++)//�ж������
 {
  if (board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[0][i]!=' ')
  return board[0][i];
  
 } 
 //�ж϶Խ������
 if (board[0][0]==board[1][1]&&board[0][0]==board[2][2]&&board[0][0]!=' ')
 {
  return board[0][1];
