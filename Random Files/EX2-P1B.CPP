/*age 2.c */
/* calculate age in minutes */
#include<stdio.h>
#include<conio.h>

void main(void)
{
clrscr();
float years,minutes;

printf("please type your age in years:\n");
scanf("%f", &years);

minutes = years * 365 * 24 * 60;
printf("You are %.1f minutes old.\n",minutes);

int days = years * 365;
printf("\nYou are %.1d days old.",days);

int hours = years * 365 * 24;
printf("Your are %.1d hours old.\n",hours);

int second = years * 365 * 24 * 60 * 60;
printf("You are %.1d second old\n",second);

int week = years * 50;
printf("You are %.1d week old.\n",week);

int months = years * 12;
printf("You are %d month old\n",months);

getch();
}