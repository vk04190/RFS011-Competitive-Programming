/* program 8-29.cpp */
#include<stdio.h>
#include<conio.h>
void main (void)
{
 clrscr();
 int a, b;

 for(b=1; b<12; b++)		/* stepping down */
    {
    for(a=1; a<12; a++)		/* stepping right */
       if((a+b)%2==0 && a!=b)
	  printf("\xDB");	/* print filled square */
       else if(a==b)        	/* left top diagonal */
	  printf("\xB0"); 	/* print gray */
      else
	  printf(" ");         /* print blank square */
    printf("\n");               /* new line */
    }

 getch();
}
