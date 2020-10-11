#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <math.h>

class Segment
{
  public:
    int STheta,ETheta,Radius;
    int Visible;
    int x,y;
    int Color;
    float Theta;
    void Rotate(float);
    void Translate(int,int);
    virtual void Draw()=0;
};

void Segment::Translate(int tx,int ty)
{
  int tempcolor;
  tempcolor=Color;

  if(Visible)
  {
    Color=BLACK;
    Draw();
    x=x+tx;
    y=y+ty;
    Color=tempcolor;
    Draw();
  }
  else
  {
    x=x+tx;
    y=y+ty;
  }
}

class Ramp : public Segment   //inheritance (derived class)
{
  public:
    int stx,sty,enx,eny;
    Ramp(int x1,int y1,int x2,int y2)
    {
      stx=x1;
      sty=y1;
      enx=x2;
      eny=y2;
      Color=WHITE;
    }
    void Draw()
    {
      int tempcolor=getcolor();
      if(Visible)
      {
	setcolor(Color);
	line(stx,sty,enx,eny);
	setcolor(tempcolor);
      }
    }
};

class Axis:public Segment
{
  public:
    Axis()
    {
      Color=WHITE;
      Theta=0;
      Visible=1;
    }
    void Draw();

};

void Axis::Draw()
{
  int tempcolor=getcolor();
  if(Visible)
  {
    setcolor(Color);
    line(x,y,x+Radius*cos(Theta*M_PI/180),y-Radius*sin(Theta*M_PI/180));
    line(x,y,x-Radius*cos(Theta*M_PI/180),y+Radius*sin(Theta*M_PI/180));
    line(x,y,x-Radius*sin(Theta*M_PI/180),y-Radius*cos(Theta*M_PI/180));
    line(x,y,x+Radius*sin(Theta*M_PI/180),y+Radius*cos(Theta*M_PI/180));
    setcolor(tempcolor);
  }
}

class WheelArc:public Segment
{
  public:

    WheelArc()
    {
      Color=WHITE;
      Theta=0;
      Visible=1;
    }
    void Draw();
};

void Segment::Rotate(float t)
{
  int tempcolor;
  tempcolor=Color;

  if(Visible)
  {
    Color=BLACK;
    Draw();
    Theta=Theta+t;
    Color=tempcolor;
    Draw();
  }
  else
    Theta=Theta+t;

}

void WheelArc::Draw()
{
  int oldcolor=getcolor();
  if(Visible)
  {
    setcolor(Color);
    arc(x,y,STheta+Theta,ETheta+Theta,Radius);
    setcolor(oldcolor);
  }
}

void Animate(int stx,int sty,int enx,int eny,int steps)
{
  int i;
  float stepx=(float)(enx-stx)/(float)steps;
  float stepy=(float)(eny-sty)/(float)steps;
  float stept=sqrt(stepx*stepx+stepy*stepy)/50*180/M_PI;

  float angle=atan((float)stepy/stepx);	//Draw Ramp

  int lx1=stx-50*sin(angle);   //Gives the start and end co-ordinates of ramp
  int ly1=sty+50*cos(angle);
  int lx2=enx-50*sin(angle);
  int ly2=eny+50*cos(angle);

  Segment* Sarr[10];

  for(i=0;i<8;i++)
  {
    Sarr[i]=new WheelArc;
    Sarr[i]->STheta=45*i;
    Sarr[i]->ETheta=45*(i+1);
    Sarr[i]->Radius=50;
    Sarr[i]->x=stx;
    Sarr[i]->y=sty;
    Sarr[i]->Color=i%4+8;
    Sarr[i]->Draw();
    getch();
  }
  Sarr[8]=new Axis;
  Sarr[8]->Radius=50;
  Sarr[8]->x=stx;
  Sarr[8]->y=sty;
  Sarr[8]->Draw();

  getch();
  Sarr[9]=new Ramp(lx1,ly1,lx2,ly2);
  Sarr[9]->Color=WHITE;
  Sarr[9]->Draw();

  for(int j=0;j<steps;j++)
  {
    for(i=0;i<9;i++)
    {
      Sarr[i]->Rotate(-stept);
      Sarr[i]->Translate(stepx,stepy);
    }
    delay(50);
    getch();
    Sarr[9]->Draw();
  }

//  for(i=0;i<9;i++)
//  {
//    Sarr[i]->Draw();
//  }

}


void main()
{

  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\tc\\bgi");


  Animate(50,100,200,100,100);
  cleardevice();
  line(50,150,200,150);
  Animate(200,100,500,400,100);

  getch();
}