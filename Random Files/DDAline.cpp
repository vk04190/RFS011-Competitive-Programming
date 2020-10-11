#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <iostream.h>
#include <dos.h>
#include <math.h>

class Line
{
  private:
    int x1,y1,x2,y2;
  public:
    Line(int p1,int p2,int p3,int p4)
    {
      x1=p1;
      y1=p2;
      x2=p3;
      y2=p4;
    }
    void DrawDDA();
    void DrawDDA(int);
};

void Line::DrawDDA()
{
  float x=x1,y=y1;
  float dx=x2-x1;
  float dy=y2-y1;
  int step = ( (fabs(dx)>fabs(dy)) ? fabs(dx) : fabs(dy) );
  float xinc=dx/step;
  float yinc=dy/step;

  for(int i=0;i<step;i++)
  {
    putpixel(x+0.5,y+0.5,WHITE);
    x=x+xinc;
    y=y+yinc;
  }
}

void Line::DrawDDA(int width)
{
  float x=x1,y=y1;
  float dx=x2-x1;
  float dy=y2-y1;
  int step = ( (fabs(dx)>fabs(dy)) ? fabs(dx) : fabs(dy) );
  float xinc=dx/step;
  float yinc=dy/step;
  float wdx=(width/2)*(y2-y1)/sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  float wdy=-(width/2)*(x2-x1)/sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

  for(int i=0;i<step;i++)
  {
    Line templ(x+wdx,y+wdy,x-wdx,y-wdy);
    templ.DrawDDA();
    getch();
    putpixel(x+0.5,y+0.5,CYAN);
    x=x+xinc;
    y=y+yinc;
  }
}

int main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"");
  Line l1(100,100,100,200);
//  l1.DrawDDA();
  l1.DrawDDA(100);
  getch();
}