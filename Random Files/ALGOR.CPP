#include <stdio.h>
#include <conio.h>

void main(void)
{
	int func (int);
	int n;
	clrscr();
	printf("Calling the function for n=10\n");
	n=func(10);
	printf("\nNo.of steps=%d",n);
	getch();

}

int func(int n)
{
	int i=0,count=0;
	while(i<n)
	{
		count++;
		printf("\n%d. Today is Monday",i);
		if(i%2==1)
			i=i+2;
		else
			i++;
	}
	return(count);
}