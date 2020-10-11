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
	while(n!=-1)
	{
	count=0;
	for(i=n;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
		count++;
		printf("\nToday is Monday");
		}
	}
	printf("\nNo.of steps=%d\n",count);
	scanf("%d",&n);
	}
	return(count);
}