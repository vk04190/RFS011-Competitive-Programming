# include <conio.h>
# include <stdio.h>

void main(void)
{
	void sort(int *a);

	int a[3],b;

	clrscr();

	for(b=0;b<3;b++)
	{
		printf("Enter number for slot %d :",b);
		scanf("%d",&a[b]);
	}

	sort(a);

	for(b=0;b<3;b++)
	{
		printf("\nNumber is %d",a[b]);
	}
	getch();
}

void sort(int *a)
{
	int b,c,temp;

	for(c=0;c<3;c++)	// formula is n*(n-1)
	for(b=0;b<2;b++)
	{
		if(a[b+1]<a[b])
		{
		    temp=a[b+1];
		    a[b+1]=a[b];
		    a[b]=temp;
		}
	}

}