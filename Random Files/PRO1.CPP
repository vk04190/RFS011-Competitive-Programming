#include<stdio.h>
#include<conio.h>
void main(void)
{
float a,b,c,d;
clrscr();
printf("Enter Ramesh's basic salery Rs = ");
scanf("%f", & a);
b=a*40/100;
printf("Ramesh's dearness allownces 40 Percent Rs = %1.2f",b);
c=a*20/100;
printf("\nRamesh's House Rent 20 Percent Rs = %1.2f",c);
d=a+b+c ;
printf("\nRamesh's total gross salery Rs = %1.2f",d);
getch();
}