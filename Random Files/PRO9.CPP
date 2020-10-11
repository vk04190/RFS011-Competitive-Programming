#include <stdio.h>
#include <conio.h>
void main(void)
{
int num,a,b,c,d,x;
clrscr();
printf("Enter a four digit number : ");
scanf("%d",&num);
a = num % 10;
x = num / 10;
b = x % 10;
x = x / 10;
c = x % 10;
x = x / 10;
d = x % 10;
x = x / 10;

printf ("\nThe sum of first and last digit is %d",a+d);
getch();

}