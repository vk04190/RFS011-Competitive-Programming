#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(void)
	{
		int gd,gm;
		gd=DETECT;
		initgraph(&gd,&gm,"\\tc\\bgi");
		cleardevice();
		line(60,10,30,80);
		line(60,10,80,80);
		rectangle(30,80,250,150);
		line(60,10,250,10);
		line(250,10,250,80);
		line(80,80,80,150);
		rectangle(45,125,65,150);
		line(55,125,55,150);
		getch();
		closegraph();
		}