/* program 6-3.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  char ch;
  /* The character is displayed when pressed */
  printf("\nMake a choice and press a character:");
  ch=getche();

  /* The character is not displayed when pressed */
  printf("\nMake a choice and press a second character:");
  ch=getch();
}
