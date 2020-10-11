#include<conio.h>
#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter any three no.s:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
	{
	printf(" %d is the largest no.",a);
	}
else
if(b>a&&b>c)
	{
	printf("%d is lagest among the three",b);
	}
else
printf("%d is largest",c);
getch();
}