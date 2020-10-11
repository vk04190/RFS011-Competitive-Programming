/* program 7-19.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
clrscr();
int c;
float a, b;

printf("\n\n\n");
printf("\t\t\tMENU");
printf("\n\t\t\t____\n\n");
printf("1. Add\n");
printf("2. Subtraction\n");
printf("3. Multiply\n");
printf("4. Divide\n");

printf("\n");
printf("Enter the Menu option: ");
scanf("%d", &c);
printf("Enter first number: ");
scanf("%f", &a);
printf("Enter second number: ");
scanf("%f", &b);

switch(c)
   {
   case 1:
      printf("%.2f", a+b);
      break;
   case 2:
      printf("%.2f", a-b);
      break;
   case 3:
      printf("%.2f", a*b);
      break;
   case 4:
      if (b != 0)
      printf("%.2f", a/b);
      break;
   default:
      printf("Invalid Menu option\n\n");
   }

getch();
}
