/* box2.c */
/* draw 4x4 box */
#include<stdio.h>
#include<conio.h>

void main(void)
{
clrscr();

printf("\xC9\xCD\xCD\xBB\n");	/* top line */
printf("\xBa  \xBA\n");         /* two spaces in the mid */
printf("\xBA  \xBA\n");          /* ditto */
printf("\xC8\xCD\xCD\xBC\n");   /* bottom line */

getch();

}