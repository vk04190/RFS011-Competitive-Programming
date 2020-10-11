#include <stdio.h>
#include <conio.h>
void main(void)
{
int num,a,b,c,d,e,x;
clrscr();
printf("Enter a five digit number : ");
scanf("%d",&num);
a = num % 10;
x = num / 10;
b = x % 10;
x = x / 10;
c = x % 10;
x = x / 10;
d = x % 10;
x = x / 10;
e = x % 10;
x = x / 10;
printf ("\nThe number is %d%d%d%d%d",a,b,c,d,e);
getch();

}