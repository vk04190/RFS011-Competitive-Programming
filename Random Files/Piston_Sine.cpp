#include<dos.h>
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void draw_rect();
void hide_rect();

float x,y;

void main()
{
  int gd=DETECT,gm;
  float i,j,a;
  int flag=0;
  clrscr();
  initgraph(&gd,&gm,"e:\\tc\\bgi");
  a=100;
  x=50;
  y=240;
  line(100,0,100,479);
  line(100,240,639,240);
  for(i=0;i<540;i=i+1)
  {
      j=a*cos(i*3.14/180*10);
      a=a*0.999;
      putpixel(100+i,240-j,WHITE);
      draw_rect();
      delay(10);
      hide_rect();
      y=240-j;
      draw_rect();
  }
  getch();
}

void draw_rect()
{
  putpixel(x,y,WHITE);
  setcolor(WHITE);
  rectangle(x-20,y-10,x+20,y+10);
}

void hide_rect()
{
  putpixel(x,y,BLACK);
  setcolor(BLACK);
  rectangle(x-20,y-10,x+20,y+10);
}
