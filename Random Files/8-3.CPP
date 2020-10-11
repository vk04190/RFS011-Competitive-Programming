/* program 8-3.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int i;
  char ch = 'a';	/* declare and give ch an initial value */
  for (i = 0; ch != 'q'; i++)
  {
     printf("Pass: %d\n", i);
     ch = getch();
   }
}