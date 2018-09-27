#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>

void main()
 {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
     setcolor(WHITE);
  for(int i=0;i<181;i++)
   {
    circle(30+i,270,15);
    line(30+i,285,30+i,300);
    line(30+i,300,20+i,320);
    line(30+i,300,40+i,320);
    line(30+i,300,30+i,350);
    line(30+i,350,20+i,370);
    line(30+i,350,40+i,370);
    delay(10);
    setcolor(WHITE);
    cleardevice();
    line(0,340,900,340);
  }


    for(i=0;i<181;i++)
    {
      circle(530-i,270,15);                //girl
    line(530-i,285,530-i,300);
    line(530-i,300,510-i,320);
    line(530-i,300,550-i,320);
    line(530-i,300,510-i,360);
    setcolor(WHITE);
    line(530-i,300,550-i,360);
    line(510-i,360,550-i,360);
    line(525-i,360,525-i,370);
    line(540-i,360,540-i,370);
    line(525-i,370,520-i,375);
    line(520-i,375,525-i,375);
    line(525-i,375,525-i,370);
    line(540-i,370,535-i,375);
    line(535-i,375,540-i,375);
    line(540-i,375,540-i,370);
    delay(10);
    cleardevice();
    setcolor(WHITE);
   circle(210,270,15);
    line(210,285,210,300);
    line(210,300,200,320);
    line(210,300,220,320);
    line(210,300,210,350);
    line(210,350,200,370);
    line(210,350,220,370);
    line(0,340,900,340);
    line(0,340,900,340);
 }

    circle(300,270,15);                //girl
    line(300,285,300,300);
    line(300,300,280,320);
    line(300,300,320,320);
    line(300,300,275,360);
    line(300,300,330,360);
    line(275,360,330,360);

    line(290,360,290,370);      //leg
    line(290,370,285,370);
    line(285,370,290,375);
    line(290,375,290,370);
    line(310,360,310,370);
    line(310,370,305,375);
    line(305,375,310,375);
    line(310,375,310,370);
    line(0,340,900,340);

 setcolor(RED);
  line(330,95,320,70);	 //heart
  line(330,95,345,70);
  line(320,70,310,90);
  line(345,70,355,90);
  line(310,90,329,140);
  line(355,90,329,140);
  setcolor(YELLOW);
  settextstyle(TRIPLEX_FONT,0,5);
  outtextxy(120,95,"A");
  outtextxy(190,95,"Sad");
  outtextxy(365,95,"Story...");
  delay(3000);
  cleardevice();

///////story///////////////////
  setcolor(5);
 settextstyle(DEFAULT_FONT,0,2);
  outtextxy(10,140,"A girlfriend gave a challenge to her");
  outtextxy(10,170," boyfriend to live a day without her.");
  delay(4500);
  cleardevice();


  setcolor(WHITE);
  circle(530,270,15);                //girl
    line(530,285,530,300);
    line(530,300,510,320);
    line(530,300,550,320);
    line(530,300,510,360);
    setcolor(WHITE);
    line(530,300,550,360);
    line(510,360,550,360);
    line(525,360,525,370);
    line(540,360,540,370);
    line(525,370,520,375);
    line(520,375,525,375);
    line(525,375,525,370);
    line(540,370,535,375);
    line(535,375,540,375);
    line(540,375,540,370);

  setcolor(LIGHTBLUE);
  arc(200,120,90,270,30);
  arc(220,140,190,300,30);
  arc(225,100,360,180,30);
  arc(270,88,360,180,30);
  arc(320,100,360,180,30);
  arc(270,160,170,340,30);
 arc(290,120,260,50,65);
  circle(400,210,20);
  circle(460,240,10);
  setcolor(RED);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(230,120,"Hii !");
  delay(3000);
  cleardevice();
  setcolor(WHITE);
  circle(30,270,15);
    line(30,285,30,300);
    line(30,300,20,320);
    line(30,300,40,320);
    line(30,300,30,350);
    line(30,350,20,370);
    line(30,350,40,370);

  setcolor(LIGHTBLUE);
  arc(200,120,90,270,30);
  arc(220,140,190,300,30);
  arc(225,100,360,180,30);
  arc(270,88,360,180,30);
  arc(320,100,360,180,30);
  arc(270,160,170,340,30);
 arc(290,120,260,50,65);
  circle(120,190,20);
  circle(80,240,10);
  setcolor(RED);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(230,120,"Hello !");
  delay(3000);
  cleardevice();
  setcolor(WHITE);

  circle(530,270,15);                //girl
    line(530,285,530,300);
    line(530,300,510,320);
    line(530,300,550,320);
    line(530,300,510,360);
    setcolor(WHITE);
    line(530,300,550,360);
    line(510,360,550,360);
    line(525,360,525,370);
    line(540,360,540,370);
    line(525,370,520,375);
    line(520,375,525,375);
    line(525,375,525,370);
    line(540,370,535,375);
    line(535,375,540,375);
    line(540,375,540,370);

  setcolor(LIGHTBLUE);
  arc(200,120,90,270,30);
  arc(220,140,190,300,30);
  arc(225,100,360,180,30);
  arc(270,88,360,180,30);
  arc(320,100,360,180,30);
  arc(270,160,170,340,30);
 arc(290,120,260,50,65);
  circle(400,210,20);
  circle(460,240,10);
  setcolor(RED);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(175,110,"can u live");
  delay(100);
  outtextxy(195,130,"without me");
  outtextxy(280,150,"?");

  delay(4600);
  cleardevice();

    setcolor(WHITE);
  circle(30,270,15);
    line(30,285,30,300);
    line(30,300,20,320);
    line(30,300,40,320);
    line(30,300,30,350);
    line(30,350,20,370);
    line(30,350,40,370);

  setcolor(LIGHTBLUE);
  arc(200,120,90,270,30);
  arc(220,140,190,300,30);
  arc(225,100,360,180,30);
  arc(270,88,360,180,30);
  arc(320,100,360,180,30);
  arc(270,160,170,340,30);
 arc(290,120,260,50,65);
  circle(120,190,20);
  circle(80,240,10);
  setcolor(RED);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(190,120,"Ofcourse");
  outtextxy(220,140,"not !! ");
  delay(4300);
  cleardevice();

  setcolor(WHITE);

  circle(530,270,15);                //girl
    line(530,285,530,300);
    line(530,300,510,320);
    line(530,300,550,320);
    line(530,300,510,360);
    setcolor(WHITE);
    line(530,300,550,360);
    line(510,360,550,360);
    line(525,360,525,370);
    line(540,360,540,370);
    line(525,370,520,375);
    line(520,375,525,375);
    line(525,375,525,370);
    line(540,370,535,375);
    line(535,375,540,375);
    line(540,375,540,370);

  setcolor(LIGHTBLUE);
  arc(200,120,90,270,30);
  arc(220,140,190,300,30);
  arc(225,100,360,180,30);
  arc(270,88,360,180,30);
  arc(320,100,360,180,50);
  arc(270,160,170,340,50);
 arc(290,120,260,50,80);
  circle(400,210,20);
  circle(460,240,10);
  setcolor(RED);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(175,110,"No only for");
  outtextxy(195,130,"one day");
  outtextxy(220,150,"challenge");
  delay(4700);
  cleardevice();

      setcolor(WHITE);
  circle(30,270,15);
    line(30,285,30,300);
    line(30,300,20,320);
    line(30,300,40,320);
    line(30,300,30,350);
    line(30,350,20,370);
    line(30,350,40,370);

  setcolor(LIGHTBLUE);
  arc(200,120,90,270,30);
  arc(220,140,190,300,30);
  arc(225,100,360,180,30);
  arc(270,88,360,180,30);
  arc(320,100,360,180,30);
  arc(270,160,170,340,30);
 arc(290,120,260,50,65);
  circle(120,190,20);
  circle(80,240,10);
  setcolor(RED);
  settextstyle(DEFAULT_FONT,0,3);
  outtextxy(240,120,"OH !");
    setcolor(YELLOW);
    circle(450,250,100);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(450,250,YELLOW);
    setcolor(WHITE);
    ellipse(410, 210, 0, 360,15,20);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(410,210,WHITE);
     setcolor(WHITE);
    ellipse(490, 210, 0, 360,15,20);
    floodfill(490,210,WHITE);
    for(i=0;i<20;i++)
    {
    setcolor(BLACK);
    arc(410,230,0,180,15-i);
    arc(490,230,0,180,15-i);
    }
    for(i=0;i<5;i++)
    { setcolor(BROWN);
    arc(450,320,50,160,50-i);
    }
    delay(5000);
    cleardevice();


  setcolor(WHITE);
  circle(530,270,15);                //girl
    line(530,285,530,300);
    line(530,300,510,320);
    line(530,300,550,320);
    line(530,300,510,360);
    setcolor(WHITE);
    line(530,300,550,360);
    line(510,360,550,360);
    line(525,360,525,370);
    line(540,360,540,370);
    line(525,370,520,375);
    line(520,375,525,375);
    line(525,375,525,370);
    line(540,370,535,375);
    line(535,375,540,375);
    line(540,375,540,370);

  setcolor(LIGHTBLUE);
  arc(200,120,90,270,30);
  arc(220,140,190,300,30);
  arc(225,100,360,180,30);
  arc(270,88,360,180,30);
  arc(320,100,360,180,50);
  arc(270,160,170,340,50);
 arc(290,120,260,50,80);
  circle(400,210,20);
  circle(460,240,10);
  setcolor(RED);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(175,110,"no talking");
  outtextxy(195,130,"at all");
  outtextxy(230,150,"okay !");
  delay(4700);
  cleardevice();


      setcolor(WHITE);
  circle(30,270,15);
    line(30,285,30,300);
    line(30,300,20,320);
    line(30,300,40,320);
    line(30,300,30,350);
    line(30,350,20,370);
    line(30,350,40,370);

  setcolor(LIGHTBLUE);
  arc(200,120,90,270,30);
  arc(220,140,190,300,30);
  arc(225,100,360,180,30);
  arc(270,88,360,180,30);
  arc(320,100,360,180,30);
  arc(270,160,170,340,30);
 arc(290,120,260,50,65);
  circle(120,190,20);
  circle(80,240,10);
  setcolor(RED);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(195,110,"okayyy..!");
  outtextxy(250,130,"dear..");
   setcolor(YELLOW);
    circle(450,250,100);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(450,250,YELLOW);
    setcolor(WHITE);
    ellipse(410, 210, 0, 360,15,20);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(410,210,WHITE);
     setcolor(WHITE);
    ellipse(490, 210, 0, 360,15,20);
    floodfill(490,210,WHITE);
    for(i=0;i<20;i++)
    {
    setcolor(BLACK);
    arc(410,230,0,180,15-i);
    arc(490,230,0,180,15-i);
    }
    for(i=0;i<5;i++)
    { setcolor(BROWN);
    arc(450,320,50,160,50-i);
    }
  delay(5000);
  cleardevice();


   setcolor(WHITE);

  circle(530,270,15);                //girl
    line(530,285,530,300);
    line(530,300,510,320);
    line(530,300,550,320);
    line(530,300,510,360);
    setcolor(WHITE);
    line(530,300,550,360);
    line(510,360,550,360);
    line(525,360,525,370);
    line(540,360,540,370);
    line(525,370,520,375);
    line(520,375,525,375);
    line(525,375,525,370);
    line(540,370,535,375);
    line(535,375,540,375);
    line(540,375,540,370);

  setcolor(LIGHTBLUE);
  arc(200,120,90,270,30);
  arc(220,140,190,300,30);
  arc(225,100,360,180,30);
  arc(270,88,360,180,30);
  arc(320,100,360,180,50);
  arc(270,160,170,340,50);
 arc(290,120,260,50,80);
  circle(400,210,20);
  circle(460,240,10);
  setcolor(RED);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(175,110,"if u passed");
  delay(100);
  outtextxy(180,130,"I will love");
  outtextxy(210,150,"u forever");
  delay(4500);
  cleardevice();


      setcolor(WHITE);
  circle(30,270,15);
    line(30,285,30,300);
    line(30,300,20,320);
    line(30,300,40,320);
    line(30,300,30,350);
    line(30,350,20,370);
    line(30,350,40,370);

  setcolor(LIGHTBLUE);
  arc(200,120,90,270,30);
  arc(220,140,190,300,30);
  arc(225,100,360,180,30);
  arc(270,88,360,180,30);
  arc(320,100,360,180,30);
  arc(270,160,170,340,30);
 arc(290,120,260,50,65);
  circle(120,190,20);
  circle(80,240,10);
  setcolor(RED);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(220,110,"OK..!");
  settextstyle(DEFAULT_FONT,0,1);
  outtextxy(220,140,"(said happily)");
  delay(2500);
  cleardevice();

  setcolor(5);
 settextstyle(DEFAULT_FONT,0,2);
  outtextxy(10,140,"He never texted nor called his gf for");
  outtextxy(10,170,"the whole day without knowing");
  outtextxy(10,200,"his gf has only 24 hours left");
  outtextxy(7,230,"because she was dying because of CANCER.");

  delay(7500);
  cleardevice();

   setcolor(6);
 settextstyle(DEFAULT_FONT,0,2);
  outtextxy(10,140,"After a day......");
  outtextxy(10,170,"He excitedly went to his girlfriend");
  delay(4500);
  cleardevice();

      setcolor(WHITE);
  circle(30,270,15);
    line(30,285,30,300);
    line(30,300,20,320);
    line(30,300,40,320);
    line(30,300,30,350);
    line(30,350,20,370);
    line(30,350,40,370);

  setcolor(LIGHTBLUE);
  arc(200,120,90,270,30);
  arc(220,140,190,300,30);
  arc(225,100,360,180,30);
  arc(270,88,360,180,30);
  arc(320,100,360,180,30);
  arc(270,160,170,340,30);
 arc(290,120,260,50,65);
  circle(120,190,20);
  circle(80,240,10);
  setcolor(RED);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(220,110,"I did it");
  outtextxy(220,140,"Baby !");
   setcolor(YELLOW);
    circle(450,250,100);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(450,250,YELLOW);
    setcolor(WHITE);
    ellipse(410, 210, 0, 360,15,20);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(410,210,WHITE);
     setcolor(WHITE);
    ellipse(490, 210, 0, 360,15,20);
    floodfill(490,210,WHITE);
    for(i=0;i<20;i++)
    {
    setcolor(BLACK);
    arc(410,230,0,180,15-i);
    arc(490,230,0,180,15-i);
    }
    for(i=0;i<5;i++)
    { setcolor(BROWN);
    arc(450,280,190,360,50-i);
    }
  delay(5400);
  cleardevice();


   setcolor(6);
 settextstyle(DEFAULT_FONT,0,2);
  outtextxy(200,140,"BUT....");
  outtextxy(7,170,"tears fell as he saw ...");
   setcolor(YELLOW);
    circle(450,250,100);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(450,250,YELLOW);
    setcolor(WHITE);
    ellipse(410, 210, 0, 360,15,20);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(410,210,WHITE);
     setcolor(WHITE);
    ellipse(490, 210, 0, 360,15,20);
    floodfill(490,210,WHITE);
    for(i=0;i<20;i++)
    {
    setcolor(BLACK);
    arc(410,230,0,180,15-i);
    arc(490,230,0,180,15-i);
    setcolor(9);
    ellipse(400,235,0,360,5-i,10);
    ellipse(405,260,0,360,5-i,10);
    ellipse(490,235,0,360,5-i,10);
    }
    for(i=0;i<5;i++)
    { setcolor(BROWN);
    arc(450,320,50,160,50-i);
    }
  delay(5100);
  cleardevice();

  setcolor(WHITE);
  line(400,200,350,250);
  line(400,200,440,250);
  line(350,250,330,380);
  line(440,250,440,380);
  line(330,380,440,380);
  circle(400,230,15);
  line(400,245,396,260);
  line(396,260,370,280);
  line(396,260,430,280);
  line(396,260,360,340);
  line(396,260,420,340);
  line(360,340,420,340);
  line(380,340,380,360);
  line(400,340,400,360);

  setcolor(12);
 settextstyle(DEFAULT_FONT,0,2);
  outtextxy(10,140,"his girlfriend lying in a coffin ");
  outtextxy(10,170,"with a note...");
  delay(4500);
  cleardevice();
  setcolor(WHITE);
  rectangle(100,20,500,400);
  setcolor(RED);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(400,420,"NOTE... ");
  setcolor(3);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(130,50,"You did it baby.... ") ;
  outtextxy(120,80,"Now please do it ");
  outtextxy(140,110,"everyday...");
  outtextxy(200,200,"I LOVE YOU.. ");
  delay(4500);
  cleardevice();

    getch();
 }


