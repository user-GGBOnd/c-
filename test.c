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
	 //��������-��ά����
	 char board[Row][Col];
	 //��ʼ������-��ʼ���ո�
	 InitBoard(board,Row,Col);
	 //��ӡ����-��ӡ��������
	 DisplayBoard(board,Row,Col);
	 //�����
	 char ret=0;//�ж���Ϸ�Ƿ����
	 while(1)
	 {
	  //�������
	  PlayerMove(board,Row,Col);
	  DisplayBoard(board,Row,Col);
	  //�ж�����Ƿ�Ӯ
	  ret=IsWin(board,Row,Col);
	  if (ret!='C')
	      break;
	        //��������
	  ComputerMove(board,Row,Col);
	  DisplayBoard(board,Row,Col);
	  //�жϵ����Ƿ�Ӯ
	  ret=IsWin(board,Row,Col);
	  if (ret!='C')
	      break;
	 }     
	  if (ret=='*')
	  {
	   printf("���Ӯ��\n");
	   DisplayBoard(board,Row,Col);
	  }    
	  else if(ret=='#')
	  {
	   printf("����Ӯ��\n");
	   DisplayBoard(board,Row,Col);
	  } 
	  else
	  {
	      printf("ƽ��\n"); 
	  }
	 
	     DisplayBoard(board,Row,Col);
	 
	}
    int  main()
	{
	 int input;
	 do
	 {
	  menu();
	  printf("��ѡ��");
	  scanf("%d",&input);
	  switch(input)
	  {
	   case 1:
	   printf("��������Ϸ\n");
	      game();//��Ϸ�����
	   break;
	   case 0:
	   printf("�˳���Ϸ\n");
	   break;
	   default:
	   printf("ѡ�����������ѡ��\n");
	   break;
	   
	  }
	 }while(input);
	}
	return 0;
}
