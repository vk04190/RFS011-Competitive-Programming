/*3.	Rewrite the box c program so it draws a similar box, but one that is four characters wide and four characters tall.*/
/* between.c */
/*tells how many letters between two letters */
#include<stdio.h>
#include<conio.h>

	void main(void)
		{
			char ch1, ch2;
			while(ch1 != '\r')
			clrscr();
		{
			printf("\nType first character:  ");
			ch1=getch();
			
			printf("\nType second character:  ");
			ch2=getch();
			
			printf("\nThere are %d charcter between .",ch2-ch1-1);
			
			getch();

		}
		
		}