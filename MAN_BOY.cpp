
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
clrscr();
int gdriver = DETECT,gmode,i,x=850,y=800;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
       circle(240,340,20);//m head
       line(240,360,240,400);//mbody
       line(240,400,220,470);//mlleg
       line(240,400,260,470);//mrleg
       circle(290,380,15);//bhead
       line(290,395,290,425);//bbody
       line(290,425,280,470);//blleg
       line(290,425,305,470);//brleg
       line(240,380,260,380);//mrhand
       line(300,410,280,410);//blhand
       line(260,380,280,410);
       line(240,380,215,390);//mlhand
       line(215,390,230,365);//mlhand
       line(300,410,315,420);//brhand
       line(230,365,230,310);//hundle
       line(150,310,310,310);
       line(0,470,630,470);//ground
       ellipse(230,310,0,180,80,80);
       ellipse(225,360,180,360,5,5);
       for(i=0;i<500;i++){
       outtextxy(random(x),random(y),"`");
       delay(20);
       }

getch();
}