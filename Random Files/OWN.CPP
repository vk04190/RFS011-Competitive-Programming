#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
double a,i;
clrscr();
printf("enter number to be powered=");
scanf("%fl",&a);
printf("enter power=");
scanf("%fl",&i);
printf("%flpow%fl=%fl",a,i,pow(a,i));
getch();
}