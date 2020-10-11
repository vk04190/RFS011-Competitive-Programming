/* program 7-17.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
clrscr();
int num;

printf("Enter a Number from -1 to 4: ");
scanf("%d", &num);

switch(num)
   {
   case -1:
      printf("\nInput value = -1");
      break;
   case 0:
      printf("\nInput value = 0");
      break;
   case 1:
   case 2:
   case 3:
   case 4:
      printf("\nInput value between 1-4");
      break;
   default:
      printf("Input value < -1 or > 4");
   }

getch();
}
