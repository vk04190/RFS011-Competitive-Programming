#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(void)
{
int gd,gm;
gd=DETECT;
initgraph(&gd,&gm,"\\tc\\bgi");
pieslice(320,240,15,30,180);
pieslice(320,240,45,60,180);
pieslice(320,240,75,90,180);
pieslice(320,240,105,120,180);
pieslice(320,240,135,150,180);
pieslice(320,240,165,180,180);
pieslice(320,240,195,210,180);
pieslice(320,240,225,240,180);
pieslice(320,240,255,270,180);
pieslice(320,240,285,300,180);
pieslice(320,240,315,330,180);
pieslice(320,240,345,360,180);

getch();
closegraph();
}