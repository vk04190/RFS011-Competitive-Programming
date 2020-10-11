#include<conio.h>
#include<stdio.h>
void main(void)
{
float f,c;
clrscr();
printf("Type temprature of your city = ");
scanf("%f",& f);
c=(f-32)*5/9;
printf("Temprature in Centigrade of your city = %1.2f ",c);
}