/* Practical 7(a): Draw a Check-board and print it using if-else statement,
and extend the program using nested if-else. */

#include<stdio.h>
#include<conio.h>
void main (void)
{
 clrscr();
 int a, b;

 for(b=1; b<12; b++)		/* stepping down */
    {
    for(a=1; a<12; a++)		/* stepping right */
       if((a+b)%2 == 0)         /* even numbered square */
	  printf("\xDB");	/* print filled square */
       else
	  printf(" ");         /* print blank square */
    printf("\n");               /* new line */
    }

 getch();
}
