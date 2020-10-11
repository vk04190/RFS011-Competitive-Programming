/*	PROGRAM TO FIND PRIME NUM`S IN CERTAIN RANGE	@	PRASAD.G.V.L
																										02211A0540
																										CSE      */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c1=0,x,n;
	clrscr();
	printf("enter the range\n");
	scanf("%d",&n);
	for(a=2;a<=n;a++)
	{    c1=0;
		for(b=2;b<a;b++)
		 {
				x=a%b;
		 if(x==0)
				 c1++;
		 }
		 if(c1==0)
		 printf("%2d ",a);

 }
		 getch();
}


////////////OUTPUT///////////////////////////////