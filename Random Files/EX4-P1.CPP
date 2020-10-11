/*1.	write a program that will ask the user how fast he or  she drives, and then print out that response a police officer would make to the following speed ranges : >75,>55, >45, <45. Use nested if-else statements.*/
/* speed.c */
/* prints appropriate responses to user's speed */
#include<stdio.h>
#include<conio.h>
void main(void)
{
int speed;
clrscr();
printf("Please type the speed you normally");
printf("\n Travel in a 55 mph zpne:  ");
scanf("%d",&speed);
if (speed>55)
printf("I'll let you to head quarters, buddy. ");
else
if(speed>55)
printf("\nI'll let you of with a warning, this time.");
else
if(speed>45)
printf("\nHave a good day,sir.");
else
printf("\nCan't you get the lead out, buddy");

getch();
}