#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <dos.h>
#include <stdlib.h>

void main()
{
 int gd = DETECT,gm;
 int i;
 initgraph(&gd,&gm,"c:\\tc\\bgi");
 for(i=0;i<=getmaxx();i++)
 {
  setcolor(15);
    if(i > 520)
   circle(i,459,20);
  else if(i > 430)
   circle(i,20*sin(i*3.14/50)+i,20);
  else
   circle(i,10+20*sin(i*3.14/50)+i,20);

  line(0,82,60,82);
  line(60,82,60,182);
  line(60,182,150,182);
  line(150,182,150,282);
  line(150,282,240,282);
  line(240,282,240,382);
  line(240,382,330,382);
  line(330,382,330,480);
  line(330,479,getmaxx(),479);
  delay(10);
  setcolor(0);
  if(i > 520)
   circle(i,459,20);
  else if(i > 430)
   circle(i,20*sin(i*3.14/50)+i,20);
  else
   circle(i,10+20*sin(i*3.14/50)+i,20);

  if(kbhit())
   exit(0);
  if(i==getmaxx())
   i=0;
 }
 getch();
 closegraph();
}