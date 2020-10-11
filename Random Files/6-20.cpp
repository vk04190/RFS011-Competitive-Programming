/* program 6-20.cpp */
#include<conio.h>
#include<stdio.h>

void main(void)
{
  char character, string[25];
  int integer;
  float floating_point;

  clrscr();
  printf("\nEnter a Characer: ");
  character=getche();
  printf("\n\nEnter a String (up to 25 characters): ");
  gets(string);
  printf("\nEnter an Integer: ");
  scanf("%d", &integer);
  printf("\nEnter a Floating Point Number (up to 2 decimal places): ");
  scanf("%f", &floating_point);

  clrscr();
  printf("\n\tCharacter:                %c",character);
  printf("\n\tString:                   %s",string);
  printf("\n\tInteger:                  %d",integer);
  printf("\n\tFloating Point Number:    %.2f",floating_point);

  getch();
}
