#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int tm,ts,pm,ps,i,a;
clrscr();
printf("MAX MARKS OF THEORY WITH SESSIONAL=100\n");
printf("MARKS RESERVED FOR SESSIONAL IN THEORY=25\n");
printf( "MAX MARKS OF PRACTICAL WITH SESSIONAL=50\n");
printf("MARKS RESERVED FOR SESSIONAL IN PRACTICAL=20\n");
printf("---------------------------------------------------------\n");
printf("---------------------------------------------------------\n\n");
printf("HOW MANY STUDENTS ARE THERE IN CLASS=   ");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
printf("_________________________________________________________\n\n");
printf("FOR STUDENT %d\n",i);
printf("_________________________________________________________\n");
printf("\nEnter Theory Marks=\t ");
scanf("%d" ,&tm);
printf("\nEnter theory sessional=  ");
scanf("%d",&ts);
printf("\nEnter prac marks= \t ");
scanf("%d",&pm);
printf("\nEnter prac sessional=    ");
scanf("%d",&ps);
printf("\nTOTAL MARKS=\t\t %d\n",tm+ts+pm+ps);
}
clrscr();


printf("_________________________________________________________________________\n\n");
printf("S.no. Theory marks Theory sessional Prac marks Prac sessional Total marks\n");
printf("____________________________________________________________________________\n\n");
for(i=1;i<=a;i++)
{
printf("%d\t%d\t\t%d\t\t%d\t\t%d\t%d\n",i,tm,ts,pm,ps,tm+ts+pm+ps);
}
getch();
}