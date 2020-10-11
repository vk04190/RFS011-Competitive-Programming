/* program 7-10.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  const float cut_off = 100000;
  const float tax_rate = 0.1;

  float cost, tax;

  printf("\nLuxury tax computer ... Enter cost of car: ");
  scanf("%f", &cost);

  if(cost > cut_off)
     {
       tax = (cost - cut_off)*tax_rate;
       printf("\nFor a car costing Rs. %8.2f, a luxury tax of Rs. %8.2f is due.", cost, tax);
     }
  printf("\n\nThanks you for cooperation.");

  getch();
}
