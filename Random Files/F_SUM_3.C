			  /*functions (iii)*/
	#include<stdio.h>
	#include<conio.h>
	void main()
	{
		int a,b,c;
		int sum(int a,int b);
		clrscr();
		printf("Enter a and b:");
		scanf("%d%d",&a,&b);
		c=sum(a,b);
		printf("The sum is= %d",c);
		getch();
	}

		int sum(int x,int y)
	{
		int sum;
		sum=x+y;
		return(sum);
	}