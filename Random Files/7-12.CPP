/* program 7-12.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int num1, num2;
  printf("enter first number: ");
  scanf("%d", &num1);
  printf("enter second number: ");
  scanf("%d", &num2);
  if(num2 == 0)
     printf("cannot divide by zero");
  else
     printf("answer is: %d", num1/num2);

  getch();
}
