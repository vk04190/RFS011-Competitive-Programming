		/*  program for armstrong or not	@				PRASAD.G.V.L
																							02211A0540
																							CSE*/


#include<stdio.h>
#include<conio.h>
void main()
{
		int n,r,sum=0,temp;
		clrscr();
		printf("\n\nOUTPUT \n");
		printf("enter the num\n");
		scanf("d",&n);
		temp=n;
		while(n!=0)
		{
			r=n%10;
			sum=sum+ r*r*r;
			n=n/10;
		}
		 printf("%d",sum);
		if(temp==sum)
		printf("\nthe num is  armstrong");
		else
		printf("\nthe num is not armstrong");
		getch();
}