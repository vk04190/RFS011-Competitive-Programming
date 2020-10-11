#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
#include <graphics.h>
#include <dos.h>
#include <math.h>


class HourH
{
  public:
    int x,y;
    int length;
    float angle;
    int color;
    void Update();
    void Draw();
};

void HourH::Update()
{
  int tempcolor=color;
  struct time* t=(struct time*)malloc(sizeof(struct time));
  gettime(t);
  float tempangle=M_PI/2- (float)(t->ti_hour%12)/12*2*M_PI;
  if(angle==tempangle) return;

  color=BLACK;
  Draw();
  angle=tempangle;
  color=tempcolor;
  Draw();
  free(t);
}

void HourH::Draw()
{
  int lx,ly,wx1,wy1,wx2,wy2,mx,my;
  int tempcolor=getcolor();
  setcolor(color);
  lx=x+length*cos(angle);
  ly=y-length*sin(angle);
  mx=(8*x+lx)/9;
  my=(8*y+ly)/9;
  wx1=mx+10*sin(angle);
  wx2=mx-10*sin(angle);
  wy1=my+10*cos(angle);
  wy2=my-10*cos(angle);
  line(x,y,wx1,wy1);
  line(wx1,wy1,lx,ly);
  line(lx,ly,wx2,wy2);
  line(wx2,wy2,x,y);
  setcolor(tempcolor);
}

class MinH
{
  public:
    int x,y;
    int length;
    float angle;
    int color;
    void Update();
    void Draw();
};

void MinH::Update()
{
  int tempcolor=color;
  struct time* t=(struct time*)malloc(sizeof(struct time));
  gettime(t);
  float tempangle=M_PI/2- (float)(t->ti_min%60)/60*2*M_PI;

  if(angle==tempangle) return;


  color=BLACK;
  Draw();
  angle=tempangle;
  color=tempcolor;
  Draw();
  free(t);
}

void MinH::Draw()
{
  int lx,ly,wx1,wy1,wx2,wy2,mx,my;
  int tempcolor=getcolor();
  setcolor(color);
  lx=x+length*cos(angle);
  ly=y-length*sin(angle);
  mx=(8*x+lx)/9;
  my=(8*y+ly)/9;
  wx1=mx+10*sin(angle);
  wx2=mx-10*sin(angle);
  wy1=my+10*cos(angle);
  wy2=my-10*cos(angle);
  line(x,y,wx1,wy1);
  line(wx1,wy1,lx,ly);
  line(lx,ly,wx2,wy2);
  line(wx2,wy2,x,y);
  setcolor(tempcolor);
}

class SecH
{
  public:
    int x,y;
    int length;
    float angle;
    int color;
    void Update();
    void Draw();
};

void SecH::Update()
{
  int tempcolor=color;
  struct time* t=(struct time*)malloc(sizeof(struct time));
  gettime(t);
  float tempangle=M_PI/2- (float)(t->ti_sec%60)/60*2*M_PI;

  if(angle==tempangle) return;


  color=BLACK;
  Draw();
  angle=tempangle;
  color=tempcolor;
  Draw();
  free(t);
}

void SecH::Draw()
{
  int lx,ly,wx1,wy1,wx2,wy2,mx,my;
  int tempcolor=getcolor();
  setcolor(color);
  lx=x+length*cos(angle);
  ly=y-length*sin(angle);
  mx=(8*x+lx)/9;
  my=(8*y+ly)/9;
  wx1=mx+0*sin(angle);
  wx2=mx-0*sin(angle);
  wy1=my+0*cos(angle);
  wy2=my-0*cos(angle);
  line(x,y,wx1,wy1);
  line(wx1,wy1,lx,ly);
  line(lx,ly,wx2,wy2);
  line(wx2,wy2,x,y);
  setcolor(tempcolor);
}

void DrawBack(int x,int y)
{
  float tempx,tempy,tx,ty;
  for(float t=0;t<2*M_PI;t+=M_PI/6)
  {
    tempx=x+200*cos(t);
    tempy=y-200*sin(t);
    tx=(x+8*tempx)/9;
    ty=(y+8*tempy)/9;
    line(tx,ty,tempx,tempy);
  }
}

  HourH h1;
  MinH h2;
  SecH h3;

void main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\tc\\bgi");


  h1.length=50;
  h1.color=CYAN;
  h1.x=320;
  h1.y=240;
  h2.length=150;
  h2.color=MAGENTA;
  h2.x=320;
  h2.y=240;
  h3.length=200;
  h3.color=WHITE;
  h3.x=320;
  h3.y=240;

  while(!kbhit())
  {
    DrawBack(320,240);
    h1.Update();
    h2.Update();
    h3.Update();
  }
  getch();
}