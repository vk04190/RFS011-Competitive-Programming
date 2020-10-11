#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <iostream.h>
#include <math.h>

DrawPetal(int x,int y, int d,int t,int col)
{
  setcolor(col);
  float tr=t*M_PI/180;  //Converting angle in degrees to radians
  int xm=x+d*sin(tr);
  int ym=y+d*cos(tr);
  int x1=xm-3*d*cos(tr);
  int y1=ym+3*d*sin(tr);
  int x2=xm+3*d*cos(tr);
  int y2=ym-3*d*sin(tr);
  int x3=x-5*d*sin(tr);
  int y3=y-5*d*cos(tr);
  arc(x1,y1,15+t,49+t,4.5*d);
  arc(x2,y2,131+t,166+t,4.5*d);
  arc(x3,y3,254+t,286+t,5*d);
  setfillstyle(SOLID_FILL,LIGHTRED);
  floodfill((2*x+x3)/3,(2*y+y3)/3,col);
}

void main()
{
  int gd=DETECT,gm,i,j;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
  for(i=1;i<=3;i++)
  {
    for(j=0;j<360;j+=40)
    {
      DrawPetal(400,200,50/i,j,(i+j/40)%2+RED);
      getch();
    }
  }
  getch();
}











