/* program 8-30.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int i, j, k;
  k = 0;
  for(i = 1; i <= 30; i++)
     for(j = 1; j <= 20; j++)
	if(j%3 == 0)
	   k++;
  printf("\nk = %d", k);

  getch();
}