#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<process.h>
#include<ctype.h>
#include<dos.h>
#include<time.h>
#include<stdio.h>


union REGS in,out;

void callmouse()
 {
     in.x.ax=1;
     int86(51,&in,&out);
  }

 void mousepos(int &xpos,int &ypos,int &click)
  {
       in.x.ax=3;
       int86(51,&in,&out);
       click=out.x.bx;
       xpos=out.x.cx;
       ypos=out.x.dx;
}

void mousehide()
 {

    in.x.ax=2;
    int86(51,&in,&out);
 }

 void setposi(int &xpos, int &ypos)
  {
       in.x.ax=4;
       in.x.cx=xpos;
       in.x.dx=ypos;
       int86(51,&in,&out);
  }

void restrictmouseptr(int x1,int y1, int x2,int y2)
 {
    in.x.ax=7;
    in.x.cx=x1;
    in.x.dx=x2;
    int86(51,&in,&out);
    in.x.ax=8;
    in.x.cx=y1;
    in.x.dx=y2;
    int86(51,&in,&out);
 }

 void menu()
{
 int i;
 char choose,ch;
 clrscr();
  for(i=0;i<80;i++)
	   {  gotoxy(i,4);
	      textcolor(i);
	      cprintf("__");
	    }
	 gotoxy(1,3);
	 textcolor(RED);
	 cprintf("________________________________________________________________________________\n");
	 cprintf("________________________________________________________________________________\n");
	 gotoxy(35,4);
	 textcolor(LIGHTBLUE);
	 cprintf("\n  DO IT NOW !! \n");
	 gotoxy(1,7);
	 textcolor(RED);
	 cprintf("________________________________________________________________________________\n");
	  for( i=0;i<80;i++)
	   {  gotoxy(i,6);
	      textcolor(i);
	      cprintf("__");
	    }

   cout<<"\n\n\n\n";
   cout << "C"; delay(100);
   cout << "H"; delay(100);
   cout << "O"; delay(100);
   cout << "O"; delay(100);
   cout << "S"; delay(100);
   cout << "E"; delay(100);
     delay(300);

   cout << " A"; delay(100);
   cout << "N"; delay(100);
   cout<<"Y";delay(100);
   delay(300);

   cout << " N"; delay(100);
   cout << "O."; delay(100);
   delay(300);

   cout << " F"; delay(100);
   cout << "R"; delay(100);
   cout << "O"; delay(100);
   cout << "M"; delay(100);
   delay(300);
   cout << " 1"; delay(100);
   cout << " T"; delay(100);
   cout << "O"; delay(100);
   cout << " 5"; delay(100);

    do{
     cout<<"\n\n\n\t\n\n\n\n\n\tTry again !!(note->press 7 to EXIT)\n\n\n\t\t\t";
     cin>>choose;
     clrscr();
     switch(choose)
      {
	 case '1' : cout<<"\n\n\n\t\t\tHow much do you miss me ?";getch();break;
	 case '2' : cout<<"\n\n\n\t\t\t What is the most childish thing you still do ?";getch();break;
	 case '3' : cout<<"\n\n\n\t\t\tTell me something you don't want me to know ?";getch();break;
	 case '4' : cout<<"\n\n\n\t\t\tWhat is the one thing you dislike about me ? ";getch();break;
	 case '5' : cout<<"\n\n\n\t\t\tWhat is one thing that makes you relax ?";getch();break;
	 case '6' :clrscr();cout<<"\n\n\tWanted to take dare !! choose [1...6]\n\t";
		  do{
		      cout<<"\n\n\n\n\n\t\tTry again !! (note->Press 6 to exit) ";
		      cin>>ch;
		     switch(ch)
		   { case '1':clrscr(); cout<<"\n\n\t\t\tSing a song dedicated to your best friend";getch();break;
		     case '2':clrscr(); cout<<"\n\n\t\t\t Make a cup of coffee for me";getch();break;
		     case '3':clrscr();  cout<<"\n\n\tTell your mother -'I am very lucky to have a mom like you";getch();break;
		     case '4':clrscr(); cout<<"\n\n\t\t\tTell your brother - I love you ";getch();break;
		     case '5':clrscr(); cout<<"\n\n\t\t\tGive me a chocolate :D";getch();break;
		     case '6':exit(0);
		     default :cout<<"\n\n\n\t\t\tINVALID";
		    }
		   }while(ch!='6');
		   getch();
	 case '7':exit(0);
	 default : cout<<"\n\n\t\tINVALID CHOICE !! ";
       }
     }while(choose!='7');
    getch();


}

 void rec()
{
    clrscr();
    int g=0,d,x,y,cl,a,b;
    char choose,ch;
    a=130,b=320;
    initgraph(&g,&d,"c:\\turboc3\\bgi");
    rectangle(0,5,630,400);
  rectangle(12,15,618,390);

  settextstyle(1,0,4);
  setcolor(4);
  outtextxy(100,60,"CHOOSE -->TRUTH OR DARE ");
  setcolor(GREEN);
  circle(130,200,50);
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(130,200,GREEN);
 circle(400,200,50);
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(400,200,50);
  setcolor(BLUE);
  circle(130,200,45);
  circle(400,200,45);
  setcolor(WHITE);
  settextstyle(TRIPLEX_FONT,0,7);
  outtextxy(125,160,"T");
  outtextxy(385,160,"D");
  setcolor(YELLOW);
  outtextxy(220,170,"OR");
    setposi(a,b);
    callmouse();
    restrictmouseptr(5,8,650,500);
  int i=0;
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

void start()
 {
     clrscr();
    int g=0,d;
    initgraph(&g,&d,"c:\\turboc3\\bgi");
    setcolor(RED);
    circle(280,200,100);
    setfillstyle(SOLID_FILL,RED);
    floodfill(280,200,RED);
    setcolor(WHITE);
    circle(280,200,99);
    circle(280,200,90);
    settextstyle(DEFAULT_FONT,0,10);
    outtextxy(260,160,"3");
    delay(500);
     setcolor(RED);
    circle(280,200,100);
    setfillstyle(SOLID_FILL,RED);
    floodfill(280,200,RED);
    setcolor(RED);
    settextstyle(DEFAULT_FONT,0,10);
    outtextxy(260,160,"3");
    delay(500);
     setcolor(RED);
    circle(280,200,100);
    setfillstyle(SOLID_FILL,RED);
    floodfill(280,200,RED);
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,0,10);
    outtextxy(260,160,"2");
    delay(500);
     setcolor(RED);
    circle(280,200,100);
    setfillstyle(SOLID_FILL,RED);
    floodfill(280,200,RED);
    setcolor(RED);
    settextstyle(DEFAULT_FONT,0,10);
    outtextxy(260,160,"2");
    delay(500);
     setcolor(RED);
    circle(280,200,100);
    setfillstyle(SOLID_FILL,RED);
    floodfill(280,200,RED);
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,0,10);
    outtextxy(260,160,"1");
    delay(500);
     setcolor(RED);
    circle(280,200,100);
    setfillstyle(SOLID_FILL,RED);
    floodfill(280,200,RED);
    setcolor(RED);
    settextstyle(DEFAULT_FONT,0,10);
    outtextxy(260,160,"1");
    delay(500);
     setcolor(RED);
    circle(280,200,100);
    setfillstyle(SOLID_FILL,RED);
    floodfill(280,200,RED);
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,0,10);
    outtextxy(260,160,"0");
    delay(500);
     int x=170,i;
    for(i=0;i<300;i++)
    {   setcolor(i);
       settextstyle(DEFAULT_FONT,0,2);
       outtextxy(260,320,"WAIT...");
       delay(30);

       delay(30);
       setcolor(WHITE);
       rectangle(x,410,x,400);
       x++;
    }
    getch();
    closegraph();
    menu();
   }




void main()
 {
    clrscr();
    int g=0,d,x,y,cl,a,b;;
    initgraph(&g,&d,"c:\\turboc3\\bgi");

    a=100;
    b=400;
    setposi(a,b);
    callmouse();
    restrictmouseptr(5,8,650,500);
    setbkcolor(15);
    setcolor(BLUE);
    settextstyle(7,1,7);
    outtextxy(40,5,"T R U T H ");
    setcolor(GREEN);
    settextstyle(3,0,7);
    outtextxy(90,10," & ");
    setcolor(BLUE);
    settextstyle(7,0,7);
    outtextxy(150,10," D A R E ");
    setbkcolor(LIGHTRED);
    setcolor(YELLOW);
    circle(300,250,150);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(300,250,YELLOW);
    setcolor(BLUE);
    ellipse(240, 210, 0, 360,30, 40);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(240,210,BLUE);
    ellipse(360, 210, 0, 360,30, 40);
    fillellipse(360,210,30,40);
    setcolor(BROWN);
    arc(240,240,0,180,20);
    arc(360,240,0,180,20);
     setcolor(RED);
  for(int k=0;k<80;k++)
  {
  arc(300,290,180,360,80-k);
  }
  setcolor(1);
    settextstyle(1,0,2);
    outtextxy(205,420," ARE YOU READY !!");
    setcolor(8);
   rectangle(500,420,100,450);
   getch();
   rec();
   start();

}

