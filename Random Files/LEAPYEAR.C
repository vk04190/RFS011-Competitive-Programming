/*PROGRAM TO TEST LEAP OR NOT   			@							G.V.L.PRASAD
																										022211A0540
																										CSE*/
#include<stdio.h>
#include<conio.h>
void main()
{
	 long	int year,i;
	 for(i=1;i<=5;i++)
	{
		printf("ENTER THE YEAR U WANT TO TEST\n");
		scanf("%ld",&year);
	if(year%4==0)
			printf("test year is leap\a");
	else
			printf("test year not leap\a");
	}
			getch();
}