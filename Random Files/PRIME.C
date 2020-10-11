/*PROGRAM FOR TESTING WHETHER PRIME OR NOT @	PRASAD.G.V.L
																							02211A0540
																							CSE*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,c1=0,c2=0;
	clrscr();
	printf(" \n	ENTER THE NUM\n");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			c1++;
		else
			c2++;
	}
	if(c1==0)
		printf("TEST NUM IS PRIME \n");
	else
		printf("TEST NUM NOT PRIME\n");
	getch();
}