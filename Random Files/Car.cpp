#include<stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <stdlib.h>
#include <dos.h>


void main()
{
 int i,gd = DETECT,gm;
 initgraph(&gd,&gm,"c:\\tc\\bgi");
 for(i=0;i<=getmaxx();i++)
 {
  setcolor(15);
  setlinestyle(SOLID_LINE,1,3);
  line(0,400,getmaxx(),400);
  setlinestyle(SOLID_LINE,1,1);
  circle(i+60,380,20);
  circle(i+160,380,20);
  circle(i+60,380,5);
  circle(i+160,380,5);
  //-------------------------------
  line(i+60,380,60+i-20*sin(i*3.14/180),380+20*cos(i*3.14/180));
  line(i+160,380,160+i-20*sin(i*3.14/180),380+20*cos(i*3.14/180));
  //---------------------------------
  line(i+80,380,i+140,380);	//Segments of car
  line(i+40,380,i+10,380);
  line(i+180,380,i+210,380);
  arc(i+60,380,90,180,50);
  arc(i+160,380,0,90,50);
  arc(i+110,330,90,180,50);
  arc(i+110,330,0,90,50);
  arc(i+110,330,100,180,40);
  arc(i+110,330,0,80,40);
  line(i+70,330,i+104,330);
  line(i+104,330,i+104,291);
  line(i+150,330,i+116,330);
  line(i+116,330,i+116,291);
  setcolor(0);
  delay(5);
   //-------------------------------

  line(i+60,380,60+i-20*sin(i*3.14/180),380+20*cos(i*3.14/180));
  line(i+160,380,160+i-20*sin(i*3.14/180),380+20*cos(i*3.14/180));
  //---------------------------------
  setlinestyle(SOLID_LINE,1,1);
  circle(i+60,380,20);
  circle(i+160,380,20);
  circle(i+60,380,5);
  circle(i+160,380,5);
  line(i+80,380,i+140,380);
  line(i+40,380,i+10,380);
  line(i+180,380,i+210,380);
  arc(i+60,380,90,180,50);
  arc(i+160,380,0,90,50);
  arc(i+110,330,90,180,50);
  arc(i+110,330,0,90,50);
  arc(i+110,330,100,180,40);
  arc(i+110,330,0,80,40);
  line(i+70,330,i+104,330);
  line(i+104,330,i+104,291);
  line(i+150,330,i+116,330);
  line(i+116,330,i+116,291);

  if(kbhit())
   exit(0);
 if(i==(getmaxx()-1))
  i=0;
 }
 closegraph();
}