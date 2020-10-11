/* Practical 8: Writing a Program which uses a switch statement and breaks
the program if certain condition is observed.

Writing a Program which uses a switch, case and break statements and
interconvert the temperature scales using Menu options.*/
#include<stdio.h>
#include<conio.h>

void main(void)
{
clrscr();
int i;
float c, f, k;

printf("\n\n\n");
printf("\t\t\tMENU FOR TEMPERATURE SCALE CONVERSION");
printf("\n\t\t\t_____________________________________\n\n");

printf("1. From Celsius to Fahrenheit scale\n");
printf("2. From Fahrenheit to Celsius scale\n");
printf("3. From Celsius to Kelvin scale\n");
printf("4. From Fahrenheit to Kelvin scale\n");

printf("\nEnter the MEMU option: ");
scanf("%d", &i);

switch(i)
   {
   case 1:
      printf("Enter temperature in Celsius: ");
      scanf("%f", &c);
      f = 32.0+(9.0/5.0)*c;
      printf("The temperature in Fahrenheit is = %.2f", f);
      break;
   case 2:
      printf("Enter temperature in Fahrenheit: ");
      scanf("%f", &f);
      c = 5.0/9.0*(f-32.0);
      printf("The temperature in Celsius is = %.2f", c);
      break;
   case 3:
      printf("Enter temperature in Celsius: ");
      scanf("%f", &c);
      k = c + 273.15;
      printf("The temperature in Kelvin is = %.2f", k);
      break;
   case 4:
      printf("Enter temperature in Fahrenheit: ");
      scanf("%f", &f);
      k = (5.0/9.0*(f-32.0)) + 273.15;
      printf("The temperature in Kelvin is = %.2f", k);
      break;
   default:
      printf("Invalid MENU option\n\n");
   }

getch();
}
