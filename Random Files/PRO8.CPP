#include <stdio.h>
#include <conio.h>
void main(void)
{
int num,sum,a,b,c;
clrscr();
printf("Enter a five digit number : ");
scanf("%d",&num);
sum = num % 10;
b = num / 10;
sum += b % 10;
b = b / 10;
sum += b % 10;
b = b / 10;
sum += b % 10;
b = b / 10;
sum += b % 10;
b = b / 10;

printf ("\nThe sum is %d\n",sum);
getch();

}