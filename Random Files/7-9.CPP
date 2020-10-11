/* program 7-9.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  float num;
  int choice;
  printf("Enter value: ");
  scanf("%f", &num);
  printf("\n1: feet to metres, \n2: metres to feet ");
  printf("\n\nEnter choice: ");
  scanf("%d", &choice);
  if(choice == 1)
     printf("%f", num/3.281);
  if(choice == 2)
     printf("%f", num*3.281);

  getch();
}
