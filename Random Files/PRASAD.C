/*	PROGRAM TOOBTAIN THE SERIES OF EVEN POW @	PRASAD.G.V.L
																							02211A0540
																							CSE*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float fact(float i);
float x,p=0,i,num;
clrscr();
printf("enter the value ofx and num\n");
scanf("%f%f",&x,&num);
for(i=1;i<=num;i=i+2)
{
	p+=pow(x,i)/fact(i);
 }
 printf("the series value is %f",p);
 getch();
}
float fact(float x)
	{
 float a,fact=1;
		for(a=1;a<=x;a++)
		{
				fact*=a;
		 }
		 return(fact);
}