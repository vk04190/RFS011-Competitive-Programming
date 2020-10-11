/*3.	Modify the lines2.c program to draw four lines, the first two the same as in lines2.c, the third a vertical line passing through the center of the rectangle (where the first two line cross). And the fourth a horizontal line passing through the center of the rectangle. The effect is something like a British flag. Use logical operators.*/
/*LINES.C*/
/*PRINTS FOUR CROSSED LINES ON SCREEN*/
#include<stdio.h>
#include<conio.h>
	void main(void)
	{
		clrscr();
		int x, y;
		for(y=1;y<24;y++)		/*step down screen*/
	{
		for(x=1;x<24;x++)		/*step across screen*/
		if(x==y||x==12||y==12)
		printf("\xDB");			/*print solid color*/
		else
		printf("\xBO");			/*print gray*/
		printf("\n");			/*next line*/
	}
		getch();
	
	}