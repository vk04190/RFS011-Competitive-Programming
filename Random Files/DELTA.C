
/*PROGRAM TO GET DELTA FORMAT  @				 PRASAD.G.V.L:
																				 02211A0540
																				 CSE*/
#include<stdio.h>
#include<conio.h>
void main(){
int i,j,n;
clrscr();
printf("OUTPUT IS\n:");
printf("enter the range\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
			printf(" %d ",j);
		}
			printf("\n");
}
getch();
}
