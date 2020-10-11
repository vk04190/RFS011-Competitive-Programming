/* program 8-7.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int row, column;
  puts("\t\tMy Handy Multiplication Table\n");
  for(row = 1; row <= 10; row++)
  {
      for (column = 1; column <= 10; column++)
      printf("%6d", row*column);

      printf("\n");	/* outside of second loop, inside first*/
  }

  getch();
}
