#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int p=10;
void fractal(int x1,int y1,int x2,int y2,int d,int k)
{
  if(k<p)
  {
    fractal(x1,y1,x1+(x2-x1)/4,y1+(y2-y1)/4,d/2,k+1);
    fractal(x1+(x2-x1)/4,y1+(y2-y1)/4,x2,y2,d/2,k+1);
    fractal(x1,y1,x1+(x2-x1)/2-d,y1+(y2-y1)/2-d,d/2,k+1);
    fractal(x1,y1,x1+(x2-x1)/2+d,y1+(y2-y1)/2+d,d/2,k+1);
  }
  else
  {
    line(x1,y1,x2,y2);
    line(x1+(x2-x1)/4,y1+(y2-y1)/4,x1+(x2-x1)/2-d,y1+(y2-y1)/2-d);
    line(x1+(x2-x1)/4,y1+(y2-y1)/4,x1+(x2-x1)/2+d,y1+(y2-y1)/2+d);
 //   delay(1);
  }
}

main()
{
  int gd=DETECT,gm;
  int x1=100,y1=400,x2=600,y2=50,d=150;
  initgraph(&gd,&gm,"e:\\tc\\bgi");
  setcolor(15);
  setcolor(06);
  for(p=9;p<10;p++)
  {
    fractal(x1,y1,x2,y2,d,1);
    getch();
  }
  getch();
}


