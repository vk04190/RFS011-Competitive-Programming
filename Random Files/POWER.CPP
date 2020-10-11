#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
double s,a,i;
clrscr();
printf("ENTER THE NUMBER TO BE POWERED\t\t");
scanf("%lf",&a);
printf("ENTER HOW MANY POWERS u WANT  \t\t");
scanf("%lf",&s);
printf("-------------------------------------------------------------\n");
for(i=1.000;i<=s;i++)
{
printf("%lfpower%lf   =   %lf\n",a,i,pow(a,i));
}
getch();
}