#include <iostream.h>
#include <conio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>


char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int result();
void board();

void main()
{
  clrscr();
  int x,y,i,k,l,j;
  int g=DETECT,d;
  initgraph(&g,&d,"c:\\turboc3\\bgi");
  x=getmaxx();
  y=getmaxy();
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,8);
  setbkcolor(rand());
  setcolor(4);
  outtextxy(2,8,"Let's Play");
  setcolor(3);
  outtextxy(40,90,"TIC");
  setcolor(2);
  outtextxy(50,200," TAC");
  setcolor(1);
  outtextxy(10,290,"      TOE");
  while(!kbhit())
  {
  setcolor(rand());
  for(i=0;i<5;i++)
  circle(x,y,i);
  setcolor(rand());
  for(j=10;j<120;j++)
  circle(x,y,j);
  setcolor(rand());
  for(k=140;k<190;k++)
  circle(x,y,k);
  setcolor(rand());
  for(l=210;l<230;l++)
  circle(x,y,l);
  delay(200);
   for(i=0;i<=100;i=i+10,j++)
  {
     setcolor(j);
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
   outtextxy(490,15,"Two");
   outtextxy(470,50,"Players");
   outtextxy(500,80,"Game");
   rectangle(430,130,600,10);
    delay(50);
    if(i==100)
       break;
    if(j==15)
      j=2;
}


  }
  getch();
  closegraph();

	int player = 1,r,choice,ch;
	char mark;
	clrscr();
	do
	{
		board();
		player=(player%2)?1:2;
		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;
		mark=(player == 1) ? 'X' : 'O';
		if (choice == 1 && square[1] == '1')
			square[1] = mark;
		else if (choice == 2 && square[2] == '2')
			square[2] = mark;
		else if (choice == 3 && square[3] == '3')
			square[3] = mark;
		else if (choice == 4 && square[4] == '4')
			square[4] = mark;
		else if (choice == 5 && square[5] == '5')
			square[5] = mark;
		else if (choice == 6 && square[6] == '6')
			square[6] = mark;
		else if (choice == 7 && square[7] == '7')
			square[7] = mark;
		else if (choice == 8 && square[8] == '8')
			square[8] = mark;
		else if (choice == 9 && square[9] == '9')
			square[9] = mark;
		else
		{
			cout<<"Invalid move ";
			player--;
			getch();
		}
		r=result();
		player++;
	}while(r==-1);
	board();
	if(r==1)
		cout<<"==>\aPlayer "<<--player<<" win ";
	else
		cout<<"==>\aGame draw";
	getch();
	 int gd=DETECT,gm;
  detectgraph(&gd,&gm);
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  rectangle(0,5,630,400);
  rectangle(12,15,618,390);
  settextstyle(1,0,5);
  setcolor(4);
  outtextxy(180,60,"THANK YOU");
  setcolor(3);
  settextstyle(1,0,3);
  outtextxy(200,128,"HOPE YOU LIKE IT !");
  setcolor(3);
  settextstyle(1,0,1);
  outtextxy(220,220,"HAVE A NICE DAY !");
  setcolor(YELLOW);
  for(k=0;k<80;k++)
  {
  circle(260,190,10-k);
  circle(350,190,10-k);
  }
  setcolor(BROWN);
  arc(260,180,360,180,10);
  arc(350,180,360,180,10);
  setcolor(LIGHTRED);
  for(k=0;k<80;k++)
  {
  arc(300,260,180,360,40-k);
  }
  setcolor(RED);
  for(k=0;k<80;k++)
  {
  arc(300,250,180,360,80-k);
  }
  i=0;
  while(!kbhit())
  {
    delay(200);
    setfillstyle(XHATCH_FILL,i++);
    floodfill(2,9,15);
    if(i>=15)
    i=0;
  }
  getch();
  closegraph();

}
/*********************************************
	FUNCTION TO RETURN GAME STATUS
	1 FOR GAME IS OVER WITH RESULT
	-1 FOR GAME IS IN PROGRESS
	O GAME IS OVER AND NO RESULT
**********************************************/

int result()
{
	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	else if (square[3] == square[5] && square[5] == square[7])
		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
		 square[4] != '4' && square[5] != '5' && square[6] != '6' &&
	    square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else
		return -1;
}


/*******************************************************************
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/


void board()
{
	clrscr();
	cout<<" \n                        TIC-TAC-TOE\n";
	cout<<"__________________________________________________________________________\n\n";
	cout << "\n\t\t\t\tPlayer 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
	cout << "         |     |     " << endl;
	cout << "      " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "    _____|_____|_____" << endl;
	cout << "         |     |     " << endl;
	cout << "      " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "    _____|_____|_____" << endl;
	cout << "         |     |     " << endl;
	cout << "      " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "         |     |     " << endl << endl;
}

