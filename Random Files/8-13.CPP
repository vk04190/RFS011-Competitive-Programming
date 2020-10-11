/* program 8-13.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int count = 1;

  while (count <= 10)
  {
    printf("%3d", count);
    ++count;
  }

  getch();
}