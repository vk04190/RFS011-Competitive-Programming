/* program 8-15.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  float num;
  printf("\n\nEnter an input number: ");
  scanf("%f", &num);

  while(num < 0 || num >=1)
  {
    printf("\n\nYou got it wrong");
    printf("\n\nEnter a character: ");
    scanf("%f", &num);
  }
}
