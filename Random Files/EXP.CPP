#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<alloc.h>
void main()
{
    int     driver = DETECT,mode,maxx,maxy;

    char *g;

    initgraph(&driver,&mode,"c:\\tc\\bgi");
      cleardevice();
      setbkcolor(14);
	setcolor(1);
    //setfillstyle(1,15);
    //bar(0,0,640,480);
    rectangle(0,0,30,30);
    rectangle(1,1,29,29);
    rectangle(2,2,28,28);
    setfillstyle(1,15);
    bar(3,3,27,27);
    setcolor(1);
   setfillstyle(1,1);
   pieslice(15,15,0,180,11);
     setcolor(15);
   setfillstyle(1,15);
   pieslice(15,13,0,180,5);
    setcolor(1);
   setfillstyle(1,1);
   pieslice(15,15,180,340,11);
      setcolor(15);
   setfillstyle(1,15);
   pieslice(15,17,180,340,5);
   setfillstyle(1,15);
    bar(11,16,27,20);
    setfillstyle(1,1);
    bar(10,16,26,17);
    g=(char*)malloc(sizeof(imagesize(0,0,640,480)));
    getimage(0,0,640,480,g);
    putimage(640,480,g,COPY_PUT);
    getch();
    putimage(0,0,g,XOR_PUT);
    getch();

}
