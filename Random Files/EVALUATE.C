
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int x,y;
float a,pi=3.1419;
clrscr();
printf("enter values of x and y");
scanf("%d%d",&x,&y);
a=2.5*log(x)+cos(32*pi/180)+(x*x-y*y)+pow(2*x*y,0.5);
printf("%f",a);
getch();
}

