/* program 8-8.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int row, column;
  for(row = 1; row <= 10; row++)   /* outer loop */
  {
      for (column = 1; column <= row; column++)	 /* inner loop */
      printf("*");

    printf("\n");	/* outside of second loop, inside first*/
      }

  getch();
}
