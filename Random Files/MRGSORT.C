/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Program of sorting using merge sort without recursion*/
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#define MAX 30

main()
{
	int arr[MAX],temp[MAX],i,j,k,n,size,l1,h1,l2,h2;

	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Unsorted list is : ");
	for( i = 0 ; i<n ; i++)
		printf("%d ", arr[i]);

	/*l1 lower bound of first pair and so on*/
	for(size=1; size < n; size=size*2 )
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	{
		l1=0;
		k=0;  /*Index for temp array*/
		while( l1+size < n)
		{
			h1=l1+size-1;
			l2=h1+1;
			h2=l2+size-1;
			if( h2>=n ) /* h2 exceeds the limlt of arr */
				h2=n-1;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
			/*Merge the two pairs with lower limits l1 and l2*/
			i=l1;
			j=l2;
			while(i<=h1 && j<=h2 )
			{
				if( arr[i] <= arr[j] )
					temp[k++]=arr[i++];
				else
					temp[k++]=arr[j++];
			}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
			while(i<=h1)
				temp[k++]=arr[i++];
			while(j<=h2)
				temp[k++]=arr[j++];
			/**Merging completed**/
			l1=h2+1; /*Take the next two pairs for merging */
		}/*End of while*/

		for(i=l1; k<n; i++) /*any pair left */
			temp[k++]=arr[i];
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

		for(i=0;i<n;i++)
		     arr[i]=temp[i];

		printf("\nSize=%d \nElements are : ",size);
		for( i = 0 ; i<n ; i++)
			printf("%d ", arr[i]);
	}/*End of for loop */
	printf("Sorted list is :\n");
	for( i = 0 ; i<n ; i++)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		printf("%d ", arr[i]);
	printf("\n");
}/*End of main()*/






/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */