/* program 7-20.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
clrscr();
char grade;

printf("Enter Grade of the Student: ");
scanf("%c", &grade);

switch(grade)
   {
   case 'A':
   case 'a':
      printf("Excellent");
      break;
   case 'B':
   case 'b':
      printf("Good");
      break;
   case 'C':
   case 'c':
      printf("O.K.");
      break;
   case 'D':
   case 'd':
   case 'F':
   case 'f':
      printf("Poor, student is ");
      printf("on probation");
      break;

   default:
      printf("Invalid letter grade");
   }

getch();
}
