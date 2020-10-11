/* program 8-20.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int num;
  char repeat;
  do
  {
   printf("\n\nPlease enter a number: ");
   scanf("%d", &num);
   printf("The square of your number is = %d", num*num);
   printf("\n\nDo you wish to continue y/n: ");
   repeat = getche();
   }
  while(repeat == 'y' || repeat == 'Y');
}
