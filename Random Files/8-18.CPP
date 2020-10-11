/* program 8-18.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  double f;
  int num;
  // computes the product n*(n-1)*(n-2)*(n-3)*...*2*1

  while(num != 0)
  {
   printf("\n\n\n\t\tEnter the number to find its Factorial: ");
   scanf("%d", &num);

     f = 1;
     while(num > 1)
	 {
	  f = f * num;
	  num--;
	 }
   printf("\t\tThe factorial is %lf", f);
  }
}
