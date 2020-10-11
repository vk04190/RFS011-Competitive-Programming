/*********** BEZIER CURVES ***************/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int gd=DETECT,gm,maxx,maxy;
float pnt[4][2];
void curv(float x2,float y2)
{
	line(pnt[0][0],pnt[0][1],x2,y2);
	pnt[0][0]=x2;
	pnt[0][1]=y2;
}
void bez(float xb,float yb,float xc,float yc,float xd,float yd, int n)
{
	float xab,yab,xbc,ybc,xcd,ycd;
	float xabc,yabc,xbcd,ybcd;
	float xabcd,yabcd;
	if(n==0)
	{
		curv(xb,yb);
		curv(xc,yc);
		curv(xd,yd);
	}
	else
	{
		xab=(pnt[0][0]+xb)/2;
		yab=(pnt[0][1]+yb)/2;
		xbc=(xb+xc)/2;
		ybc=(yb+yc)/2;
		xcd=(xc+xd)/2;
		ycd=(yc+yd)/2;
		xabc=(xab+xbc)/2;
		yabc=(yab+ybc)/2;
		xbcd=(xbc+xcd)/2;
		ybcd=(ybc+ycd)/2;
		xabcd=(xabc+xbcd)/2;
		yabcd=(yabc+ybcd)/2;
		n=n-1;
		bez(xab,yab,xabc,yabc,xabcd,yabcd,n);
		bez(xbcd,ybcd,xcd,ycd,xd,yd,n);

	}
}


void main()
{
	int i,gd=DETECT,gm;
	printf("\n\t\t\tBEZIER CURVES");
	for(i=0;i<4;i++)
	{
		printf("\nENTER THE COORDINATES OF POINT %d->",i+1);
		scanf("%f %f",&pnt[i][0],&pnt[i][1]);
	}
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	bez(pnt[1][0],pnt[1][1],pnt[2][0],pnt[2][1],pnt[3][0],pnt[3][1],8);
	getch();
	closegraph();
}
