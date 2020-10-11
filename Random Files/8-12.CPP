/* program 8-12.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  char ch;
  printf("\nEnter a character: ");
  ch = getche();

  while(ch != 'q')
  {
    printf("\nInput character = %c", ch);
    printf("\n\nEnter a character: ");
    ch = getche();
  }
}
