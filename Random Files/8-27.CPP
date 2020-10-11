/* program 8-27.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int i, j;

  for(i = 0; i < 5; i++)
    {
     for(j = 0; j < 100; j++)
       {
	printf("%3d", j);
	if(j==5)
	break;
       }
       printf("\n");
    }
  getch();
}