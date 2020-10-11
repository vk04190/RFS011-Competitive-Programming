/* program 6-21.cpp */
#include<conio.h>
#include<stdio.h>

void main(void)
{
  int num1, num2;

  clrscr();
  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2);
  num1 = num1 + 5;
  num2 = 3 * num2;
  printf("\tnum1 = %d\n\tnum2 = %d\n", num1, num2);

  getch();
}
