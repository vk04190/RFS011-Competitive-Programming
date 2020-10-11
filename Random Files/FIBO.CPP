#include <stdio.h>
#include <conio.h>

long fibo(long n);

void main(void)
{
	long inp;
	clrscr();
	printf("Enter a number to create Fibonacci series : ");
	scanf("%ld",&inp);
	printf("The result is : %ld",fibo(inp));
	getch();

}

long fibo(long n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
	{
		return(fibo(n-1)+fibo(n-2));
	}
}