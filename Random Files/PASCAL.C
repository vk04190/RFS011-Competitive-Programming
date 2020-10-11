/*PROGRAM FOR PASCAL TRIANGLE  @				PRASAD.G.V.L
																				02211A0540 ,
																				CSE*/
#include<stdio.h>
#include<conio.h>
void main()
{   int fact(int n);
		int c,i,j,n;
		clrscr();
		printf("entert the range\n");
		scanf("%d",&n);
		for(i=0;i<=n;i++)
		{
			printf(" ");
			for(j=0;j<=i;j++)
			{
				if(i>=j)
				{
					c=fact(i)/(fact(i-j)*fact(j));
					printf("%3d",c);
					printf(" ");
				}
			}
			printf("\n");
	 }
	 printf("\t");
				getch();
}

int fact(int x)
{
	int i,fact=1;
	for(i=1;i<=x;i++)
	fact*=i;
	return(fact);
}