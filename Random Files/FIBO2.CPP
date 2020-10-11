# include <stdio.h>
# include <conio.h>

void main(void)
{
	long a,b,c,i,z;
	clrscr();
	a=b=c=1;
	printf("Enter upper limit for Fibonacci Series (Max. 47):");
	scanf("%ld",&z);

	for(i=1;c<z;i++)
	{
		if(i>2)
		{
		c=a+b;
		a=b;
		b=c;
		}
		printf("%ld\n",c);
	}
	getch();
}