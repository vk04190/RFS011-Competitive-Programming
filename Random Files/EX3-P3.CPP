/*3.	write a program that repeatedly calculates how many characters separate two letters typed in by the user until is  terminated with[return]for instance, there are two characters(‘b’ and ‘c’) between ‘a’ and ‘c’. Take advantage just s well as they do on numbers. */
/*between.c*/
/*tells how many letters between two letters*/
#include<stdio.h>
#include<conio.h>


void main(void)
{
clrscr();
char ch1,ch2;
while(ch1 !='\r')
{
printf("\nType first character;  ");
ch1=getch();
printf("\nType second character;  ");
ch2=getch();
printf("\nThere are %d characters between.",ch2-ch1-1);
}
getch();
}