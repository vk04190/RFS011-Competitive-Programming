/* program 7-7.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int num;
  printf("enter a number: ");
  scanf("%d", &num);
  if(num > 0)
     printf("number is positive");
  if(num < 0)
     printf("number is negative");

  getch();
}
