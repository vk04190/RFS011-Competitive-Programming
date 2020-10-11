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
    void Bres(int,int,int,int,int,int,int); //Done so that both Bres line and
				  //DDA line can be drawn in the same program
    void Bres(int,int,int,int,int,int,int,int);

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
    void DrawBres();
    void DrawBres(int);
};

void Line::Bres(int pred,int incdec,int dx,int dy,int e,int e_inc,int e_noinc)
{
  int i,start,end,var;
  if(pred==1)         //if x is predominant
  {
    start=x1;
    end=x2;
    var=y1;
  }
  else
  {
    start=y1;
    end=y2;
    var=x1;
  }

  for(i=start;i<=end;i++)
  {
    if(pred==0)
      putpixel(var,i,WHITE);  //i as always incr, hence y coord is i
    else
      putpixel(i,var,WHITE);  //same for x

    if(e<0)                   //non error condition
      e+=e_noinc;
    else
    {
      var+=incdec;            //error condition, hence incr or decr
      e+=e_inc;               //var, i.e non dominant
    }
  }
}

void Line::DrawBres()
{
  int dx,dy,e,e_inc,e_noinc,incdec,t,i;
  if(x1>x2)
  {
    t=x1;
    x1=x2;
    x2=t;

    t=y1;
    y1=y2;
    y2=t;
  }
  dx=x2-x1;
  dy=y2-y1;

  if(y1==y2)    //horizontal line
  {
    for(i=x1;i<=x2;i++)
      putpixel(i,y1,WHITE);
  }

  if(x1==x2)    //vertical line
  {
    if(y1>y2)
    {
      t=y1;
      y1=y2;
      y1=t;
    }
    for(i=y1;i<=y2;i++)
      putpixel(x1,i,WHITE);
  }

  if(dy<=dx && dy>0)              //slope 0 to 1
  {
    e_noinc=2*dy;       	//e = e + 2 * dy
    e=2*dy-dx;
    e_inc=2*(dy-dx);            //e = e - 2 * dx = e + 2 * (dy - dx)
				//Substituting the above obtained value of "e"
    Bres(1,1,dx,dy,e,e_inc,e_noinc);     //call bres 1-> x predominant 1->increment non dominant on error
  }

  if(dy>dx && dy>0)               //slope > 1
  {
    e_noinc=2*dx;
    e=2*dx-dy;
    e_inc=2*(dx-dy);
    Bres(0,1,dx,dy,e,e_inc,e_noinc);  //0->y pred, 1-> increment non dom on error
  }

  if(-dy<=dx && dy<0)             //slope 0 to -1
  {
    dy=-dy;
    e_noinc=2*dy;
    e=2*dy-dx;
    e_inc=2*(dy-dx);
    Bres(1,-1,dx,dy,e,e_inc,e_noinc);//1-> x pred  -1->decrement non domin
  }

  if(-dy>dx && dy<0)              //slope less than -1
  {				 //Important and exclusive condition
    dx=-dx;
    e_noinc=-(2*dx);
    e=2*dx-dy;
    e_inc=-2*(dx-dy);

    t=x1;
    x1=x2;
    x2=t;

    t=y1;
    y1=y2;
    y2=t;

    Bres(0,-1,dx,dy,e,e_inc,e_noinc);
  }
}

void Line::Bres(int pred,int incdec,int dx,int dy,int e,int e_inc,int e_noinc,int width)
{
  int i,start,end,var;

  float wdx=(float)(width/2)*(y2-y1)/sqrt((float)(x2-x1)*(x2-x1)+(float)(y2-y1)*(y2-y1));
  float wdy=-(float)(width/2)*(x2-x1)/sqrt((float)(x2-x1)*(x2-x1)+(float)(y2-y1)*(y2-y1));

  if(pred==1)
  {
    start=x1;
    end=x2;
    var=y1;
  }
  else
  {
    start=y1;
    end=y2;
    var=x1;
  }

  for(i=start;i<=end;i++)
  {
    if(pred==0)
    {
      Line templ(var+wdx,i+wdy,var-wdx,i-wdy);
      templ.DrawBres();
      putpixel(var,i,CYAN);
    }
    else
    {
      Line templ(i+wdx,var+wdy,i-wdx,var-wdy);
      templ.DrawBres();
      putpixel(i,var,CYAN);
    }
    if(e<0)
      e+=e_noinc;
    else
    {
      var+=incdec;
      e+=e_inc;
    }
  }
}

void Line::DrawBres(int width)
{
  int dx,dy,e,e_inc,e_noinc,incdec,t,i,j;
  if(x1>x2)
  {
    t=x1;
    x1=x2;
    x2=t;

    t=y1;
    y1=y2;
    y2=t;
  }
  dx=x2-x1;
  dy=y2-y1;

  if(y1==y2) //horizontal line
  {
    for(i=x1;i<=x2;i++)
    {
      for(j=0;j<width/2;j++)
      {
	putpixel(i,y1+j,WHITE);        //plot j above and below curr coord
	putpixel(i,y1-j,WHITE);
      }
      putpixel(i,y1,WHITE);
    }

  }

  if(x1==x2)    //vertical line
  {
    if(y1>y2)
    {
      t=y1;
      y1=y2;
      y1=t;
    }
    for(i=y1;i<=y2;i++)
    {
      for(j=0;j<width/2;j++)
      {
	putpixel(x1-j,i,WHITE);   //plot j to left and right of curr coord
	putpixel(x1+j,i,WHITE);
      }
      putpixel(x1,i,WHITE);
    }
  }

  if(dy<=dx && dy>0)
  {
    e_noinc=2*dy;
    e=2*dy-dx;
    e_inc=2*(dy-dx);
    Bres(1,1,dx,dy,e,e_inc,e_noinc,width);
  }

  if(dy>dx && dy>0)
  {
    e_noinc=2*dx;
    e=2*dx-dy;
    e_inc=2*(dx-dy);
    Bres(0,1,dx,dy,e,e_inc,e_noinc,width);
  }

  if(-dy<=dx && dy<0)
  {
    dy=-dy;
    e_noinc=2*dy;
    e=2*dy-dx;
    e_inc=2*(dy-dx);
    Bres(1,-1,dx,dy,e,e_inc,e_noinc,width);
  }

  if(-dy>dx && dy<0)
  {
    dx=-dx;
    e_noinc=-(2*dx);
    e=2*dx-dy;
    e_inc=-2*(dx-dy);

    t=x1;
    x1=x2;
    x2=t;

    t=y1;
    y1=y2;
    y2=t;

    Bres(0,-1,dx,dy,e,e_inc,e_noinc,width);
  }
}

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
  Line l1(150,200,250,400);
  l1.DrawBres();
  getch();
}