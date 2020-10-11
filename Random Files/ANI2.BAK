// ANIMATION OF BALL ROLLING
//=======================================================================
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<iostream.h>
#include<math.h>
#include<dos.h>
//----------------------------------------------------------------------
void main()
 {
  int gd=DETECT,gm,i,j,k,x1=100,y1=100,x2=400,y2=400,r;
  int x,y,x0,y0,flag=0;
  char *buff;
  float x_dist,len,dx,dy;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
  cleardevice();

  cout<<"\n\nEnter radius of ball";
  cin>>r;
  x_dist=sqrt(2)*r;
  cleardevice();
  buff=(char *)malloc(imagesize(0,0,2*r,2*r));
  circle(r,r,r);
  getimage(0,0,2*r,2*r,buff);
  cleardevice();

    if(abs(x2-x1)>=abs(y2-y1))
    len=abs(x2-x1);
   else
    len=abs(y2-y1);

   dx=(x2-x1)/len;
   dy=(y2-y1)/len;
   x=x1+0.5*dx;
   y=y1+0.5*dy;

   i=0;
   line(x1,y1,x2,y2);
   while(i<=len)
    {
      if(kbhit())
       {
	 flag=1;
	 break;
       }
      x0=x+x_dist;
      y0=y;
      putimage(x0-r+1,y0-r,buff,XOR_PUT);
      delay(50);
      putimage(x0-r+1,y0-r,buff,XOR_PUT);
      i++;

      x+=dx;
      y+=dy;
    }
    if(flag==0)
    for(i=400;i<480;i++)
     {
      y0++;
      putimage(x0-r,y0-r,buff,XOR_PUT);
      delay(20);
      putimage(x0-r,y0-r,buff,XOR_PUT);
     }
  getch();
 }
//=========================================================================