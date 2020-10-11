/*	DISCOUNT PROGRAM OF HAND OR MILL DISCOUNT	@				PRASAD.G.V.L;
																										02211A0540,CSE;*/
#include<stdio.h>
#include<conio.h>
void main(){
float a,b;
char m,h,ch;
int k;
clrscr();
printf("enter the amount purchased\n");
scanf("%f",&a);
printf("enter whether  m  or h\n");
		ch=getch();
if(a<=100)
		k=1;
else if(a<=200)
k=2;
else if(a<=300)
k=3;
else
k=4;
switch(k)
{
case 1:if(ch=='m')
	b=a;
else
	b=a-5*a/100;
							break;
case 2:if(ch=='m')
	b=a-a*5/100;
else
	b=a-7.5*a/100;
							break;
case 3:if(ch=='m')
	b=a-7.5*a/100;
else
	b=a-10*a/100;
							break;
case 4:if(ch=='m')
	b=a-10*a/100;
else
	b=a-15*a/100;
							break;
}
printf("the net amount is %f",b);
getch();
}