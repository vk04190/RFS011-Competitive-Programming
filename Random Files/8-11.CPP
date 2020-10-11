/* program 8-11.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  double f=1;
  int num, i;
  // computes the product n*(n-1)*(n-2)*(n-3)*...*2*1
  printf("\n\n\n\t\tEnter the number to find its Factorial: ");
  scanf("%d", &num);

  if (num >= 0)
  {
   for(i=num; i>1; --i)
      f = f * i;
   printf("\n\n\n\t\tThe factorial of %d is %lf", num, f);
  }
  else
     printf("\n\n\n\t\t Sorry!!");

  getch();
}
