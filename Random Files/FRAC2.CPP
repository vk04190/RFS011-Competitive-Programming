#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <dos.h>

const double rad = 0.017453293,fct = M_SQRT_2;
float fanRatio = .7,lenRatio = .7;
int numBranch = 10;

double jrand(int n,int f)
{
	int r=random(n);
	r/=(float)f;
	return r;
}
void f1(double dir,double len,int n)
{
	delay(3);
	if(n<0)
	{
		linerel(len*cos(rad * dir),len*sin(rad * dir));
		return;
	}
	f1(dir,len/3.0,n-1);
	dir-=60.0;
	f1(dir,len/3.0,n-1);
	dir+=120.0;
	f1(dir,len/3.0,n-1);
	dir-=60;
	f1(dir,len/3.0,n-1);
}

void f2(double dir,double len,int n)
{
	delay(3);

	if(n<0)
	{
		linerel(len*cos(rad * dir),len*sin(rad * dir));
		return;
	}
	dir+=45;
	f2(dir,len*fct,n-1);
	dir-=90;
	f2(dir,len*fct,n-1);
	dir+=45;
}

void f3(int x,int y,float A,float L,float F,int n)
{
		delay(3);
	int i,num;
	float delang,ang,tx,ty;

	if(n>0)
	{
		tx=x+L*cos(rad*A);
		ty=y+L*sin(rad*A);

		line(x,y,tx,ty);
		num=numBranch;

		if(num>1)
			delang=F/(num-1.0);
		else
			ang=A - (F/2.0) - delang;
		for(i=0;i<num;i++)
		{
			ang+=delang;
			f3(tx,ty,ang,L*lenRatio,F*fanRatio,n-1);
		}
	}
}
void main()
{
	int gd=DETECT,gm;

	initgraph(&gd,&gm,"c:/tc/bgi");
	moveto(0,479);
	f1(0,700,4);
	getch();
	getch();
	cleardevice();
	moveto(320,240);
	f2(0,200,11);
	getch();	getch();
	cleardevice();
	randomize();
	f3(320,479,-90,100,-180,3);
	getch();	getch();
//	closegraph();
}