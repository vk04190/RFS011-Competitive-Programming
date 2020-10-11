	/*		PROGRAM FOR FIBBONACCI SERIES @ 	PRASAD.G.V.L:
																					02211A0540
																					CSE*/
#include<stdio.h>
#include<conio.h>
void main()
{
		int fibo(int n);
		int n,o;
		clrscr();
		printf("enter the range");
		scanf("%d",&n);
		o=fibo(n);
		printf("the series is%d",o);
		getch();
}
int fibo(int x)
{
	int i,b=1,a=0,c=0;
	for(i=1,a=0,b=1,c=0;i<=x;i++)
	{
	c=a+b;
	a=b;
	b=c;
	printf("  %d",c);
	}
	return(c);
}