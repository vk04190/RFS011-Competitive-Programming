#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <process.h>
#include <math.h>
#include <graphics.h>
#include <dos.h>
class ellipsemid
{
	public:
	float x,x1,y,y1,r,dx,dy,rx,ry,length;
	void input();
	void calculate();
};

void ellipsemid::input()
{
	cout<<"Enter the value of x1:  ";
	cin>>x1;
	cout<<"Enter the value of y1:  ";
	cin>>y1;
	cout<<"Enter the value of a:  ";
	cin>>r;
}
void ellipsemid::calculate()

{
	rx=50,ry=10,x1=100,y1=100;
	float d,rx2,ry2,di;
	rx2=rx*rx;
	ry2=ry*ry;
	x=0;
	y=ry;
	dy=2*rx2*y;
	dx=2*ry2*x;
	di=ry2+(rx2*ry)+(0.25*rx2);
	do
	{
		putpixel(x1+x,y1+y,15);
		putpixel(x1-x,y1-y,15);
		putpixel(x1+x,y1-y,15);
		putpixel(x1-x,y1+y,15);

		if(di<0)
		{
			x=x+1;
			dx=dx+2*ry2;
			di=di+dx+ry2;
		 }
		 else
		 {
			x=x+1;
			y=y-1;
			dx=dx+2*ry2;
			dy=dy-2*rx2;
			di=di+dx-dy+ry2;
		  }
	 }while(dx<dy);
		 di=ry2*(x+0.5)*(x+0.5)+rx2*(y-1)*(y-1)-rx2*ry2;
		do
		{
		putpixel(x1+x,y1+y,15);
		putpixel(x1-x,y1-y,15);
		putpixel(x1+x,y1-y,15);
		putpixel(x1-x,y1+y,15);

		if(di>0)
		{
			y=y-1;
			dy=dy-2*rx2;
			di=di-dy+rx2;
		 }
		 else
		 {
			x=x+1;
			y=y-1;
			dx=dx+2*ry2;
			dy=dy-2*rx2;
			di=di+dx-dy+rx2;
		  }
	 }while(y>=0);


}
void main()
{
	int gm,gd;
	ellipsemid d1;
	clrscr();
    //	d1.input();
	gd = DETECT;
	initgraph(&gd, &gm, "c:\\tc\\bgi");

	d1.calculate();
	getch();
}

