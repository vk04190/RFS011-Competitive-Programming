	/*PROGRAM FOR SURVEY OF ACAR SHOWROOM	@	PRASAD.G.V.L
																					02211A0540
																					CSE*/
#include<stdio.h>
#include<conio.h>
struct data
{
	char car[15];
	struct date
	{
		int month;
		int year;
	}a;
	long int price;
};
void main()
{
	struct data a[10];
	int i,n;
	clrscr();
	printf("enter ur capacity\n");
	scanf("%d",&n);
	printf("ENTER UR DETAILS HERE\n");
	printf("______________________\n");
	for(i=0;i<n;i++)
	{
		printf("enter ur car name%d\n",i+1);
		scanf("%s",&a[i].car);
		printf("enter ur date of purchase\n");
		scanf("%d %d",&a[i].a.month,&a[i].a.year);
		printf("enter the cost\n");
		scanf("%ld",&a[i].price);
	}
		printf("CHECK UR DETAILS HERE\n");
	for(i=0;i<n;i++)
	{
		printf(" ur car name %s\n",a[i].car);
		printf(" ur date of purchase %d %d\n",
											a[i].a.month,a[i].a.year);
		printf(" ur car cost: %ld\n",a[i].price);
	}
				 getch();
	}




