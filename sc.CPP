

#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<dos.h>
#include<stdlib.h>
#include<iostream.h>
void page()

{

	settextstyle(0,0,2);
	outtextxy(200,200,"SNAKES AND LADDERS!!");
	settextstyle(0,0,0);
	outtextxy(200,300,"CLICK ENTER TO PLAY AND TO MOVE THE COIN ");
	getch();
	setcolor(WHITE);
	bar(200,500,800,200);
	setfillstyle(0,0);
	floodfill(200,200,0);

}
void board()
{
	for (int i=20;i<550;i+=50)
	    {
		line(i,20,i,420);
	    }

	for (int j=20;j<=420;j+=40)
	    {
		line(20,j,520,j);
	    }

	int n=1,x=40;

	char s[16];
	int y=400, q=1;

	while(n<101)
	{

	   itoa(n,s,10);

	   if ((n%10==1)&&(n!=1))
	      {	y=y-40;
		q=-q;

		if (q==1)
		    x=40;
		else
		    x=490;
	       }

	   if  (q==1)
	       {

		 outtextxy(x,y,s);
		 x+=50;
		}
	   else
		{
		 outtextxy(x,y,s);
		 x-=50;
		}

	   n++;

	}
}
void sl();
int dice(int &score,int &before)
{
	int c=random(6);
	before=score;
	score+=c+1;

	switch(c)
	{
		case 0:	setcolor(BLACK);
			setfillstyle(1,CYAN);
			bar(550,250,600,300);

			rectangle(550,250,600,300);
			setcolor(WHITE);
			circle(575,275,5);break;

		case 1: setcolor(BLACK) ;
			setfillstyle(1,CYAN);
			bar(550,250,600,300);

			rectangle(550,250,600,300);
			setcolor(WHITE);
			circle(565,275,5);
			circle(585,275,5);break;

		case 2:	setcolor(BLACK) ;
			setfillstyle(1,CYAN);
			bar(550,250,600,300);

			rectangle(550,250,600,300);
			setcolor(WHITE);
			circle(565,285,5);
			circle(585,285,5);
			circle(575,265,5);break;

		case 3:	setcolor(BLACK) ;
			setfillstyle(1,CYAN);
			bar(550,250,600,300);

			rectangle(550,250,600,300);
			setcolor(WHITE);
			circle(565,285,5);
			circle(585,285,5);
			circle(565,265,5);
			circle(585,265,5);break;

		case 4: setcolor(BLACK) ;
			setfillstyle(1,CYAN);
			bar(550,250,600,300);

			rectangle(550,250,600,300);
			setcolor(WHITE);
			circle(565,285,4);
			circle(585,285,4);
			circle(565,265,4);
			circle(585,265,4);
			circle(575,275,4);break;



		case 5:	setcolor(BLACK) ;
			setfillstyle(1,CYAN);
			bar(550,250,600,300);

			rectangle(550,250,600,300);
			setcolor(WHITE);
			circle(565,285,4);
			circle(585,285,4);
			circle(565,275,4);
			circle(585,275,4);
			circle(565,265,4);
			circle(585,265,4);break;
}
 return c+1;

}
void sl()
{

setcolor(GREEN);

line(181,385,186,312);
line(182,385,187,312);
line(209,385,198,314);
line(210,385,199,314);

line(182,377,208,377);
line(183,354,205,353);
line(185,333,202,332);
line(186,319,199,318);

line(369,300,384,194);
line(370,300,385,194);
line(385,302,397,198);
line(386,302,398,198);

line(370,295,387,295);
line(373,276,388,279);
line(376,256,391,260);
line(377,241,392,245);
line(381,222,395,226);
line(383,207,396,209);

line(259,265,303,122);
line(258,265,302,122);
line(272,265,313,123);
line(273,265,312,123);

line(262,254,275,254);
line(266,227,280,238);
line(272,218,285,221);
line(277,202,289,204);
line(283,185,295,187);
line(288,168,300,179);
line(294,148,305,149);
line(299,131,310,131);

line(150,147,187,87);
line(151,147,188,87);
line(165,152,199,87);
line(166,152,200,87);

line(153,141,170,144);
line(163,128,178,128);
line(174,109,188,109);
line(185,92,196,95);


setfillstyle(9,5);
setcolor(1);
fillellipse(242,382,2,2);
fillellipse(246,379,2,2);
fillellipse(247,379,2,2);
fillellipse(249,378,2,2);
fillellipse(252,375,2,2);
fillellipse(251,370,2,2);
fillellipse(250,365,2,2);
fillellipse(248,354,3,2);
fillellipse(248,362,3,2);
fillellipse(245,358,3,2);
fillellipse(252,351,3,2);
fillellipse(261,351,3,2);
fillellipse(266,353,3,2);
fillellipse(284,348,3,2);
fillellipse(288,340,3,2);
fillellipse(275,351,3,2);
fillellipse(285,336,3,2);
fillellipse(283,329,3,2);
fillellipse(284,319,3,2);
fillellipse(287,317,3,2);
fillellipse(257,350,3,2);
fillellipse(270,352,3,2);
fillellipse(281,350,3,2);
fillellipse(286,345,2,2);
fillellipse(285,333,2,2);
fillellipse(283,323,2,2);
fillellipse(291,316,2,2);
fillellipse(295,316,2,2);

fillellipse(420,358,3,2);
fillellipse(415,357,3,2);
fillellipse(404,350,3,2);
fillellipse(398,343,3,2);
fillellipse(392,335,3,2);
fillellipse(374,319,3,2);
fillellipse(362,315,3,2);
fillellipse(346,317,3,2);
fillellipse(333,313,3,2);
fillellipse(325,304,3,2);
fillellipse(319,293,3,2);
fillellipse(315,284,3,2);
fillellipse(316,289,3,2);
fillellipse(315,280,3,2);
fillellipse(321,298,3,2);
fillellipse(327,308,3,2);
fillellipse(323,301,3,2);

fillellipse(330,311,3,2);
fillellipse(337,315,3,2);
fillellipse(341,317,3,2);
fillellipse(352,317,3,2);
fillellipse(357,316,3,2);
fillellipse(368,313,3,2);
fillellipse(373,315,3,2);
fillellipse(374,323,3,2);
fillellipse(374,326,3,2);
fillellipse(375,330,3,2);
fillellipse(378,334,3,2);
fillellipse(383,334,3,2);
fillellipse(388,335,3,2);
fillellipse(393,337,3,2);
fillellipse(397,339,3,2);
fillellipse(399,348,3,2);
fillellipse(408,352,3,2);
fillellipse(411,354,3,2);

fillellipse(155,205,3,2);
fillellipse(158,207,3,2);
fillellipse(162,209,3,2);
fillellipse(170,227,3,2);
fillellipse(169,219,3,2);
fillellipse(169,236,3,2);
fillellipse(169,247,3,2);
fillellipse(173,257,3,2);
fillellipse(181,264,3,2);
fillellipse(175,260,3,2);
fillellipse(165,212,3,2);
fillellipse(168,216,3,2);
fillellipse(171,222,3,2);
fillellipse(170,231,3,2);
fillellipse(170,241,3,2);
fillellipse(172,252,3,2);
fillellipse(178,262,3,2);
fillellipse(184,266,3,2);

fillellipse(86,225,3,2);
fillellipse(90,221,3,2);
fillellipse(95,217,3,2);
fillellipse(101,212,3,2);
fillellipse(105,204,3,2);
fillellipse(106,196,3,2);
fillellipse(106,189,3,2);
fillellipse(106,179,3,2);
fillellipse(109,170,3,2);
fillellipse(112,164,3,2);
fillellipse(109,167,3,2);
fillellipse(107,174,3,2);
fillellipse(106,184,3,2);
fillellipse(106,194,3,2);
fillellipse(105,200,3,2);
fillellipse(103,208,3,2);
fillellipse(98,215,3,2);
fillellipse(92,219,3,2);
fillellipse(88,222,3,2);

fillellipse(285,87,3,2);
fillellipse(289,89,3,2);
fillellipse(295,91,3,2);
fillellipse(300,97,3,2);
fillellipse(305,104,3,2);
fillellipse(311,109,3,2);
fillellipse(320,113,3,2);
fillellipse(330,117,3,2);
fillellipse(338,122,3,2);
fillellipse(342,127,3,2);
fillellipse(345,132,3,2);
fillellipse(347,138,3,2);
fillellipse(350,142,3,2);
fillellipse(350,145,3,2);
fillellipse(298,93,3,2);
fillellipse(302,101,3,2);
fillellipse(307,107,3,2);
fillellipse(315,113,3,2);
fillellipse(325,112,3,2);
fillellipse(334,119,3,2);
fillellipse(340,125,3,2);
fillellipse(328,114,3,2);

setfillstyle(6,14);
setcolor(0);
fillellipse(299,312,4,3);
fillellipse(314,276,4,3);
fillellipse(152,202,4,3);
fillellipse(116,161,4,3);
fillellipse(280,84,4,3);

}

class s
{
	public : int x,y;
}cur={45,400};

int slmove(int &score)
{       int flag=1;
	 switch(score)
	{
	case 17:score=24;break;
	case 33:score=53;break;
	case 36:score=75;break;
	case 63:score=84;break;

	case 86:score=67;break;
	case 62:score=42;break;
	case 58:score=37;break;
	case 35:score=12;break;
	case 26:score=5;break;
	default :flag=0;
	}
	return flag;
}


void patch(int &score,int &before,int colour)
{

	if ((score /10)%2 == 0)

	{
	   cur.y = (10 - (score - 1) / 10) * 40 ;

	   if  (score %10 == 0)
		cur.x = 50;
	   else
		cur.x = score % 10 * 50 ;

	}
	else
	{
	   cur.y = (10 - (score - 1) / 10) * 40 ;

	   if  (score % 10 == 0)

		cur.x = (10 - (score % 10)) * 50 ;
	   else
		cur.x = (11 - (score % 10)) * 50;


	}
	if(colour==5)
		{	cur.x+=10;
			cur.y+=10;
		}
	setcolor(colour);
	circle(cur.x, cur.y, 5);


	if ((before /10)%2 == 0)
	{
	   cur.y = (10 - (before - 1) / 10) * 40  ;

	   if  (before % 10 == 0)
	       cur.x = 50;
	   else
	       cur.x = before % 10 * 50;

	}
	else
	{
	   cur.y = (10 - (before - 1) / 10) * 40;
	   if  (before % 10 == 0)

		cur.x = (10 - (before % 10)) * 50 ;
	   else
		cur.x = (11 - (before % 10)) * 50;


	 }

	if (colour==5)
	   {
		cur.x+=10;
		cur.y+=10;
	   }

	setcolor(BLACK);
	circle(cur.x, cur.y,5);

}

int score1,score2,before1,before2;


void main()
{
	int gd=VGA;int gm=VGAHI;
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	page();
	board();
	sl();

	randomize();
	setcolor(WHITE);
	setfillstyle(1,WHITE);
	floodfill(600,400,WHITE);
	setcolor(BLACK);
	outtextxy(300,450,"PRESS 0 TO EXIT");
	outtextxy(550,150,"PLAYER1");
	outtextxy(550,200,"PLAYER2");





	score1 = score2 = before1 = before2 = 1;
	int roll,temp;
	char ch;
	while((score1<100)&& (score2<100))
	{





	setcolor(CYAN);
	circle(620,150,5);


	setcolor(MAGENTA);
	circle(620,200,5);
	       roll= dice(score1,before1);
		 temp=before1;

		while(roll--)
		{ temp++;
		  patch(temp,temp-1,3);
		  delay(500);
		  }
		  if(slmove(score1)==1)
			patch(score1,temp,3);



	     ch= getch();
	     if(ch=='0')
	     exit(0);



		 roll= dice(score2,before2);
		 temp=before2;

		while(roll--)
		{ temp++;
		  patch(temp,temp-1,5);
		  delay(500);
		  }
		 if(slmove(score2)==1)
			patch(score2,temp,5);



	      ch=getch();
	      if(ch=='0')
	      exit(0);

	}
setcolor(BLACK);
setfillstyle (1,BLACK);
floodfill (600,400,7);

setcolor(WHITE);
settextstyle(0,0,3);
if (score1 >= 100)
   outtextxy (50,300, " FIRST PLAYER WON!") ;
else
   outtextxy (50,300, " SECOND PLAYER WON!") ;

settextstyle(0,0,5);
outtextxy(50,150," GAME OVER");

getch();
closegraph();


}

















