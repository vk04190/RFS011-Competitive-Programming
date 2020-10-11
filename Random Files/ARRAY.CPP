#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	int a,b,sum=0;
	int * arr;
	clrscr();
	printf("Enter size of the array: ");
	scanf("%d",&a);
	arr=(int *) malloc(a*2);

	for(b=0;b<a;b++)
	{
		printf("Enter value for slot %d: ",b);
		scanf("%d",&arr[b]);
		sum=sum+arr[b];
	}
	printf("The sum is %d",sum);

	getch();
}