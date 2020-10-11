/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Program of sorting using insertion sort */
#include <stdio.h>
#define MAX 20

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
main()
{
	int arr[MAX],i,j,k,n;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for (i = 0; i < n; i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d", &arr[i]);
	}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	printf("Unsorted list is :\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	/*Insertion sort*/
	for(j=1;j<n;j++)
	{
		k=arr[j]; /*k is to be inserted at proper place*/
		for(i=j-1;i>=0 && k<arr[i];i--)
			arr[i+1]=arr[i];
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		arr[i+1]=k;
		printf("Pass %d, Element inserted in proper place: %d\n",j,k);
		for (i = 0; i < n; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
	printf("Sorted list is :\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}/*End of main()*/




/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */