/*  program to print sum of 1/1+1/2+1/3+1/4+.......1/10 */
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
float term=1,sum=1;
clrscr();
for(i=2;i<=10;i++)
	{
	term=1.0/i;
	sum=sum+term;
	printf("The sum is %f\n",sum);
	}
printf("\nThe total sum of series is: %f\a",sum);
getch();
}
