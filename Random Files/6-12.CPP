/* program 6-12.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  int num;
  float fnum;
  char letter, name[15];

  clrscr();

  printf("Type \n\tinteger, \n\tfloat, \n\tcharacter and \n\tstring\n");
  scanf("%d %f %c %s", &num, &fnum, &letter, name);

  printf("\n\tInteger  = 	%d", num);
  printf("\n\tFloat    = 	%.2f", fnum);
  printf("\n\tLetter   = 	%c", letter);
  printf("\n\tName     = 	%s", name);

  getch();
}