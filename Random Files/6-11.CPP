/* program 6-11.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  char name[25];

  clrscr();

  puts("Please enter your name: ");
  scanf("%s", name);
  puts(name);

  getch();
}