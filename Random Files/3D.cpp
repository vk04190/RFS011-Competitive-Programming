#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<process.h>
#define PI 3.142


class cube
 {
   int x[8],y[8],z[8],xx[8],yy[8],cx,cy,cz;
  public:
   void input(void);
   void findcen(void);
   void display(void);
   void convert(void);
   void trans(void);
   void scale(void);
   void rotate(void);

 };

 void cube::input(void)
  {
   int lx,ly,lz;
   cout<<"\nEnter x length";
   cin>>lx;
   cout<<"\nEnter y length";
   cin>>ly;
   cout<<"\nEnter z length";
   cin>>lz;

   x[0]=0;y[0]=0;z[0]=0;
   x[1]=lx;y[1]=0;z[1]=0;
   x[2]=lx;y[2]=ly;z[2]=0;
   x[3]=0;y[3]=ly;z[3]=0;

   x[4]=0;y[4]=0;z[4]=lz;
   x[5]=lx;y[5]=0;z[5]=lz;
   x[6]=lx;y[6]=ly;z[6]=lz;
   x[7]=0;y[7]=ly;z[7]=lz;
  }

 void cube::display(void)
  {
   convert();
   cleardevice();
   for(int i=0;i<3;i++)
    {
     line(xx[i],yy[i],xx[i+1],yy[i+1]);
     line(xx[i+4],yy[i+4],xx[i+5],yy[i+5]);
     line(xx[i],yy[i],xx[i+4],yy[i+4]);
    }
   line(xx[0],yy[0],xx[3],yy[3]);
   line(xx[4],yy[4],xx[7],yy[7]);
   line(xx[3],yy[3],xx[7],yy[7]);
  }

 void cube::convert(void)
  {
    int i=320,j=240,k;

    for(k=0;k<8;k++)
     {
       i=320,j=240;

       j=j-y[k];

       i=i+x[k]*cos(PI/6);
       j=j+x[k]*sin(PI/6);

       i=i-z[k]*cos(PI/6);
       j=j+z[k]*sin(PI/6);

       xx[k]=i;
       yy[k]=j;

     }

  }
 void cube::trans(void)
  {
    int tx,ty,tz;
    cout<<"\nEnter tx ";
    cin>>tx;
    cout<<"\nEnter ty ";
    cin>>ty;
    cout<<"\nEnter tz ";
    cin>>tz;

    for(int i=0;i<8;i++)
     {
      x[i]=x[i]+tx;
      y[i]=y[i]+ty;
      z[i]=z[i]+tz;
     }

    display();
  }
 void cube::findcen(void)
  {
   int xmax=0,ymax=0,xmin=1000,ymin=1000,zmax=0,zmin=1000;

   for(int i=0;i<8;i++)
    {
     if(xmax<x[i])
      xmax=x[i];
     if(xmin>x[i])
      xmin=x[i];

     if(ymax<y[i])
      ymax=y[i];
     if(ymin>y[i])
      ymin=y[i];

     if(zmax<z[i])
      zmax=z[i];
     if(zmin>z[i])
      zmin=z[i];
    }

     cx=xmin+(xmax-xmin)/2;
     cy=ymin+(ymax-ymin)/2;
     cz=zmin+(zmax-zmin)/2;
  }

 void cube::scale(void)
  {
   float sx,sy,sz;
   findcen();
    cout<<"\nEnter sx ";
    cin>>sx;
    cout<<"\nEnter sy ";
    cin>>sy;
    cout<<"\nEnter sz ";
    cin>>sz;

   for(int i=0;i<8;i++)
    {
     x[i]=(x[i]*sx)-(sx*cx)+cx;
     y[i]=(y[i]*sy)-(sy*cy)+cy;
     z[i]=(z[i]*sz)-(sz*cz)+cz;
    }
   display();

  }
 void cube::rotate(void)
  {
     int i,j;
     findcen();
     float A1,A2,A3,sum1,sum2,sum3;
     cout<<"\nEnter x angle = ";
     cin>>A1;
     cout<<"\nEnter y angle = ";
     cin>>A2;
     cout<<"\nEnter z angle = ";
     cin>>A3;

	A1=PI*A1/180;
	A2=PI*A2/180;
	A3=PI*A3/180;
float  R[4][4];
// for X Rotation
for(i=0;i<8;i++)
	 {
	   x[i]=x[i]-cx;
	   y[i]=y[i]-cy;
	   z[i]=z[i]-cz;
	 }
for(i=0;i<4;i++)
{
    R[i][0]=0;
    R[i][1]=0;
    R[i][2]=0;
    R[i][3]=0;
}



R[0][0]=1;
R[1][1]=cos(A1);
R[1][2]=-sin(A1);
R[2][1]=sin(A1);
R[2][2]=cos(A1);
R[3][3]=1;

for(i=0;i<8;i++)
{
	sum1=sum2=sum3=0;

  sum1=(x[i]*R[0][0])+(y[i]*R[1][0])+
		    (z[i]*R[2][0])+R[3][0];
  sum2=(x[i]*R[0][1])+(y[i]*R[1][1])+
		    (z[i]*R[2][1])+R[3][1];
  sum3=(x[i]*R[0][2])+(y[i]*R[1][2])+
		    (z[i]*R[2][2])+R[3][2];

	x[i]=sum1;
	y[i]=sum2;
	z[i]=sum3;
}

	 for(i=0;i<8;i++)
	 {
	   x[i]=x[i]+cx;
	   y[i]=y[i]+cy;
	   z[i]=z[i]+cz;
	 }

	 // for Y Rotation
for(i=0;i<8;i++)
	 {
	   x[i]=x[i]-cx;
	   y[i]=y[i]-cy;
	   z[i]=z[i]-cz;
	 }
for(i=0;i<4;i++)
{
    R[i][0]=0;
    R[i][1]=0;
    R[i][2]=0;
    R[i][3]=0;
}

R[0][0]=cos(A2);
R[0][2]=-sin(A2);
R[1][1]=1;
R[2][0]=sin(A2);
R[2][2]=cos(A2);
R[3][3]=1;

for(i=0;i<8;i++)
{
	sum1=sum2=sum3=0;

  sum1=(x[i]*R[0][0])+(y[i]*R[1][0])+
		    (z[i]*R[2][0])+R[3][0];
  sum2=(x[i]*R[0][1])+(y[i]*R[1][1])+
		    (z[i]*R[2][1])+R[3][1];
  sum3=(x[i]*R[0][2])+(y[i]*R[1][2])+
		    (z[i]*R[2][2])+R[3][2];

	x[i]=sum1;
	y[i]=sum2;
	z[i]=sum3;
}


	for(i=0;i<8;i++)
	 {
	   x[i]=x[i]+cx;
	   y[i]=y[i]+cy;
	   z[i]=z[i]+cz;
	 }

	 // for Z Rotation
for(i=0;i<8;i++)
 {
  x[i]=x[i]-cx;
  y[i]=y[i]-cy;
  z[i]=z[i]-cz;
 }
for(i=0;i<4;i++)
{
    R[i][0]=0;
    R[i][1]=0;
    R[i][2]=0;
    R[i][3]=0;
}

R[0][0]=cos(A3);
R[0][1]=sin(A3);
R[1][0]=-sin(A3);
R[1][1]=cos(A3);
R[2][2]=1;
R[3][3]=1;

for(i=0;i<8;i++)
{
	sum1=sum2=sum3=0;

  sum1=(x[i]*R[0][0])+(y[i]*R[1][0])+
		    (z[i]*R[2][0])+R[3][0];
  sum2=(x[i]*R[0][1])+(y[i]*R[1][1])+
		    (z[i]*R[2][1])+R[3][1];
  sum3=(x[i]*R[0][2])+(y[i]*R[1][2])+
		    (z[i]*R[2][2])+R[3][2];

	x[i]=sum1;
	y[i]=sum2;
	z[i]=sum3;
}


	for(i=0;i<8;i++)
	 {
	   x[i]=x[i]+cx;
	   y[i]=y[i]+cy;
	   z[i]=z[i]+cz;
	 }
  display();


 }

 void main()
  {
   int gd=DETECT,gm,ch;
   initgraph(&gd,&gm,"c:\\tc\\bgi ");

   cleardevice();
   cube X;
   X.input();
   X.display();

   while(1)
    {
     gotoxy(2,5);
     cout<<"\nEnter choice\n\n";
     cout<<"  1> Translate\n  2> Scale\n  3> Rotate\n  4> Exit\n\n";
     cin>>ch;
     switch(ch)
      {
       case 1:
	      X.trans();
	      break;
       case 2:
	      X.scale();
	      break;
       case 3:
	      X.rotate();
	      break;
       case 4:
	      exit(0);
	      break;
      }
    }

  }

