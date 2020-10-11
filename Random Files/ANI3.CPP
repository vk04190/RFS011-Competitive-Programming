#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
float edges[4][4]={{50,0,50,100},{0,50,100,50},{14.465,14.465,85.35,83.35},{85.355,14.465,14.465,85.35}};

class cycle
{
	public:

	char *wheel[9];
	char *body;
	void drawwheel();
	void rot();
	void drawbody();
	void paddle();
	};
void cycle::drawwheel()
{
   /*	line(250,240,310,240);
	line(310,240,310,210);
	line(310,210,290,210);
	line(310,240,360,320);
	line(200,320,250,240);
	line(250,240,280,320);
	line(310,240,280,320);
	unsigned size1;
	size1=imagesize(200,200,370,330);
	body=new char [size1];
	getimage(200,200,360,320,body);
	getch();
	cleardevice();  */

unsigned size;
size=imagesize(0,0,100,100);
for(int j=0;j<6;j++)
{
for(int i=0;i<4;i++)
	{
		line(edges[i][0],edges[i][1],edges[i][2],edges[i][3]);
	}
circle(50,50,50);
wheel[j]=new char [size];
getimage(0,0,100,100,wheel[j]);
cleardevice();
rot();
}
cleardevice();

}
void cycle::rot()
{
	float xdiff=-50;
	float ydiff=-50;

	for(int i=0;i<4;i++)
	{
	 edges[i][0]=edges[i][0]+xdiff;
	edges[i][2]=edges[i][2]+xdiff;
		 edges[i][1]=edges[i][1]+ydiff;
			 edges[i][3]=edges[i][3]+ydiff;
       float x1,y1,x2,y2;
	x1=(float)edges[i][0];
	y1=(float)edges[i][1];

float temp1;
	temp1=(x1*cos(0.1309))-(y1*sin(0.1309));
	y1=(x1*sin(0.1309))+(y1*cos(0.1309));
	x1=temp1;
edges[i][0]=x1-xdiff;
edges[i][1]=y1-ydiff;
x1=(float)edges[i][2];
y1=(float)edges[i][3];
temp1=(x1*cos(0.1309))-(y1*sin(0.1309));
	y1=(x1*sin(0.1309))+(y1*cos(0.1309));
	x1=temp1;
edges[i][2]=x1-xdiff;
edges[i][3]=y1-ydiff;

}
}
void cycle::paddle()
{
int j=0,fl=1;
for(int i=0;i<540;i++)
{
    if(j==6)
    j=0;


/*if(j!=0)
{
putimage(10+i-1,200,wheel[j-1],XOR_PUT);
putimage(50+i-1,130,body,XOR_PUT);
putimage(160+i-1,200,wheel[j-1],XOR_PUT);
fl=0;
}
else  if(fl!=1)
      {
      putimage(160+i-1,200,wheel[8],XOR_PUT);

      putimage(50+i-1,130,body,XOR_PUT);
      putimage(10+i-1,200,wheel[8],XOR_PUT);
      }*/
putimage(10+i,200,wheel[j],OR_PUT);
putimage(55+i,130,body,OR_PUT);
putimage(160+i,200,wheel[j],OR_PUT);
delay(20);
putimage(10+i,200,wheel[j],XOR_PUT);
putimage(55+i,130,body,XOR_PUT);
putimage(160+i,200,wheel[j],XOR_PUT);


j++;
//delay(20);
// cleardevice();

}
getch();
}
void cycle::drawbody()
{
	line(50,40,110,40);
	line(110,40,110,10);
	line(110,10,90,10);
	line(110,40,160,120);
	line(0,120,50,40);
	line(50,40,80,120);
	line(110,40,80,120);
	unsigned size1;
size1=imagesize(0,0,160,120);
body=new char [size1];
getimage(0,0,160,120,body);
  getch();
 cleardevice();
}
void main()
{
	cycle c1;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
    c1.drawwheel();
	c1.drawbody();

     c1.paddle();
    getch();
     }
