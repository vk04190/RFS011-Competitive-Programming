/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/*Program of sorting using quick sort through recursion*/
#include<stdio.h>
#define MAX 30

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
enum bool { FALSE,TRUE };
main()
{
	int array[MAX],n,i;
	printf("Enter the number of elements : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter element %d : ",i+1);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		scanf("%d",&array[i]);
	}

	printf("Unsorted list is :\n");
	display(array,0,n-1);
	printf("\n");

	quick(array,0,n-1);

	printf("Sorted list is :\n");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	display(array,0,n-1);
	printf("\n");

}/*End of main() */

quick(int arr[],int low,int up)
{
	int piv,temp,left,right;
	enum bool pivot_placed=FALSE;
	left=low;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	right=up;
	piv=low; /*Take the first element of sublist as piv */

	if(low>=up)
		return;
	printf("Sublist : ");
	display(arr,low,up);

	/*Loop till pivot is placed at proper place in the sublist*/
	while(pivot_placed==FALSE)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	{
		/*Compare from right to left  */
		while( arr[piv]<=arr[right] && piv!=right )
			right=right-1;
		if( piv==right )
		      pivot_placed=TRUE;
		if( arr[piv] > arr[right] )
		{
			temp=arr[piv];
			arr[piv]=arr[right];
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
			arr[right]=temp;
			piv=right;
		}
		/*Compare from left to right */
		while( arr[piv]>=arr[left] && left!=piv )
			left=left+1;
		if(piv==left)
			pivot_placed=TRUE;
		if( arr[piv] < arr[left] )
		{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
			temp=arr[piv];
			arr[piv]=arr[left];
			arr[left]=temp;
			piv=left;
		}
	}/*End of while */

	printf("-> Pivot Placed is %d -> ",arr[piv]);
	display(arr,low,up);
	printf("\n");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

	quick(arr,low,piv-1);
	quick(arr,piv+1,up);
}/*End of quick()*/
display(int arr[],int low,int up)
{
	int i;
	for(i=low;i<=up;i++)
		printf("%d ",arr[i]);
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */