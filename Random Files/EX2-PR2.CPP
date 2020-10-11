#include<stdio.h>
#include<conio.h>
void main(void)
/* squar.c */
/* finds square of typed-in number */
{
float square,number;
clrscr();
printf("Type in number to be squared:  ");
scanf("%f",&number);
square = number * number;
printf("Square is %1f", square);

getch();
}