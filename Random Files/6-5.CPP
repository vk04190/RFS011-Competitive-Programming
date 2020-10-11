/* program 6-5.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int ch;

  putchar('?');		/* display a prompt */
  ch = getchar ();	/* read a keyboard char */
  putchar(ch);		/* echo to screen */

  getch();
}
