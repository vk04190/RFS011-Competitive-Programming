/* program 7-16.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
clrscr();
int i;

printf("Enter a number between 1 and 4: ");
scanf("%d", &i);
switch(i)
   {
   case 1:
      printf("one");
      break;
   case 2:
      printf("two");
      break;
   case 3:
      printf("three");
      break;
   case 4:
      printf("four");
      break;
   default:
      printf("unrecognised number");
   }
getch();
}
