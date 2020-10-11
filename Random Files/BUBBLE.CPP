#include<stdio.h>
#include<conio.h>
int sort(int *p);

void main(void)
{
	int arr[10];
//	int arr[10]={3,7,43,7,8,9,6,4,3,99};
	int i,count;

	clrscr();
	for(i=0;i<10;i++)
	{
		printf("Enter value for slot %d: ",i);
		scanf("%d",&arr[i]);
	}

	printf("\n");
	count=sort(arr);
	for(i=0;i<10;i++)
	{
		printf("The value in slot %d: %d\n",i,arr[i]);
	}
	printf("\nCount: %d",count);
	getch();
}


int sort(int *p)
{
	int i,j,count=0,temp;
	for(i=0;i<10;i++)
	{
		for(j=0;j<9;j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
				count++;
			}

		}
	}
	return(count);

}