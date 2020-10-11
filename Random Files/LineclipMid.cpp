#include<iostream.h>
#include<graphics.h>
# define max1=2
#include<conio.h>
#include<math.h>

class clip
{
public:
float x[2][2],xl,xr,yt,yb;
void getpt();
void getrect();
};
void clip::getpt()
{
cout<<"ENter first point x y:";
cin>>x[0][0]>>x[0][1];
cout<<"enter  second point x y:";
cin>>x[1][0]>>x[1][1];

};
void clip::getrect()
{
int t1,t2,t3,t4;
cout<<"enter endpoint1:x y :";
cin>>t1>>t2;
cout<<"enter endpoint2:x y :";
cin>>t3>>t4;
	if(t1<t3)
	{
		xl=t1;
		xr=t3;
	}
	else
	{
		xr=t1;
		xl=t3;
	}

	if(t2<t4)
	{
		yt=t2;
		yb=t4;
	}
	else
	{
		yb=t2;
		yt=t4;
	}
cleardevice();
rectangle(xl,yt,xr,yb);
line(x[0][0],x[0][1],x[1][0],x[1][1]);
}

class suth_coh:public clip
{
public:
void main_clip();
int check_bits(float ,float);
int  mid_pt(float,float,float,float);
int visible(int []);
int  conv(int);
};

void suth_coh::main_clip()
{
int c[2];
c[0]=check_bits(x[0][0],x[0][1]);
c[0]=conv(c[0]);
c[1]=check_bits(x[1][0],x[1][1]);
c[1]=conv(c[1]);

int fx[2][2],x1,x2,y1,y2;
switch(visible(c))
{
case 1:
	break;
case 2:
	setcolor(BLACK);
	line(x[0][0],x[0][1],x[1][0],x[1][1]);
	break;
case 3:

	float m;
	setcolor(BLACK);
	line(x[0][0],x[0][1],x[1][0],x[1][1]);

  if(c[0]==0&&c[1]==0)
	   {
		 fx[0][0]=x[0][0];
		   fx[0][1]=x[0][1];
		   fx[1][0]=x[1][0];
		   fx[1][1]=x[1][1];
	   }
	  else
	   {
	   mid_pt(x[0][0],x[0][1],x[1][0],x[1][1]);

		}

	///setcolor(RED);
	//line(fx[0][0],fx[0][1],fx[1][0],fx[1][1]);

	break;
}
}
int suth_coh::conv(int z)
{
int t=0;
for(int i=0;i<=3;i++)
{
if(z%10==1)
 t+=pow(2,i);

z=z/10;
}
return t;
}
int suth_coh::visible(int c[2])
{
if(c[0]==0&&c[1]==0)
	return 1;
else if((c[0]&c[1])!=0)
       return 2;
     else
	return 3;
}

int suth_coh:: mid_pt(float x1,float y1,float x2,float y2)
{
 int c[2];
c[0]=check_bits(x1,y1);
c[0]=conv(c[0]);
c[1]=check_bits(x2,y2);
c[1]=conv(c[1]);

if(abs(x1-x2)>=1||abs(y1-y2)>=1)
{
switch(visible(c))
{
case 1:
 {
 setcolor(RED);
 line(x1,y1,x2,y2);
 }
 break;
case 2:
  break;
case 3:
 {
 float tempx,tempy;
 tempx=x1+(x2-x1)/2;
  tempy=y1+(y2-y1)/2;

  mid_pt(x1,y1,tempx,tempy);
  mid_pt(tempx,tempy,x2,y2);
 }
}
}
return 0;
}

int suth_coh::check_bits(float x,float y)
{
int a=0;
if(x<xl)
	a=a+1;
if(x>xr)
	a=a+10;
if(y<yt)
	a=a+100;
if(y>yb)
	a=a+1000;

return a;
}

void main()
{
int gd=DETECT, gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
suth_coh b;
b.getpt();
b.getrect();
b.main_clip();
getch();
}
