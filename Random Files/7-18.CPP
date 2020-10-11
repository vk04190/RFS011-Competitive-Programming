/* program 7-18.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
clrscr();
char ch;

printf("Enter the letter: ");
ch = getche();
switch(ch)
   {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
      printf(" is a vowel\n");
      break;
   default:
      printf(" is a consonant");
   }
getch();
}
