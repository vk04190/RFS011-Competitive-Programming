
/************* FRACTALS **********/


#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <stdlib.h>
#include <dos.h>

void fractal(int,int,int,int,int);
int a[7][2]= {	300,150,
			310,140,
			320,140,
			330,160,
			320,170,
			310,170,
			300,160
		   };
int b[7][2]= {	300,150,
			290,140,
			280,140,
			270,160,
			280,170,
			290,170,
			300,160
			 };
int c[6][2]= {  285,140,
		    280,130,
		    290,120,
		    310,120,
	          320,130,
	          315,140
		 };
int d[6][2]= {  285,170,
		    280,180,
        	    290,190,
		    310,190,
		    320,180,
		    315,170
		 };
void main()
{
	int gd=DETECT,gm,i,j=0;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	getch();
	setcolor(RED);
	for(i=0;i<6;i++)
	{
		fractal(a[i][0],a[i][1],a[i+1][0],a[i+1][1],8);

	}
	delay(550);
	for(i=0;i<6;i++)
	{
	fractal(a[i][0]+20,a[i][1],a[i+1][0]+20,a[i+1][1],8);
	}
	delay(550);
	for(i=0;i<6;i++)
	{
		fractal(b[i][0],b[i][1],b[i+1][0],b[i+1][1],8);

	}
	delay(550);
	for(i=0;i<6;i++)
	{
	fractal(b[i][0]-20,b[i][1],b[i+1][0]-20,b[i+1][1],8);
	}
	delay(550);
	for(i=0;i<5;i++)
	{
	fractal(c[i][0],c[i][1],c[i+1][0],c[i+1][1],8);
	}
	delay(550);
	for(i=0;i<5;i++)
	{
	fractal(c[i][0],c[i][1]-20,c[i+1][0],c[i+1][1]-20,8);
	}
	delay(550);
	for(i=0;i<5;i++)
	{
	fractal(d[i][0],d[i][1],d[i+1][0],d[i+1][1],8);
	}
	delay(550);
	for(i=0;i<5;i++)
	{
	fractal(d[i][0],d[i][1]+20,d[i+1][0],d[i+1][1]+20,8);
	}
	delay(550);
	fractal(b[2][0]-20,b[2][1],b[3][0]-20,b[3][1]-40,8);
	delay(550);
	fractal(b[3][0]-20,b[3][1]-40,c[1][0],c[1][1]-20,8);
	delay(550);
	fractal(a[2][0]+20,a[2][1],a[3][0]+20,a[3][1]-40,8);
	delay(550);
	fractal(a[3][0]+20,a[3][1]-40,c[4][0],c[4][1]-20,8);
	delay(550);
	fractal(a[4][0]+20,a[4][1],a[3][0]+20,a[3][1]+40,8);
	delay(550);
	fractal(a[3][0]+20,a[3][1]+40,d[4][0],d[4][1]+20,8);
	delay(550);
	fractal(b[4][0]-20,b[4][1],b[3][0]-20,b[3][1]+40,8);
	delay(550);
	fractal(b[3][0]-20,b[3][1]+40,d[1][0],d[1][1]+20,8);
	delay(550);
	setcolor(GREEN);
	for(j=0;j<5;j++)
	{
	fractal(d[2][0]+5+j,d[2][1]+20,d[2][0]+20+j,400,8);
	delay(50);
	}
	getch();

	closegraph();
}

int gauss()
{
	int gauss;
	randomize();
	gauss=random(2);
	return(gauss);
}
void fractal(int x1,int y1,int x2,int y2,int n)
{
	int x12,y12;
	int i;
	if(n==0)
	{
		line(x1,y1,x2,y2);
		return;
	}
	x12=(x1+x2)/2;
	y12=(y1+y2)/2;
	i=gauss();
	if(i==0)
	i++;
	x12=x12-i;
	y12=y12-i;
	fractal(x1,y1,x12,y12,n-1);
	fractal(x12,y12,x2,y2,n-1);
}

