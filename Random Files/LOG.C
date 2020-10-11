x/*		program to attrib mathemathical functions@	 	PRASAD.G.V.L
																										02211A0540
																										CSE*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
int x,y;
float ans;
clrscr();
printf("enter the value of x and y\n");
scanf("%d%d",&x,&y);
ans=2.5*log(x)+ cos(32*3.14/180)+sqrt(2*x*y)+abs((x*x)-(y*y));
printf("%f",ans);
getch();
}