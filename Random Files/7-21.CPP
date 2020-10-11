/* program 7-21.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  char ch;
  ch = getche();
  if(ch == 'z')
    {
    printf("\n\nYou typed z.");
    printf("\nNot some other letter.");
    }

  getch();
}
