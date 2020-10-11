/* program 8-19.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int count = 1;
  do
    {
     printf("%3d", count);
    }
  while(++count <= 10);

  getch();
}