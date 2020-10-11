#include<stdio.h>
#include<conio.h>
void main()
{
int sume=0,sumo=0,o=0,e=0,i;
clrscr();
for(i=1;i<=20;i++)
	{
	if(i%2==0)
		{
		e++;
		sume=sume+i;
		}
	else
		{
		o++;
		sumo=sumo+i;
		}
	}
printf("No. of odd no.s is  : %d\n",o);
printf("No. of even no.s is : %d\n",e);
printf("Sum of even no.s is : %d\n",sume);
printf("Sum of odd no.s is  : %d\n",sumo);
getch();
}
