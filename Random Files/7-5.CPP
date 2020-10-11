/* program 7-5.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int taxable;
  float cost, tax;
  tax = 0.0;

  printf("Enter the cost of the item: ");
  scanf("%f", &cost);
  printf("\nEnter Y if the item is taxable, N if non-taxable: ");
  taxable = getch();
  if(taxable == 'Y')
     tax = cost * 0.06;
  printf("\n\nThe total due is %.2f", cost + tax);

  getch();
}
