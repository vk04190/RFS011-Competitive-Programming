#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
#include <dos.h>
#include <graphics.h>
#include <math.h>

void Branch(int x,int y,float length,int dirn,int currlevel,int maxlevel)
{
if(currlevel<maxlevel)
  {
    float dirnrad=dirn*M_PI/180;
    float lengthx=length*(cos(dirnrad));
    float lengthy=length*(sin(dirnrad));
    int nx,ny;

    nx=x+lengthx/4;
    ny=y-lengthy/4;

    setcolor(BROWN);
    line(x,y,nx,ny);
//    getch();
    Branch(nx,ny,3*length/4,dirn+45,currlevel+1,maxlevel);
    Branch(nx,ny,3*length/4,dirn-45,currlevel+1,maxlevel);


  }
  else
  {
    /*float dirnrad=(dirn+20)*M_PI/180;
    float lengthx=length*(cos(dirnrad));
    float lengthy=length*(sin(dirnrad));
    setcolor(GREEN);
    line(x,y,x+lengthx,y-lengthy);
    dirnrad=(dirn-20)*M_PI/180;
    lengthx=length*(cos(dirnrad));
    lengthy=length*(sin(dirnrad));
    line(x,y,x+lengthx,y-lengthy); */
    setcolor(GREEN);
    circle(x,y,random(40));
    delay(10);
  }
}

int main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
//  randomize();
  Branch(320,450,400,90,1,12);
  getch();
}
