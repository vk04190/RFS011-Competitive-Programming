/*    prog. to evaluate 1/2+3/4+5/6+..............99/100      */
#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,n=2;
float term,sum;
clrscr();
while(i<=99)
	{
	term=i/n;
	sum=0;
	sum=sum+term;
	printf("the sum is %f\n",sum);
	i=i+2;
	n=n+2;
	}
printf("\nThe total sum of series is: %f ",sum);
getch();
}
