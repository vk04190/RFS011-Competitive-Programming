#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	int a,c,b,d,sum=0;
	int * arr;
	clrscr();
	printf("Enter row size of the array: ");
	scanf("%d",&a);
	printf("Enter column of the array: ");
	scanf("%d",&c);
	arr=(int *) malloc(a*c*2);

	for(b=0;b<a;b++)
		for(d=0;d<c;d++)
		{
			printf("Enter value for slot %d %d: ",b,d);
			scanf("%d",&arr[b,d]);
			sum=sum+(arr[b,d]);
		}
	printf("The sum is %d",sum);

	getch();
}