/* program 7-6.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int dependents;
  float income;

  puts("Please enter your income");
  scanf("%f", &income);
  puts("Please enter the number of dependents");
  scanf("%d", &dependents);
  if(income < 5000 && dependents > 5)
     puts("You owe no income tax");

  getch();
}
