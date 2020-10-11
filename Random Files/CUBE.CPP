#include<stdio.h>
#include<conio.h>
main()
{
int a,b,l,w,h,v;
clrscr();
printf("----------------------SOLVING A CUBE---------------------\n");
printf("---------------------------------------------------------\n");
printf("Enter width =");
scanf("%d",&w);
printf("\nEnter length=");
scanf("%d",&l);
printf("\nEnter height=");
scanf("%d",&h);
a=((w*l)+(l*h)+(h*w));
v=w*l*h;
printf("\nArea=  \t%d",a);
printf("\n\nVolume=\t%d",v);
getch();
}