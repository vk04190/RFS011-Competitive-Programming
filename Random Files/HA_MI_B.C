#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int c,i;
float tot,ha,ma;
clrscr();
for(i=0;i<10;i++)
	{
	printf("\n\tenter items brought:\t\n1.mill\t\n");
	printf("2.handloom\t\n3.both\t\n4.exit\t:");
	scanf("%d",&c);
	switch(c)
		{
		case 3:
		case 1:
		printf("enter amount of mill cloth");
		scanf("%d",&ma);
		if(ma>100&&ma<=200)
		ma=(ma/100)*95;
	else
		if(ma>200&&ma<=300)
		ma=92.5*(ma/100);
	else
		if(ma>300)
		ma=90*(ma/100);

	if(c==1)
	break;
		case 2:
		printf("enter amount of handloom cloth");
		scanf("%d",&ha);
		if(ha<=100)
		ha=95*(ha/100);
	else
		if(ha>100&&ha<=200)
		ha=92.5*(ha/100);
	else
		if(ha>200&&ha<=300)
		ha=90*(ha/100);
	else
		if(ha>300)
		ha=85*(ha/100);

	if(c==2||c==3)
	break;
		case 4:
		exit(0);
		break;
	}
tot=ha+ma;
printf("total amount to be paid %f ",tot);

}
getch();
}