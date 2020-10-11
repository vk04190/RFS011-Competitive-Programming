/*PROGRAM TO CALCULATE CHARGES @       PRASAD.G.V.L:
																			 02211A0540:
																			 CSE*/
#include<stdio.h>
#include<conio.h>
void main(){
int x,n;
float a;
clrscr();
printf("enter the customer num andunits\n");
scanf("%d%d",&n,&x);
if(x<=200)
		a=.50*x;
else if(x<=400)
		a=100+0.65*(x-200);
else if(x<=600)
		a=230+.80*(x-400);
else
		a=390+1.0*(x-600);
printf("the net charges of cos num %d are %f",n,a);
getch();
}