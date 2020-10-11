
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
#include <dos.h>

void fractal(int,int,int,int,int);
int gauss();

int p1[4][2]= {	200,200,
		175,150,
		250,200,
		225,225};

int p2[7][2]= { 250,200,
		330,150,
		300,200,
		275,250,
		260,210,
		235,250,
		225,225};

int p3[6][2]= { 200,165,
		190,150,
		250,170,
		300,150,
		290,174};

int p4[5][2]= { 195,155,
		185,148,
		230,130,
		295,145,
		285,155};

int p5[4][2]= { 235,138,
		215,145,
		240,150,
		243,163};

int p6[3][2]= { 235,138,
		265,150,
		238,148};

int s1[11][2]= { 200,202,
		225,227,
		235,252,
		260,212,
		275,252,
		300,202,
		280,260,
		275,265,
		250,275,
		225,270,
		220,265};

void main()
{
	int gd=DETECT,gm,r,i,j;
	initgraph(&gd,&gm,"c:\\tc\\bgi ");
	setcolor(RED);           //Rose
	for(i=0;i<4;i++)
	{
		if(i!=3)
			fractal(p1[i][0],p1[i][1],p1[i+1][0],p1[i+1][1],8);
		else
			fractal(p1[i][0],p1[i][1],p1[0][0],p1[0][1],8);
	}
	for(i=0;i<7;i++)
	{
		if(i!=6)
			fractal(p2[i][0],p2[i][1],p2[i+1][0],p2[i+1][1],8);
		else
			fractal(p2[i][0],p2[i][1],p2[0][0],p2[0][1],8);
	}
	for(i=0;i<4;i++)
		fractal(p3[i][0],p3[i][1],p3[i+1][0],p3[i+1][1],8);
		//Last edge not joined to the first
	fractal(250,170,265,188,8); //To draw specific shape
	for(i=0;i<4;i++)
		fractal(p4[i][0],p4[i][1],p4[i+1][0],p4[i+1][1],8);
		//Last edge not joined to the first
	for(i=0;i<3;i++)
		fractal(p5[i][0],p5[i][1],p5[i+1][0],p5[i+1][1],8);
	fractal(215,145,217,160,8);
	fractal(175,150,190,150,8);
	for(i=0;i<2;i++)
		fractal(p6[i][0],p6[i][1],p6[i+1][0],p6[i+1][1],8);
	fractal(265,150,262,160,8);
	fractal(300,150,330,150,8);
	setcolor(GREEN);    			//Sepals
	for(i=0;i<11;i++)
	{
		if(i!=10)
			fractal(s1[i][0],s1[i][1],s1[i+1][0],s1[i+1][1],8);
		else
			fractal(s1[i][0],s1[i][1],s1[0][0],s1[0][1],8);
	}
	fractal(250,275,255,350,12);            //Stem
	getch();
	closegraph();
}


int gauss()
{
	int gauss;
	randomize();
	gauss=random(3);
	return(gauss);
}


void fractal(int x1,int y1,int x2,int y2,int n)
{
	//delay(5);
	int xm,ym;
	int i;
	if(n==0)  //n decremented since passing (n-1) to fractal again
					      //RECURSION
	{
		line(x1,y1,x2,y2);
		return;
	}
	xm=(x1+x2)/2;
	ym=(y1+y2)/2;
	i=gauss();
	if(i==0)
	  i++;
//	  i--;
	xm=xm-i;
	ym=ym-i;
	fractal(x1,y1,xm,ym,n-1);
	fractal(xm,ym,x2,y2,n-1);
}
















              /*********** OUTPUT ************/
         


