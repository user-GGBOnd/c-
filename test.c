#include <stdio.h>
#include <stdlib.h>
#include <game.h>
	/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	void menu()
	{
	 printf("*****************************\n");
	 printf("*******     1.paly      *******\n");
	 printf("*******     0.exit     ********\n");
	 printf("*****************************\n");
	  
	}
	void game()
	{
	 //储存数据-二维数组
	 char board[Row][Col];
	 //初始化棋盘-初始化空格
	 InitBoard(board,Row,Col);
	 //打印棋盘-打印数组内容
	 DisplayBoard(board,Row,Col);
	 //玩家走
	 char ret=0;//判断游戏是否结束
	 while(1)
	 {
	  //玩家下棋
	  PlayerMove(board,Row,Col);
	  DisplayBoard(board,Row,Col);
	  //判断玩家是否赢
	  ret=IsWin(board,Row,Col);
	  if (ret!='C')
	      break;
	        //电脑下棋
	  ComputerMove(board,Row,Col);
	  DisplayBoard(board,Row,Col);
	  //判断电脑是否赢
	  ret=IsWin(board,Row,Col);
	  if (ret!='C')
	      break;
	 }     
	  if (ret=='*')
	  {
	   printf("玩家赢了\n");
	   DisplayBoard(board,Row,Col);
	  }    
	  else if(ret=='#')
	  {
	   printf("电脑赢了\n");
	   DisplayBoard(board,Row,Col);
	  } 
	  else
	  {
	      printf("平局\n"); 
	  }
	 
	     DisplayBoard(board,Row,Col);
	 
	}
    int  main()
	{
	 int input;
	 do
	 {
	  menu();
	  printf("请选择");
	  scanf("%d",&input);
	  switch(input)
	  {
	   case 1:
	   printf("三子棋游戏\n");
	      game();//游戏进入点
	   break;
	   case 0:
	   printf("退出游戏\n");
	   break;
	   default:
	   printf("选择错误，请重新选择\n");
	   break;
	   
	  }
	 }while(input);
	}
	return 0;
}
