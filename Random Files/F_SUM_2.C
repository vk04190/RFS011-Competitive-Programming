		 /*functions (ii)*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
void sum(int a,int b);
clrscr();
printf("Enter the no.:");
scanf("%d%d",&a,&b);
sum(a,b);
}
void sum(int x,int y)
{
int sum;
sum=x+y;
printf("The sum = %d",sum);
getch();
}
