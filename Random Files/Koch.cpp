#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
#include <dos.h>
#include <graphics.h>
#include <math.h>

float cpx,cpy;
int count;

void Koch(float length,int dirn,int currlevel,int maxlevel)
{
  if(currlevel<maxlevel)
  {
    Koch(length/3,dirn,currlevel+1,maxlevel);
    Koch(length/3,dirn+60,currlevel+1,maxlevel);
    Koch(length/3,dirn-60,currlevel+1,maxlevel);
    Koch(length/3,dirn,currlevel+1,maxlevel);
  }
  else
  {
    float dirnrad=dirn*M_PI/180;
    float lengthx=length*(cos(dirnrad));
    float lengthy=length*(sin(dirnrad));
    moveto(cpx,cpy);
    linerel(lengthx,-lengthy);
    cpx=cpx+lengthx;
    cpy=cpy-lengthy;
    count++;
//    getch();
    delay(10);
  }
}

int main()
{
  int temp;
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
  cpx=20;
  cpy=400;
  count=0;
  setcolor(GREEN);
  for(int i=2;i<=6;i++)
{
  Koch(600,0,1,i);
  cpx=20;
  cpy=400;
  temp=count;
  count=0;
  delay(100);
  cleardevice();
}
  cout << "Total number of segments drawn: " << temp;
  getch();
}











