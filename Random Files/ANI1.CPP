/*컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴
														Nitin A. Rane.
												Animation : Rolling Ball
												T.E.II  Rno : 266 PICT
 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴*/
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<dos.h>
void draw_circle(int x, int y);
void draw_circle1(int x, int y);

int main(void)
{
	 int gd = DETECT, gm;
	 void *circle1,*circle2;
	 int x, y,maxx,flag,flag1=0;
	 unsigned int size;
	 initgraph(&gd, &gm, "c:\\tc\\bgi");
	 maxx = getmaxx();
	 x = 0;
	 y = getmaxy() / 2;
	 draw_circle(x, y);

	 //calculate size of image
	 size = imagesize(0,0,30,30);

	 /* allocate memory to hold the image */
	 circle1 = malloc(size);
	 circle2 = malloc(size);

	 /* grab the image */
	 getimage(x,y-10,x+20,y+20 , circle1);
	 cleardevice();
	 draw_circle1(x,y);
	 getimage(x, y-10,x+20,y+20 , circle2);
	 cleardevice();
	 outtextxy(250,100,"Animation");
	 x=-10;
	 y=10;
	 flag=0;
	 int MaxX,MaxY;
	 int cc;
	 MaxX=640;
	 MaxY=480;
	 cc=100;
	 for (int i=0 ; i<1000; ++i )
		putpixel(random(MaxX), random(MaxY), random( cc-1 )+1);

	 while (!kbhit())
	 {
			/* erase old image */
			putimage(x, y-10, circle2, XOR_PUT);
		//	sound(random(8000));
			if(flag1==0)
					 x+=15;

			if(flag1==1)
					 x-=15;

			if (x >= 620)
			{
					outtextxy(300,230,"Touch...!!");
					flag1=1;
					x=620;

				sound(1000);
				delay(50);
				nosound();
			}
			gotoxy(30,15);
//			printf("                            ");

			if( x <= 5 )
			{
					outtextxy(300,230,"Touch...!!");
					flag1=0;
					x=5;
				sound(1000);
				delay(50);
				nosound();
			}
			gotoxy(30,15);
//			printf("                            ");

			if(flag==0)
					 y+=15;

			if(flag==1)
					 y-=15;

			if (y >= 475)
			{
					outtextxy(300,230,"Touch...!!");
					flag=1;
					y=468;
					sound(1000);
					delay(50);
					nosound();
			}
			gotoxy(30,15);
//			printf("                            ");
			if (y <= 0)
			{
					outtextxy(300,230,"Touch...!!");
					flag=0;
					y = 10;
					sound(1000);
					delay(50);
					nosound();
			}
			gotoxy(30,15);
			printf("                            ");

			/* plot new image */
			putimage(x, y-10, circle1, XOR_PUT);
			delay(105);
			putimage(x, y-10, circle1, XOR_PUT);
			putimage(x, y-10, circle2, XOR_PUT);
			delay(105);
	 }
	 free(circle1);
	 free(circle2);
	 closegraph();
	 nosound();
	 return 0;
}

void draw_circle(int x, int y)
{
		 circle(x+10,y,10);
		 setfillstyle(SOLID_FILL,RED);
		 fillellipse(x+10,y,5,10);
}

void draw_circle1(int x, int y)
{
		 circle(x+10,y,10);
		 setfillstyle(SOLID_FILL,RED);
		 fillellipse(x+10,y,10,5);
}

