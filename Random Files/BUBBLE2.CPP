#include<stdio.h>
#include<conio.h>

void main(void)
{
	int arr[10];
//	int arr[]={3,7,43,7,8,9,6,4,3,99};
	int i,j,count=0,temp;

	clrscr();
	for(i=0;i<10;i++)
	{
		printf("Enter value for slot %d: ",i);
		scanf("%d",&arr[i]);
	}

	for(i=0;i<10;i++)
	{
		for(j=0;j<9;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				count++;
			}

		}
	}

	for(i=0;i<10;i++)
	{
		printf("The value in slot %d: %d\n",i,arr[i]);
	}
	printf("\nCount: %d",count);
	getch();
}
