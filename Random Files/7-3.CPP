/* program 7-3.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  float  cost, tax, luxury, total;
  luxury = 0.0;
  printf("Enter the cost of the item: ");
  scanf("%f", &cost);
  tax = cost * 0.06;
  if (cost > 40000.00)
  {
     luxury = cost * 0.005;
     printf("The luxury tax is %.2f\n", luxury);
  }
  total = cost + tax + luxury;
  printf("The total cost is %.2f", total);

  getch();
}
