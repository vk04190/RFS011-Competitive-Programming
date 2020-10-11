#include<stdio.h>
#include<conio.h>

void main(void)
/* square2.c */
/* print out the square of first twenty(20) integers */
{
clrscr();
int n;
for(n=1; n<21; n++)
printf("The square of %2d is %3d\n",n,n*n);
getch();

}