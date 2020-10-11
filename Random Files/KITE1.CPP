#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>


class kite
{
    int x,y;
    public:
     kite()
     {
      x=100;
      y=100;
     }
     void init()
     {
      int gd=DETECT,gm;
      initgraph(&gd,&gm,"c:\\tc\\bgi");
     }
     void draw_kite();
     void fly_kite();

};
void kite::draw_kite()
{
    int p[10][2],i;
    int midx=300;
    int midy=100;

  for(i=0;i<200;i++)
 {
    x=x+i;
    midx=midx+i;
    midy=midy;
    putpixel(x,y,YELLOW);

    p[0][0]=x;
    p[0][1]=y+70;
    p[1][0]=x-50;
    p[1][1]=y;
    p[2][0]=x;
    p[2][1]=y-70;
    p[3][0]=x+50;
    p[3][1]=y;
    p[4][0]=p[0][0];
    p[4][1]=p[0][1];
    p[5][0]=x+30;
    p[5][1]=y+80;
    p[6][0]=x-30;
    p[6][1]=y+80;
    p[7][0]=x;
    p[7][1]=y+70;
    int i;
    setcolor(WHITE);
    for(i=0;i<7;i++)
    {
       line(p[i][0],p[i][1],p[i+1][0],p[i+1][1]);
    }

  arc(midx, midy, 180, 300, 200);

   delay(1000);

   putpixel(x,y,BLACK);
   setcolor(BLACK);
   for(i=0;i<7;i++)
   {
      line(p[i][0],p[i][1],p[i+1][0],p[i+1][1]);
   }
   arc(midx,midy,180,300,200);
  }
}
/*void fly_kite();
{
} */
void main()
{
  kite k;
  k.init();
  k.draw_kite();
  closegraph();
  getch();
}