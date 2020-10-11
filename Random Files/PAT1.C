/****************************************************************************
		    PROGRAM TO PRINT THE PATTERN
			    123454321			NAME:M PRASHANTH
			     1234321			ROLL NO:02211A0437
			      12321				BRANCH:E C E
			       121
				1
*****************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n,r;
clrscr();
printf("enter the value of n:");
scanf("%d",&n);
for(i=n;i>=0;i--)
{
for(k=1;k<=(40-i);k++)
printf(" ");
for(j=1;j<=i;j++)
printf("%d",j);
for(r=j-2;r>=1;r--)
printf("%d",r);
printf("\n");
}
getche();
}