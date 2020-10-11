/* program 6-24.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
clrscr();

int temp, count;
float celsius;
for(count=1; count<=10; count++)
   {
    printf("Enter a temperature between 1 and 100: ");
    scanf("%d", &temp);
    while(temp < 0 || temp > 100)
	 {
	  printf("Invalid temperature, try again: ");
	  scanf("%d", &temp);
	 }
    celsius = (5.0/9.0)*(temp-32);
    printf("%d fahrenheit is %6.2f celsius\n", temp, celsius);
   }
getch();
}

