#include <stdio.h>
#include <conio.h>
void main(void)
{
clrscr();
float length,breadth,radius,arear,perimeter,areac,cir;
printf("Enter length of rectangle : ");
scanf("%f",&length);
printf("Enter breadth of rectangle : ");
scanf("%f",&breadth);
printf("Enter radius of circle : ");
scanf("%f",&radius);
arear = length * breadth;
perimeter = (2 * length) + (2 * breadth);
cir = 3.14159 * (2 * radius);
areac = 3.14159 * (radius * radius);
printf ("\nThe area of rectangle is ... %1.1f\n",arear);
printf ("\nThe perimeter of rectangle is ... %1.1f\n",perimeter);
printf ("\nThe area of circle is ... %1.1f\n",areac);
printf ("\nThe circumference of circle is ... %1.1f\n",cir);
getch();
}