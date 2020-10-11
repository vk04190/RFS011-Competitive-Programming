/* Practical 6: Finding the Factorial of n using 'while' loop, read value
of n using scanf, and print the factorial of n.*/

#include<stdio.h>
#include<conio.h>

void main(void)
{
clrscr();
double f=1;
int num, i;
printf("\n\n\n\t\tEnter the number to find its Factorial: ");
scanf("%d", &num);

if (num>=0)
{
   i = 1;
   while (i<=num)
   {
     f=f*i;
     i++;
   }
   printf("\n\n\n\t\tThe factorial of %d is %lf", num, f);
}
else
   printf("\n\n\n\t\t Sorry!!");

getch();
}
