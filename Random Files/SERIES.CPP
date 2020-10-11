#include<stdio.h>
#include<conio.h>
main()
{
int i,a;
clrscr();
printf("GENERATE SERIES UPTO= \t\t");
scanf("%d",&a);
printf("------------------------------------------------\n");
for(i=1;i<=a;i++)
{
printf("\n\t\t\t%d\n",i);
}
getch();
}