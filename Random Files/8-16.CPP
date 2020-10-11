/* program 8-16.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int i;

    i = 32;                             /* initialisation to 32 */
    while(i < 128)     			/* code from 32 to 127 */
       {
       printf("%3d = %c\t", i, i);  	/* print as number and as char */
       i++;				/* increment */
       }
  getch();
}
