/* program 8-25.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int count;
  for(count = 1; count <= 100; count++)
     {
       printf("%3d", count);
       if(count==10)
       break;        		/* exit the loop */
     }

  getch();
}