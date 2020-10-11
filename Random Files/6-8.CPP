/* program 6-8.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  char name[15];	/* assume 14 columns screen */
  gets(name);		/* read a line */
  puts(name);           /* echo */

  getch();
}
