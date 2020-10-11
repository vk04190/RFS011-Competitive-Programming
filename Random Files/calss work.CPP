/* Practical 1: Writing a Program which prints a Text of four lines
consisting of Characters, integers values and floating point values
using printf statement. */

#include<conio.h>
#include<stdio.h>

void main(void)
{
  char ch = 'A', str[] = "My College";
  int num = 2;
  float fnum = 12.47;
  clrscr();
  printf("Character = %c\n", ch);
  printf("String = %s\n", str);
  printf("Integer = %d\n", num);
  printf("float = %f\n", fnum);

  getch();
}