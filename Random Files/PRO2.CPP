#include<conio.h>
#include<stdio.h>
void main(void)
{
clrscr();
float km,me,fe,in,cm;

printf("Type a distance between two cities in KM = ");
scanf("%f",& km);
me=km*1000;
printf("\nDistance in Meter = %1.2f",me);
fe=me*3;
printf("\nDistance in Feet = %1.2f",fe);
in=fe*12;
printf("\nDistance in Inches = %1.2f",in);
cm=in*2.5;
printf("\nDistance in Centi Meters = %1.2f",cm);
getch();
}