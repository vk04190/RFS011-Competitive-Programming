/* program 8-10.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int i;

    for(i=32; i<128; i++)     		/* code from 32 to 127 */
       printf("%3d = %c\t", i, i);  	/* print as number and as char */

  getch();
}
