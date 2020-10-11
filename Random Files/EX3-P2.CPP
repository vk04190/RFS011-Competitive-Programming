#include<stdio.h>
#include<conio.h>

void main(void)
/* charcnt3.c */
/* counts characters in a phrase typed in */
/* until period is typed */
{

int count=0;
clrscr();
printf("Type in phrase:\n");
while(getch() != '.')
count++;
printf("\nCharacter count is %d",count);
getch();
}