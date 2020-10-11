/*2.	Write a program that prints the square of a number the user types in, (The square is the number times itself.) use floating point.*/
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