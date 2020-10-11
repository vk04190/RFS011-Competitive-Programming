/* program 8-26.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int i;
  char ch;

  // display all numbers which are multiples of 6
  for(i = 1; i < 10000; i++)
     {
       if(!(i%6))
       {
       printf("%d more (y/n) ", i);
       ch = getche();
       if(ch=='n')
       break;
       printf("\n");
       }
     }
}