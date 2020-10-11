/*PROGRAM TO COMPUTE THE VALUES OF DEPENDENT @   PRASAD.G.V.L
																								 02211A02540*/
#include<stdio.h>
#include<conio.h>
void main(){
int x,y;
clrscr();
printf("enter the value of x");
scanf("%d",&x);
if(x>0)
	{
		y=1;
		printf("the computed valueis %d",y);
	}
	else if (x==0)
	{
	 y=0;
	 printf("computed	value is %d",y);
	}
	else if(x<0)
	{
		y=-1;
		printf("computedvalueis %d",y);
	}
	getch();

}