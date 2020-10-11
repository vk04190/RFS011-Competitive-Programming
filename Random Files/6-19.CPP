/* program 6-19.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  char character = 'A';
  char string[] = "This is a string";

  clrscr();
  printf("%c\n", character);
  printf("%s\n", string);
  printf("%s\n", "This is also a string");

  getch();
}