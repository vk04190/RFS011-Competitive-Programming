#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <graphics.h>
#include <math.h>
#include <stdlib.h>
#include <dos.h>
#include <alloc.h>

float huge pts[10000][2];
float huge newarr[10000][2];
int count;
int sign;
int dirn;

void frac()
{
  int ncount=0;
  int x1,y1,x2,y2;
  float divpx1,divpx2,divpy1,divpy2,side,midpx,midpy,theta,newx,newy;
  for(int i=0;i<count-1;i++)
  {
  x1=pts[i][0];
  y1=pts[i][1];
  x2=pts[i+1][0];
  y2=pts[i+1][1];

  if(x2<x1) sign=-1;  //See comment Trial n error
  else sign=1;

  divpx1=(float)(2*x1+x2)/3;
  divpy1=(float)(2*y1+y2)/3;
  divpx2=(float)(x1+2*x2)/3;
  divpy2=(float)(y1+2*y2)/3;


  side=sqrt((divpy2-divpy1)*(divpy2-divpy1)+(divpx2-divpx1)*(divpx2-divpx1));
  midpx=(float)(divpx1+divpx2)/2;
  midpy=(float)(divpy1+divpy2)/2;
  if(divpx2==divpx1)
  {
    if ((divpy2-divpy1) > 0) theta=M_PI/2;
    else theta=-M_PI/2;
  }
  else
  theta=atan((float)(divpy2-divpy1)/(divpx2-divpx1));
  newx=midpx + sign*sqrt(3)*side/2*sin(theta);   //Trial n error
  newy=midpy - sign*sqrt(3)*side/2*cos(theta);

  setcolor((ncount%16==0) ? 15 : ncount%16 );

  line(x1,y1,divpx1,divpy1);
  line(divpx1,divpy1,newx,newy);
  line(newx,newy,divpx2,divpy2);
  line(divpx2,divpy2,x2,y2);
  delay(1000/count);
  newarr[i*5][0]=x1;	//Store the new 5 pts in the new array
  newarr[i*5][1]=y1;
  newarr[i*5+1][0]=divpx1;
  newarr[i*5+1][1]=divpy1;
  newarr[i*5+2][0]=newx;
  newarr[i*5+2][1]=newy;
  newarr[i*5+3][0]=divpx2;
  newarr[i*5+3][1]=divpy2;
  newarr[i*5+4][0]=x2;
  newarr[i*5+4][1]=y2;
  ncount+=5;
  }

  for(i=0;i<ncount;i++)
  {
    pts[i][0]=newarr[i][0];
    pts[i][1]=newarr[i][1];
  }
  count=ncount;
}


int main()
{
  int i,j,gd=DETECT,gm;
  initgraph(&gd,&gm,"");
  setcolor(CYAN);
  count=2;
  pts[0][0]=0;
  pts[0][1]=200;
  pts[1][0]=600;
  pts[1][1]=200;
  for(i=0;i<4;i++)
  {
    cleardevice();
//    sign=1;
    frac();
  }
//  setfillstyle(CLOSE_DOT_FILL,GREEN);
//  floodfill(200,450,CYAN);
  getch();
  getch();

}