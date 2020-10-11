/*	PROGRAM TO FIND THE SPACE OCCUPIED BY POINTER VARIABLE
																											02211A0540 CSE
																											PRTASAD.G.V.L */
#include<stdio.h>
#include<conio.h>
	void main()
	{
		int i,*p;
		clrscr();
		p=&i;
	 printf("enter ur i value");
	 scanf("4d",&i);
		printf("%d %d %u %x",i,*p,&i,&*p);
		printf("\n%d %d",sizeof(&i,i));
		getch();
	}