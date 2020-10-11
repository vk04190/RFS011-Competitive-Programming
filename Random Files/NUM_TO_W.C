/*PROGRAM TO TRNSF NUMBER TO WORDS @ 			PRASAD.G.V.L :
																					02211A0540*/

#include<stdio.h>
#include<conio.h>
void main()
{
	long int n,x=0,r1,r2;
	clrscr();
	printf("enter the num\n");
	scanf("%ld",&n);
	while(n!=0)
{
	r1=n%10;
	x=x*10+r1;
	n=n/10;
}

		while(x!=0)
		{
			r2=x%10;
			switch(r2)
			{
				case 0:printf("  zero");break;
				case 1:printf("  one");break;
				case 2:printf("  two");break;
				case 3:printf("  thrree");break;
				case 4:printf("  four");break;
				case 5:printf("  five"); break;
				case 6:printf("  six");break;
				case 7:printf("  seven");break;
				case 8:printf("  eight");break;
				case 9:printf("  nine");break;
			}
			x=x/10;
	 }
	 getch();

	 }



