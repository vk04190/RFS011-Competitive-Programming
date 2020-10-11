#include  <graphics.h>
#include  <conio.h>
#include  <stdio.h>
#include  <dos.h>
#include  <process.h>
class mouse
{
public:
union REGS t,o;
int x,y,button,i,j;

initmouse()
{
t.x.ax=0;
int86(0x33,&t,&o);
return(t.x.ax);
}
showmouseptr()
{
t.x.ax=1;
int86(0x33,&t,&o);
}
hidemouseptr()
{
t.x.ax=2;
int86(0x33,&t,&o);
}
restrictmouseptr(int x1,int y1,int x2,int y2)
{
t.x.ax=7;
t.x.cx=x1;
t.x.dx=x2;
int86(0x33,&t,&o);
t.x.ax=8;
t.x.cx=y1;
t.x.dx=y2;
int86(0x33,&t,&o);
}
getmousepos(int *button,int *x,int *y)
{
t.x.ax=3;
int86(0x33,&t,&o);
*button=o.x.bx;
*x=o.x.cx;
*y=o.x.dx;
}
};
class main1 : mouse
{
private:
//int x,y;
public:
void screen()
{
cleardevice();
mouse::initmouse();
restrictmouseptr(1,1,640,480);
setbkcolor(0);
setpalette(0,33);
setcolor(1);
settextstyle(1,0,5);
outtextxy(130,3,"NUMBDER SYSTEM");
setpalette(1,31);
setfillstyle(1,1);
bar(110,75,510,115);
bar(110,75+60,510,115+60);
bar(110,75+60+60,510,115+60+60);
bar(110,75+60+60+60,510,115+60+60+60);
setfillstyle(1,2);
bar(115,80,505,110);
bar(115,80+60,505,110+60);
bar(115,80+60+60,505,110+60+60);
bar(115,80+60+60+60,505,110+60+60+60);
setpalette(2,25);
setcolor(3);
settextstyle(7,0,1);
outtextxy(132,82,"DECIMAL TO BINARY, OCTEL, HEXA");
outtextxy(132,82+60,"BINARY TO DECIMAL, OCTEL, HEXA");
outtextxy(132,82+60+60,"OCTEL TO DECIMAL, BINARY, HEXA");
outtextxy(132,82+60+60+60,"HEXA TO DECIMAL, OCTEL, BINARY ");
setpalette(3,63);
showmouseptr();
	while(1)
{
mouse::getmousepos(&button,&x,&y);
//gotoxy(1,10);printf("%d  %d",x,y);
//////////////////////    condition   //////////////////////////////////
if((x>0&&x<100)&&(y>0&&y<100)&&((button & 1)==1))
exit(0);
}
}};
class decinal : mouse
{
protected
int dec[22];
int oct[22];
int hex[22];
int dec[100];
}

void main()
{
    main1 a1;
    mouse m1;
    int     driver = DETECT,mode;
    initgraph(&driver,&mode,"c:\\tc\\bgi");
    setbkcolor(BLUE);
    //m1.restrictmouseptr(1,1,640,480);
    a1.screen();
    //m1.showmouseptr();
    getch();
}