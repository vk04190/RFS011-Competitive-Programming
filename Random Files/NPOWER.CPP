#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
float a,b;
clrscr();
printf("ENTER NUMBER=");
scanf("%f",&a);
printf("\nENTER POWER =");
scanf("%f",&b);
printf("\n%f power %f= %f",a,b,pow(a,b));
getch();
}
