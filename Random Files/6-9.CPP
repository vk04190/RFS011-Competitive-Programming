/* program 6-9.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  char name[25];		/* assume 24 columns screen */
  printf("Please enter your name: ");
  gets(name);
  printf("Confirming, your name is: %s", name);

  getch();
}
