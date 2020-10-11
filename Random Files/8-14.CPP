/* program 8-14.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int num;
  printf("\n\n\n\t\tEnter a number: ");
  scanf("%d", &num);

  while(num != 0)
  {
    printf("*");
    num--;
  }
  printf("\n");

  getch();
}
