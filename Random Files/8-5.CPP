/* program 8-5.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int f;
  float c;
     puts("Fahrenheit\tCelsius\n");
     for (f=32; f <= 40; f++)
     {
     c = 5.0/9.0*(f-32.0);
     printf("%d\t\t%6.2f\n", f, c);
     }
  getch();
}
