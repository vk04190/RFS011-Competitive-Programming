/* program 7-15.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
clrscr();
float a, b;
char ch;

printf("Do you want to:\n");
printf("add, subtract, multiply, or divide?\n\n\n");
printf("Enter first letter: ");
ch = getche();		/* read a character */
printf("\n");
printf("Enter first number: ");
scanf("%f", &a);
printf("Enter second number: ");
scanf("%f", &b);

if(ch=='a')
   printf("%.2f", a+b);
else if(ch=='s')
   printf("%.2f", a-b);
else if(ch=='m')
   printf("%.2f", a*b);
else if(ch=='d' && b!=0)
   printf("%.2f", a/b);

getch();
}
