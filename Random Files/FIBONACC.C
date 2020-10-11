/*PROGRAM TO FIND FIBONACCI SERIES @	PRASAD.G.V.L
																			02211A0540
																			CSE*/
#include<stdio.h>
#include<conio.h>
void main()
{
int fibo(int n);
int n,e;
clrscr();
printf("enter the num\n");
scanf("%d",&n);
e=fibo(n);
printf("the series is  %d",e);
getch();
}

  fibo(int x)
  {
	   int a=0,i,b=1,c;
	   for(i=1;i<=x;i++)
	   {
		     c=a+b;
		     a=b;
		     b=c;
	   printf("%d\t",c);
	   }
		 return(c);
  }
