/*3.	Modify the lines2.c program to draw four lines, the first two the same as in lines2.c, the third a vertical line passing through the center of the rectangle (where the first two line cross). And the fourth a horizontal line passing through the center of the rectangle. The effect is something like a British flag. Use logical operators.*//* checker2.c */
/* draws a checkboard on the screen */
#include<stdio.h>
#include<conio.h>
void main(void)
{
clrscr();
int x,y,z;
for(y=1; y<=8; y++)		/* stepping down screen */
for(z=1;z<=3;z++)		/* 3 lines per square */
{
for(x=1; x<=8; x++)		/*stepping across screen */
if(  (x+y)%2==0)		/*even-numbered square? */
/*printf 6 rectangles */
printf("\xDB\xDB\xDB\xDB\xDB\xDB");
else printf("      ");		/* printf 6 blank spaces */
if(y*z<24)			/* print new line, */
printf("\n")			/* except on last line */

}

getch();
}