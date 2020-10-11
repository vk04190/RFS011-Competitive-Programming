/* program 6-13.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  int a, b, c, d;

  clrscr();

  printf("Enter the four integers:\n");
  scanf("%d %o %u %x", &a, &b, &c, &d);

  printf("The input displayed as decimal integers is:\n");
  printf("%d %d %d %d", a, b, c, d);

  getch();
}