/* FLAG */

	# include<stdio.h>
	# include<dos.h>
	# include<stdlib.h>
	# include <conio.h>
	# include <graphics.h>
	# include <math.h>

	 void flag1(void)           //SEGMENT1 TO DISPLAY ONE FLAG POSITION
	 {
	   arc(215,90,225,315,20);
	   arc(242,120,45,135,20);
	   arc(269,90,225,315,20);
	   arc(296,120,45,135,20);

	   arc(215,143,225,315,20);
	   arc(242,173,45,135,20);
	   arc(269,143,225,315,20);
	   arc(296,172,45,136,20);

	   arc(291,142,320,16,24);
	   arc(333,118,150,225,26);
	 }
	 void flag2(void)          //SEGMENT2 TO DISPLAY SECOND FLAG POSITION
	 {
	   arc(242,90,225,315,20);
	   arc(215,120,45,135,20);
	   arc(296,90,225,315,20);
	   arc(269,120,45,135,20);

	   arc(242,143,225,315,20);
	   arc(215,173,45,135,20);
	   arc(296,143,225,315,20);
	   arc(269,172,45,136,20);

	   arc(288,116,320,24,24);
	   arc(331,140,150,226,26);
	 }

	void main()
	{
	 int i,gd = DETECT,gm;
	 initgraph(&gd,&gm,"c:\\tc\\bgi");
	 setlinestyle(SOLID_LINE,1,3);
	 line(0,400,getmaxx(),400);
	 line(200,400,200,100);
	  bar(150,380,250,400);
	 bar(170,360,230,380);
	 setlinestyle(SOLID_LINE,1,1);
	 circle(200,95,5);
	 i=0;
	 line(200,100,150-i,300+i);
	 circle(150-i,300+i,5);
	 floodfill(151-i,301+i,15);	//Filling circle

	 for(i=350;i>105;i--)
	 {
	   setfillstyle(1,15);
	   bar(202,i-10,212,i);
	   delay(20);
	   setfillstyle(1,0);
	   bar(202,i-10,212,i);
	 }
	 setfillstyle(1,15);
	 while(!kbhit())
	 {
	   cleardevice();
//           getch();
	   setlinestyle(SOLID_LINE,1,3);
	   line(0,400,getmaxx(),400);
//           getch();
	   line(200,400,200,100);
	   bar(150,380,250,400);
	   bar(170,360,230,380);
	   setlinestyle(SOLID_LINE,1,1);
	   circle(200,95,5);
	   line(200,100,150,300);
	   circle(150,300,5);
	   floodfill(151,301,15);
	   for(i=0;i<(2000+rand()%1000);i++)
	   {
	     flag2();
	   }                          //DISPLAY SEGMENT2
	   delay(5);
	   cleardevice();
	   setlinestyle(SOLID_LINE,1,3);
	   line(0,400,getmaxx(),400);
	   line(200,400,200,100);
	   bar(150,380,250,400);
	   bar(170,360,230,380);
	   setlinestyle(SOLID_LINE,1,1);
	   circle(200,95,5);
	   line(200,100,150,300);
	   circle(150,300,5);
	   floodfill(151,301,15);
	   for(i=0;i<(1000+rand()%1000);i++)
	   {
	     flag1();                   //DISPLAY SEGMENT2
	   }
	 }
	 getch();
	 closegraph();
	}
//=======================================================================