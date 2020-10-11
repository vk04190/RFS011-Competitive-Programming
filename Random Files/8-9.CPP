/* program 8-9.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int i, sum=0;

    for(i=1; i<100; i=i+2)
       sum = sum + i;
    printf("\n\n\n\t\tThe sum is = %d", sum);

  getch();
}
