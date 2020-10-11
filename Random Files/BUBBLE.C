/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Program of sorting using bubble sort */
#include <stdio.h>
#define MAX 20
main()
{
	int arr[MAX],i,j,k,temp,n,xchanges;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for (i = 0; i < n; i++)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Unsorted list is :\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	 printf("\n");

	/* Bubble sort*/
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	for (i = 0; i < n-1 ; i++)
	{
		xchanges=0;
		for (j = 0; j <n-1-i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
				xchanges++;
			}/*End of if*/
		}/*End of inner for loop*/
		if(xchanges==0) /*If list is sorted*/
			break;
		printf("After Pass %d elements are :  ",i+1);
		for (k = 0; k < n; k++)
			printf("%d ", arr[k]);
		printf("\n");
	}/*End of outer for loop*/
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

	printf("Sorted list is :\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}/*End of main()*/


/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */