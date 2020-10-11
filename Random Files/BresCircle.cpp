#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
	int x1,y1,r,x,y,d,gd=DETECT,gm;
	printf("\n\nEnter centre and radius: " );
	scanf("%d %d %d",&x1,&y1,&r);
	initgraph(&gd,&gm,"e:\\tc\\bgi");
	d=3-2*r;
	x=0;
	y=r;
	while(x<y)
	{
		putpixel(x1+x,y1+y,15);
		putpixel(x1+x,y1-y,15);
		putpixel(x1-x,y1+y,15);
		putpixel(x1-x,y1-y,15);
		putpixel(x1+y,y1+x,15);
		putpixel(x1+y,y1-x,15);
		putpixel(x1-y,y1+x,15);
		putpixel(x1-y,y1-x,15);
		if(d<00)
		{
			d=d+4*x+6;
		}
		else
		{
			y=y-1;
			d=d+4*(x-y)+10;
		}
		x=x+1;
	}
	getch();
}


