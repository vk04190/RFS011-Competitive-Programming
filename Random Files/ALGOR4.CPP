#include <stdio.h>
#include <conio.h>

void main(void)
{
	int func (int);
	int a,n;
	clrscr();
	printf("Enter a value for n: ");
	scanf("%d",&a);
	printf("Calling the function for n=%d\n",a);
	n=func(a);
	printf("\nNo.of steps=%d",n);
	getch();

}

int func(int n)
{
	int i,j,count=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		count++;
		printf("\nToday is Monday");
		}
	}
	return(count);
}