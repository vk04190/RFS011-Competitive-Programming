/* program 8-28.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int count;
  for(count = 1; count <= 10; count++)
     {
       if(count==5)
       continue;           /* skip remining code in loop if x==5 */
       printf("%3d", count);
     }

  getch();
}