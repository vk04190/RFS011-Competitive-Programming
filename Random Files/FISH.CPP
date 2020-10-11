
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<process.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>

void *fish1,*fish11,*cir;
long int area;
int mx,my,x12=500,xfact,yfact;
void fish1_2();

void main()
{
int gd=DETECT,gm;
int x,y;
initgraph(&gd,&gm,"c:\\tc\\bgi");
mx=getmaxx();
my=getmaxy();
/*setfillstyle(0,5);
setcolor(9);
bar3d(0,10,mx-10,my-10,10,1);   */

setcolor(WHITE);

circle(100,115,3);
circle(115,105,2);
circle(110,90,2);
circle(103,106,2);
circle(102,95,3);
circle(100,90,1);
circle(105,85,1);
circle(100,125,1);
circle(107,96,1);
area = imagesize(95,80,120,130);
cir = malloc(area);
getimage(95,80,120,130,cir);
putimage(95,80,cir,1);

arc(100,105,40,140,90);
arc(100,0,220,320,90);
line(30,48,40,53);
line(40,53,30,58);
circle(55,53,5);

line(170,48,200,20);
line(169,58,200,85);

arc(200,37,270,90,16);
arc(200,68,270,90,16);

setfillstyle(SOLID_FILL,YELLOW);
floodfill(55,53,15);
setfillstyle(8,RED);
floodfill(160,48,15);

area = imagesize(28,13,217,92);
fish1 = malloc(area);

getimage(28,13,217,92,fish1);
//getch();

setfillstyle(SOLID_FILL,BLACK);
floodfill(55,53,15);
setfillstyle(1,DARKGRAY);
floodfill(160,48,15);
fish11 = malloc(area);
getimage(28,13,217,92,fish11);

//putimage(28,13,fish1,1);
putimage(28,13,fish11,1);
//getch();
while(!kbhit())
{
  x=500;
  y=my-5;
  x12=500;
  xfact=random(mx-20);
  yfact=random(my-10);
  while(y>=10)
  {
    if(kbhit()) break;

    putimage(xfact,y,cir,0);
    putimage(xfact+300,y,cir,0);

    putimage(x,yfact,fish1,0);

    if(x<350)
    {
      for(int i=20;i<=300;i+=30)
       {
	 sound(i);
	 delay(20);
	 nosound();
       }
       nosound();


      fish1_2();
    }
    putimage(xfact,y,cir,0);
    putimage(xfact+300,y,cir,0);
    delay(25);
    putimage(x,yfact,fish1,1);
    putimage(xfact,y,cir,1);
    putimage(xfact+300,y,cir,1);
    x=x-3;
    y=y-2;
  }
}

}

    void fish1_2()
    {
      putimage(x12,yfact+200,fish11,0);
      delay(15);
      putimage(x12,yfact+200,fish11,1);
      x12-=3;
    }



