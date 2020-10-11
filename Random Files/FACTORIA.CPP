#include <stdio.h>
#include <conio.h>

long factorial(long n);

void main(void)
{
	long inp;
	clrscr();
	printf("Enter a number to calculate factorial: ");
	scanf("%ld",&inp);
	printf("The result is : %ld",factorial(inp));
	getch();

}

long factorial(long n)
{
	if(n==0)
		return 1;
	else
	{
		long result;
		result=factorial(n-1);
		return(n*result);
	}
}