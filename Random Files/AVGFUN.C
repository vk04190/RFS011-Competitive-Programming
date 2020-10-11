/*PROGRAM FOR FINDING AVERAGE @			PRASAD.G.V.L
																		 02211A0540CSE*-*/
#include<stdio.h>
#include<conio.h>
void main()
{
		int marks[10],i,aa=0,a=0,ba=0;
		clrscr();
		printf("enter the marks\n");
		for(i=0;i<10;i++)
		scanf("%d",&marks[i]);
		for(i=0;i<10;i++)
		{
				if( marks[i]<55)
				ba++;
				else if(marks[i]>55)
				aa++;
				else
				a++;
	 }
	 printf("AVERAGE STDS ARE %d\n",a);
	 printf("ABOVE AVG STDS ARE %d\n",aa);
	 printf("BELOW STDS ARE %d\n",ba);
	 getch();
	 }

	 ///////OUTPUT///////////////////////////////////////////////
