/* program 8-4.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int i;
  printf("Enter an integer: ");
  scanf("%d", &i);
  for ( ; i; i--)
     printf("Take Care\n");

  getch();
}
