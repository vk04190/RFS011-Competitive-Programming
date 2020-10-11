/*age 2.c */
/* calculate age in minutes */
#include<stdio.h>
#include<conio.h>

void main(void)
{
clrscr();
float years,minutes;

printf("please type your age in years:");
scanf("%f", &years);

minutes = years * 365 * 24 * 60;
printf("Your are %.1f minutes old.\n",minutes);

getch();
}