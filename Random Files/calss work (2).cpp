/* Practical 3: Writing a Program which uses operator (calculate the area of
triangle, volume of sphere and arrange the resultant values in ascending order).*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.1415927

void main(void)
{
float a, b, r, t, s;

clrscr();

printf("\n\n\t\tEnter the value for Altitude of a Triangle. ");
scanf("%f", &a);
printf("\n\n\t\tEnter the value for Base of a Triangle. ");
scanf("%f", &b);
printf("\n\n\t\tEnter the value for Radius of a Sphere. ");
scanf("%f", &r);

t=(1.0/2.0)*(a*b);
s=(4.0/3.0)*pi*pow(r,3);

	if (t<s)
		{
 		printf("\n\n\t\tArea of Triangle = %.2f",t);
		printf("\n\n\t\tArea of Sphere = %.2f",s);
		}
	else
 		{
 		printf("\n\n\t\tArea of Sphere = %.2f",s);
		printf("\n\n\t\tArea of Triangle = %.2f",t);
  		}
getch();
}
