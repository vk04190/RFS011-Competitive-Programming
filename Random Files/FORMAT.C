/*PROGRAM FOR DELTA FORMAT		@						PRASAD.G.V.L
																					02211A0540 CSE*/
#include<stdio.h>
#include<conio.h>
void main()
{
		int i,j,k,n;
		clrscr();
		printf("ENTER THE RANGE");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(k=1;k<=(n-i);k++)
			printf(" ");
			for(j=1;j<=i;j++)
				printf("%2d",i);
				printf("\n");
		}
	 getch();
 }
