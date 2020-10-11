/*	PROGRAM TO FIND ORDER & 2ndLARGEST IN AN ARRAY @  PRASAD.G.V.L
																												02211A0540
																												CSE*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int p[10],i,j,small,large;
	clrscr();
	printf("enter the elements");
	for(i=0;i<10;i++)
		scanf("%d",&p[i]);
	 for(j=0;j<10;j++)
	   for(i=0;i<10;i++)
	   {
		large=p[i];
		if(p[i]>p[i+1])
		{       /// large=p[i];
			 p[i]=p[i+1];
			 p[i+1]=large;
		}
	 }

	   printf("order is:\n");
	 for(i=0;i<10;i++)
	 {
	 printf(" %d",p[i]);
	 }
	   i--;
       printf("  the second largest is %d",p[i-1]);
	 getch();
}