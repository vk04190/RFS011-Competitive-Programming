/* Practical 7(b): Extend the Check-board using nested if-else statement. */

#include<stdio.h>
#include<conio.h>
void main (void)
{
 clrscr();
 int a, b;

 for(b=1; b<12; b++)		/* stepping down */
    {
    for(a=1; a<12; a++)		/* stepping right */
       if(a==b)        		/* left top diagonal */
	  printf("\xB0"); 	/* print grey */
       else if((a+b)%2==0)
	  printf("\xDB");    	/* print filled square */
       else
	  printf(" ");        	/* print blank square */
    printf("\n");              	/* new line */
    }

 getch();
}
