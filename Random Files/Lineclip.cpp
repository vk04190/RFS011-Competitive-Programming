#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <graphics.h>


class Line
{
  private:
    int x1,y1,x2,y2;
    int rc1[4],rc2[4],rc[4];
    float m,c;

  public:
    Line(int p1,int p2,int p3,int p4)
    {
      x1=p1;
      y1=p2;
      x2=p3;
      y2=p4;
      if(x1!=x2)
	m=(float)(y2-y1)/(x2-x1);
      c=y1-m*x1;
    }
    void Draw()
    {
      line(x1,y1,x2,y2);
    }
    void GenCodes(int wx1,int wy1,int wx2,int wy2)
    {
      rc1[0] = ( (x1<wx1) ? 1 : 0);  //following LTRB
      rc1[1] = ( (y1<wy1) ? 1 : 0);
      rc1[2] = ( (x1>wx2) ? 1 : 0);
      rc1[3] = ( (y1>wy2) ? 1 : 0);

      rc2[0] = ( (x2<wx1) ? 1 : 0);  //following LTRB
      rc2[1] = ( (y2<wy1) ? 1 : 0);
      rc2[2] = ( (x2>wx2) ? 1 : 0);
      rc2[3] = ( (y2>wy2) ? 1 : 0);
    }

    void OrCodes()
    {
      rc[0]=rc1[0]|rc2[0];
      rc[1]=rc1[1]|rc2[1];
      rc[2]=rc1[2]|rc2[2];
      rc[3]=rc1[3]|rc2[3];
    }
    int Clip(int,int,int,int);
};

/* Function to clip the given line
   returns 0 -if inside
	   1 -if outside*/

int Line::Clip(int l,int t,int r,int b)
{

  GenCodes(l,t,r,b);
  int flag1=0,flag2=0;

  for(int i=0;i<4;i++)              //check for completely inside
  {
    if(rc1[i]) flag1=1;
    if(rc2[i]) flag2=1;
  }

  if(flag1==0 && flag2==0) return 0;

  for(i=0;i<4;i++)                  //check for completely outside
  {
    if(rc1[i]&rc2[i]) return 1;
  }

  if(flag2==0)                      //if second point is inside
  {                                 // interchange the two co-ords
    int temp;                       // and flags
    temp=x1;
    x1=x2;
    x2=temp;

    temp=y1;
    y1=y2;
    y2=temp;

    flag1=0;
    flag2=1;
    GenCodes(l,t,r,b);
  }


  if(rc2[0]==1)                        //calculate intersection
  {
    x2=l;
    y2=m*x2+c;
    GenCodes(l,t,r,b);
  }
  if(rc2[1]==1)
  {
    y2=t;
    if(x1!=x2)
      x2=(y2-c)/m;
    GenCodes(l,t,r,b);
  }
  if(rc2[2]==1)
  {
    x2=r;
    y2=m*x2+c;
    GenCodes(l,t,r,b);
  }
  if(rc2[3]==1)
  {
    y2=b;
    if(x1!=x2)
      x2=(y2-c)/m;
    GenCodes(l,t,r,b);
  }

  if(flag1==0) return 0;

  if(rc1[0]==1)
  {
    x1=l;
    y1=m*x1+c;
    GenCodes(l,t,r,b);
  }
  if(rc1[1]==1)
  {
    y1=t;
    if(x1!=x2)
      x1=(y1-c)/m;
    GenCodes(l,t,r,b);
  }
  if(rc1[2]==1)
  {
    x1=r;
    y1=m*x1+c;
    GenCodes(l,t,r,b);
  }
  if(rc1[3]==1)
  {
    y1=b;
    if(x1!=x2)
      x1=(y1-c)/m;
    GenCodes(l,t,r,b);
  }
  return 0;
}

int main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"");

  Line l1(50,200,450,200);
  rectangle(100,100,400,300);
  l1.Draw();
  getch();
  cleardevice();
  rectangle(100,100,400,300);
  l1.Clip(100,100,400,300);
  setcolor(BLUE);
  l1.Draw();
  getch();
  return 0;
}