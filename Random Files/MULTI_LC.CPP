#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>

int gd=DETECT,gm;
union REGS i,o;

int sign(int x)
{
  if(x>0)
    return(1);
  else if(x<0)
   return(-1);
  else if(x==0)
  return(0);
}

void initmouse()
{
  i.x.ax=0;
  int86(0x33,&i,&o);
}

void showmouse()
{
  i.x.ax=1;
  int86(0x33,&i,&o);
}

void hidemouse()
{
  i.x.ax=2;
  int86(0x33,&i,&o);
}


int getmouseclicked(int *x1,int *y1)
{
  i.x.ax=3;
  int86(0x33,&i,&o);
  if(o.x.bx==1)
   {
	*x1=o.x.cx;
	*y1=o.x.dx;
	return(1);
   }
  else
   {
	*x1=0;
	*y1=0;
	return(0);
   }

}

void drawbutton(int x1,int y1,int x2,int y2,char *msg)
{
  rectangle(x1,y1,x2,y2);
  setfillstyle(1,56);
  bar(x1,y1,x2,y2);
  line(x1,y1,x2,y1);
  line(x1,y1,x1,y2);
  settextjustify(CENTER_TEXT,CENTER_TEXT);
  outtextxy((x1+x2)/2,(y1+y2)/2,msg);
}

void button_clicked(int x1,int y1,int x2,int y2,char *msg)
{
  rectangle(x1,y1,x2,y2);
  setfillstyle(1,56);
  bar(x1,y1,x2,y2);
  line(x2,y1,x2,y2);
  line(x1,y2,x2,y2);
  settextjustify(CENTER_TEXT,CENTER_TEXT);
  outtextxy((x1+x2)/2,(y1+y2)/2,msg);
  delay(100);
  rectangle(x1,y1,x2,y2);
  setfillstyle(1,56);
  bar(x1,y1,x2,y2);
  line(x1,y1,x2,y1);
  line(x1,y1,x1,y2);
  settextjustify(CENTER_TEXT,CENTER_TEXT);
  outtextxy((x1+x2)/2,(y1+y2)/2,msg);
}


void init()
{
  initgraph(&gd,&gm,"c:\\tc\\bgi");
}

class line
{
   int x1,y1,x2,y2;
   public :
     void get();
     void bresen();
     void dda();
};

void line :: get()
{
init();
initmouse();
showmouse();
while(!getmouseclicked(&x1,&y1));
outtextxy(20,20,"Press any key and Enter next point...");
hidemouse();
circle(x1,y1,2);
showmouse();
getch();
while(!getmouseclicked(&x2,&y2));
hidemouse();
circle(x2,y2,2);
showmouse();
}

void line :: bresen()
{
   float dx,dy,e,x,y,i1;
   int s1,s2,inter;
   dx=abs(x2-x1);
   dy=abs(y2-y1);

   x=x1;
   y=y1;

   i1=1;
   s1=sign(x2-x1);
   s2=sign(y2-y1);
   if(dy>dx)
    {
     dx=dx+dy;
     dy=dx-dy;
     dx=dx-dy;
     inter=1;
    }
   else
    inter=0;
   e=2*dy-dx;	/* INITIALIZE STARTING POINTS  */
   for(i1=1;i1<=dx;i1++)
    {
      putpixel(x,y,15);
      while(e>0)
       {
	 if(inter==1)
	    x=x+s1;
	 else
	   y=y+s2;
	 e=e-2*dx;
       }
       if(inter==1)
	   y=y+s2;
       else
	   x=x+s1;
       e=e+2*dy;
       delay(15);
       }
    }


void line :: dda()
{
   int dx,dy,e,x,y,i1,length;
   dx=abs(x2-x1);
   dy=abs(y2-y1);
   if(dx>=dy)
     length=dx;
   else
     length=dy;
   dx=(x2-x1)/length;
   dy=(y2-y1)/length;
   x=x1+0.5;
   y=y1+0.5;
   i1=1;
   while(i1<=length)
    {
      putpixel(x,y,15);
      x=x+dx;
      y=y+dy;
      i1++;
      delay(10);
    }
}

class circle
{
   int x1,y1,radius;
   public :
     void get();
     void bresen();
     void dda();
};

void circle :: get()
{
  init();
  initmouse();
  showmouse();
  while(!getmouseclicked(&x1,&y1));
  hidemouse();
  circle(x1,y1,2);
  showmouse();
  cout<<"\nEnter radius circle : ";
  cin>>radius;
}

void circle :: dda()
{
  float x,y,startx,starty,e,xx,yy;
  int i1,val;
  x=radius*cos(0);
  y=radius*sin(0);
  startx=x;
  starty=y;
  i1=0;
  do{
     val=pow(2,i1);
     i1++;
  }while(val<radius);
  e=1/pow(2,i1-1);
  do{
     xx=x+y*e;
     yy=y-e*xx;
     putpixel(x1+xx,y1+yy,15);
     putpixel(x1-xx,y1-yy,15);
     x=xx;
     y=yy;
     delay(10);
  }while((y-starty)< e || (x-startx) > e);
}

void circle :: bresen()
{
   int x,y,d;
   x=0;
   y=radius;
   d=3-2*radius;
   do{
    putpixel(x1+x,y1+y,10);
    putpixel(x1+y,y1+x,10);
    putpixel(x1+y,y1-x,5);
    putpixel(x1+x,y1-y,5);
    putpixel(x1-x,y1-y,7);
    putpixel(x1-y,y1-x,7);
    putpixel(x1-y,y1+x,9);
    putpixel(x1-x,y1+y,9);
    if(d<=0)
      d=d+4*x+6;
    else
     {
       d=d+4*(x-y)+10;
       y=y-1;
     }
    x=x+1;
    delay(10);
   }while(x<y);
}

void main()
{
  clrscr();
  int yco[5][2]={
	      100,130,
	      150,180,
	      200,230,
	      250,280,
	      300,330,
	   };
  char *msg[]={ "DDA Line",
		"Brsenham Line",
		"DDA Circle",
		"Bresenham Circle",
		"Exit"
	       };
  char *s="Press any key to continue";
  int xco1=225,xco2=375,x,y;
  class circle c;
  class line l;
  init();
  for(int i1=0;i1<5;i1++)
    drawbutton(xco1,yco[i1][0],xco2,yco[i1][1],msg[i1]);
  while(1)
    {
       int ch;
       showmouse();
       ch=0;
       ch=getmouseclicked(&x,&y);
       if(ch==1)
	   {
	       hidemouse();
	       for(i1=0;i1<5;i1++)
		{
		 if(x>=xco1 && x<=xco2 && y>=yco[i1][0] && y<=yco[i1][1])
		  {
		   button_clicked(xco1,yco[i1][0],xco2,yco[i1][1],msg[i1]);
		   switch(i1)
		     {
		       case 0 : l.get();
				hidemouse();
				l.dda();
				showmouse();
				outtextxy(20,80,"DDA LINE DRAWING");
				outtextxy(20,110,s);
				getch();
				break;
		       case 1 : l.get();
				hidemouse();
				l.bresen();
				showmouse();
				outtextxy(20,80,"BRESENHAM LINE DRAWING");
				outtextxy(20,110,s);
				getch();
				break;
		       case 2 : c.get();
				hidemouse();
				c.dda();
				showmouse();
				outtextxy(20,80,"DDA CIRCLE DRAWING");
				outtextxy(20,110,s);
				getch();
				break;
		       case 3 : c.get();
				hidemouse();
				c.bresen();
				showmouse();
				outtextxy(20,80,"BRESENHAM CIRCLE DRAWING");
				outtextxy(20,110,s);
				getch();
				break;
		       case 4 : outtextxy(200,370,"EXIT TO WINDOWS");
				outtextxy(200,400,s);
				getch();
				exit(0);

		     }
		   hidemouse();
		   cleardevice();
		   for(int i1=0;i1<5;i1++)
		    drawbutton(xco1,yco[i1][0],xco2,yco[i1][1],msg[i1]);
		   showmouse();
		  }
	      }
	   }
    }
}