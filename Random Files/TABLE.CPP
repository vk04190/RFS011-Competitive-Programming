#include<stdio.h>
#include<conio.h>
main()
{
int a,b,i;
char an='y';
clrscr();
while(an=='y')
{
printf("ENTER TABLE NUMBER\t\t");
scanf("%d",&a);
printf("ENTER TABLE LENGTH\t\t");
scanf("%d",&b);
printf("\n------------TABLE=%d--------LENGTH=%d-------------\n",a,b);
for(i=1;i<=b;i++)
{
printf("\t\t%d   *   %d=   %d\n",a,i,a*i);
}
printf("---------------------------------------------------\n");
printf("\t\tTO MAKE ANOTHER TABLE PRESS (Y)\n");
printf("\t\tOR PRESS ANY KEY TO EXIT\t");
scanf("%s",&an);
printf("---------------------------------------------------\n");
}
printf("\t\tTHANKS FOR USING\n");
getch();
}

