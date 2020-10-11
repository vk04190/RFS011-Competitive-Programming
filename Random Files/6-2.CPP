/* program 6-2.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
clrscr();
int ch;

ch = getchar();		/* read a character */
printf("You typed: %c",ch);
printf("\nwhich corresponds to the ASCII: %d",ch);
getch();
}
