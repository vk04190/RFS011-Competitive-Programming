
/*		AIM : ANIMATION PROGRAM - AEROPLANE
--------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

struct pt
{
	int x,y;
	int cx,cy;
}p[10],c[10],g[10],b[10],cr[10];

void crush();

void main()
{
	int gd=DETECT,gm,i,j;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	for(i=0;i<10;i++)
		p[i].x=p[i].y=0;
	for(i=0,j=0;i<640,j<480;i=i+4,j=j+2)
	{
		p[0].x=30;
		p[0].y=50;
		p[1].x=100;
		p[1].y=50;
		p[2].x=100;
		p[2].y=75;
		p[3].x=30;
		p[3].y=75;
		p[5].x=120;
		p[5].y=60;
		p[6].x=100;
		p[6].y=75;
		p[7].x=10;
		p[7].y=30;
		p[8].x=10;
		p[8].y=105;
		p[9].x=20;
		p[9].y=65;
		c[0].x=50;
		c[0].y=75;
		c[1].x=90;

		line(p[0].x+i,p[0].y,p[1].x+i,p[1].y);
		line(p[2].x+i,p[2].y,p[3].x+i,p[3].y);
		line(p[1].x+i,p[1].y,p[5].x+i,p[5].y);
		line(p[2].x+i,p[2].y,p[5].x+i,p[5].y);
		circle(c[0].x+i,c[0].y,5);
		circle(c[1].x+i,c[0].y,5);
		line(p[0].x+i,p[0].y,p[7].x+i,p[7].y);
		line(p[3].x+i,p[3].y,p[7].x+i,p[8].y);
		line(p[7].x+i,p[7].y,p[9].x+i,p[9].y);
		line(p[8].x+i,p[8].y,p[9].x+i,p[9].y);

		setfillstyle(SOLID_FILL,4);
		floodfill(p[5].x-2+i,p[5].y,15);

		g[0].x=585;  g[0].y=350;
		g[1].x=630;  g[1].y=350;
		g[2].x=600;  g[2].y=330;
		g[3].x=615;  g[3].y=330;
		g[4].y=310;

		line(g[2].x,g[4].y,g[3].x,g[4].y);
		line(g[0].x,g[0].y,g[1].x,g[1].y);
		line(g[0].x,g[2].y,g[2].x,g[2].y);



		line(g[3].x,g[3].y,g[1].x,g[2].y);
		line(g[0].x,g[2].y,g[0].x,g[0].y);
		line(g[1].x,g[1].y,g[1].x,g[2].y);
		line(g[2].x,g[2].y,g[2].x,g[4].y);
		line(g[3].x,g[3].y,g[3].x,g[4].y);

		setfillstyle(SOLID_FILL,9);
		floodfill(g[2].x,g[3].y+5,15);

		b[0].x=605;  b[0].y=340;
		b[1].x=615;  b[1].y=320;
		b[2].x=610;  b[2].y=310;

		line(b[0].x,b[0].y-j,b[0].x,b[1].y-j);
		line(b[1].x,b[0].y-j,b[1].x,b[1].y-j);
		line(b[0].x,b[0].y-j,b[1].x,b[0].y-j);
		line(b[0].x,b[1].y-j,b[2].x,b[2].y-j);
		line(b[1].x,b[1].y-j,b[2].x,b[2].y-j);
		getch();
		setfillstyle(SOLID_FILL,9);
		floodfill(b[2].x,b[2].y+2-j,15);
		if(b[2].y-j<=p[5].y && p[5].x<=b[2].x+j)
		{
			cleardevice();
			printf("\n\n\t\t\t\t\tCrash");
			getch();
			crush();
			break;
		}
		delay(50);
		cleardevice();
	}
	getch();
	closegraph();
}
//---------------------------------------------------------------------------
void crush()
{
	int i;
	for(i=0;i<20;i++)
	{
		circle(610,60,2+i);
		delay(20);
		if(i==15)
			getch();
		cleardevice();
	}
}
//-------------------------------------- E N D -----------------------------