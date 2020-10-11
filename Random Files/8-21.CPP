/* program 8-21.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  char ch;
  do
    {
     ch = getche();
    }
  while(ch != 'q');
  printf("\n\nFound the q");

  getch();
}