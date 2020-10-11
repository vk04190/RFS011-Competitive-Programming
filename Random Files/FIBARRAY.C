
/*		FIBONACCI SERIES USING ARRAYS 	@			PRASAD.G.V.L
																						02211A0540
																						CSE*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int fib[15],i;
	clrscr();
	fib[0]=0;fib[1]=1;
	for(i=2;i<15;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	for(i=0;i<=15;i++)
	{
	printf("  %d",fib[i]);
	}
	getch();
}