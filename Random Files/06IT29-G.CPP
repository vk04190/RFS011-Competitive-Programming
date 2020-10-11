#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(void)
{
	int gd,gm;
	gd=DETECT;
	initgraph(&gd,&gm,"\\tc\\bgi");
	cleardevice();
	line(10,10,100,100);
	circle(200,200,50);
	rectangle(250,380,350,350);
	getch();
	}