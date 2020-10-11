#include<stdio.h>
#include<conio.h>
void main(void)
{
int tn,ts,i;
char ano='y';

clrscr();
while(ano=='y')
{


printf("Enter Table no");
scanf("%d",&tn);
printf("Enter size of Table");
scanf("%d",&ts);
printf("\t\tTABLE OF %d SIZE=%d\n",tn,ts);
for(i=1;i<=ts;i++)
{
printf("\n\t\t%d x %d = %d\n",tn,i,tn*i);
}
printf("Enter y for another table\n");
scanf("%c",&ano);
}

getche();
}