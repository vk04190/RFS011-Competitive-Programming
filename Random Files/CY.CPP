/*CYCLE*/

#include<graphics.h>
#include<process.h>
#include<dos.h>
#include<malloc.h>
#include<stdio.h>
#include<conio.h>
void main()
 {
  int gd=DETECT,gm,i,j,k;
  initgraph(&gd,&gm,"c:\\tc\\bgi ");
  char *buff1,*buff2,*buff3,*buff4;
 // image for buff 1

  setcolor(YELLOW);
  circle(30,60,20);
  circle(30,60,18);
  circle(30,60,2);

//  line(12,60,48,60);
//  line(30,42,30,78);
  line(16,46,44,74);
  line(44,46,16,74);

  circle(90,60,20);
  circle(90,60,18);
  circle(90,60,2);

  line(72,60,108,60);
  line(90,42,90,78);
//  line(76,46,104,74);
//  line(104,46,76,74);
  setcolor(RED);
  rectangle(38,22,52,28);
  setcolor(GREEN);

  line(45,28,30,60);
  line(46,28,31,60);

  line(80,24,90,60);
  line(81,24,91,60);

  setcolor(BLUE);
  line(70,34,90,14);
  line(71,34,91,14);
   setcolor(GREEN);

  line(42,35,84,35);
  line(42,36,84,36);
  setcolor(5);
  line(50,70,70,50);       //pidel
  line(51,70,71,50);
  setcolor(GREEN);
  line(42,36,60,60);
  line(43,36,61,60);
  line(84,36,60,60);
  line(85,36,61,60);
  setcolor(12);
  circle(60,60,7);
  line(60,53,30,58);
  line(60,67,30,62);


  buff1=(char *)malloc(imagesize(0,0,120,90));
  getimage(0,0,120,90,buff1);
  getch();
  cleardevice();

 // image for buff 2

  setcolor(YELLOW);
  circle(30,60,20);
  circle(30,60,18);
  circle(30,60,2);

  line(12,60,48,60);
  line(30,42,30,78);
//  line(16,46,44,74);
//  line(44,46,16,74);

  circle(90,60,20);
  circle(90,60,18);
  circle(90,60,2);

//  line(72,60,108,60);
//  line(90,42,90,78);
  line(76,46,104,74);
  line(104,46,76,74);
  setcolor(RED);
  rectangle(38,22,52,28);
  setcolor(GREEN);

  line(45,28,30,60);
  line(46,28,31,60);

  line(80,24,90,60);
  line(81,24,91,60);

  setcolor(BLUE);
  line(70,34,90,14);
  line(71,34,91,14);
   setcolor(GREEN);

  line(42,35,84,35);
  line(42,36,84,36);
  setcolor(5);
  line(50,50,70,70);       //pidel
  line(51,50,71,70);
  setcolor(GREEN);
  line(42,36,60,60);
  line(43,36,61,60);
  line(84,36,60,60);
  line(85,36,61,60);
  setcolor(12);
  circle(60,60,7);
  line(60,53,30,58);
  line(60,67,30,62);

  buff2=(char *)malloc(imagesize(0,0,120,90));
  getimage(0,0,120,90,buff2);
  cleardevice();

 //image for buff 3


  setcolor(YELLOW);
  circle(30,60,20);
  circle(30,60,18);
  circle(30,60,2);

//  line(12,60,48,60);
//  line(30,42,30,78);
  line(16,46,44,74);
  line(44,46,16,74);

  circle(90,60,20);
  circle(90,60,18);
  circle(90,60,2);

  line(72,60,108,60);
  line(90,42,90,78);
//  line(76,46,104,74);
//  line(104,46,76,74);
  setcolor(RED);
  rectangle(38,22,52,28);
  setcolor(GREEN);

  line(45,28,30,60);
  line(46,28,31,60);

  line(80,24,90,60);
  line(81,24,91,60);

  setcolor(BLUE);
  line(70,34,90,14);
  line(71,34,91,14);
   setcolor(GREEN);

  line(42,35,84,35);
  line(42,36,84,36);
  setcolor(5);
  line(50,60,70,60);       //pidel
  line(50,61,70,61);
  setcolor(GREEN);
  line(42,36,60,60);
  line(43,36,61,60);
  line(84,36,60,60);
  line(85,36,61,60);
  setcolor(12);
  circle(60,60,7);
  line(60,53,30,58);
  line(60,67,30,62);

  buff3=(char *)malloc(imagesize(0,0,120,90));
  getimage(0,0,120,90,buff3);
  cleardevice();

 // image for buff 4


  setcolor(YELLOW);
  circle(30,60,20);
  circle(30,60,18);
  circle(30,60,2);

  line(12,60,48,60);
  line(30,42,30,78);
//  line(16,46,44,74);
//  line(44,46,16,74);

  circle(90,60,20);
  circle(90,60,18);
  circle(90,60,2);

//  line(72,60,108,60);
//  line(90,42,90,78);
  line(76,46,104,74);
  line(104,46,76,74);
  setcolor(RED);
  rectangle(38,22,52,28);
  setcolor(GREEN);

  line(45,28,30,60);
  line(46,28,31,60);

  line(80,24,90,60);
  line(81,24,91,60);

  setcolor(WHITE);
  line(70,34,90,14);
  line(71,34,91,14);
   setcolor(GREEN);

  line(42,35,84,35);
  line(42,36,84,36);
  setcolor(5);
  line(60,50,60,70);       //pidel
  line(61,50,61,70);
  setcolor(GREEN);
  line(42,36,60,60);
  line(43,36,61,60);
  line(84,36,60,60);
  line(85,36,61,60);
  setcolor(12);
  circle(60,60,7);
  line(60,53,30,58);
  line(60,67,30,62);

  buff4=(char *)malloc(imagesize(0,0,120,90));
  getimage(0,0,120,90,buff4);
  cleardevice();

/*  for(i=0;i<640;i=i+2)
   {
    for(j=0;j<3;j++)
     {
      k=rand()%80;
      putpixel(i,k,(i-j));
     }
   }
  setcolor(RED);
  for(i=90;i<480;i=i+25)
   {
    line(0,i,640,i);
     k=rand()%30;
     for(j=k;j<640;j=j+50)
      {
       line(j,i,j,i+25);
      }
   } */
  line(0,81,640,81);

  while(!kbhit())
  for(i=1;i<640;i++)
   {
      if(kbhit())
       break;
      j=(i%4);
      switch(j)
       {
	case 0:
	       putimage(i,0,buff1,XOR_PUT);
	       delay(20);
	       putimage(i,0,buff1,XOR_PUT);
	       break;
	case 1:
	       putimage(i,0,buff3,XOR_PUT);
	       delay(5);
	       putimage(i,0,buff3,XOR_PUT);
	       break;
	case 2:
	       putimage(i,0,buff2,XOR_PUT);
	       delay(5);
	       putimage(i,0,buff2,XOR_PUT);
	       break;
	case 3:
	       putimage(i,0,buff4,XOR_PUT);
	       delay(5);
	       putimage(i,0,buff4,XOR_PUT);
	       break;
       }
      }
  getch();
 }