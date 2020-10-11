/* program 6-1.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
clrscr();
char ch;

ch = getchar();		/* read a character */
printf("You typed: %c",ch);
printf("\nwhich corresponds to the ASCII: %d",ch);
getch();
}
