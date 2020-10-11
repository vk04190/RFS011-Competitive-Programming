/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Program of sorting through heapsort*/
# include <stdio.h>

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int arr[20],n;

main()
{
	int i;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d : ",i+1);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		scanf("%d",&arr[i]);
	}
	printf("Entered list is :\n");
	display();

	create_heap();

	printf("Heap is :\n");
	display();

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	heap_sort();
	printf("Sorted list is :\n");
	display();
}/*End of main()*/

display()
{       int i;
	for(i=0;i<n;i++)
		printf("%d  ",arr[i]);
	printf("\n");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}/*End of display()*/

create_heap()
{
	int i;
	for(i=0;i<n;i++)
		insert(arr[i],i);
}/*End of create_heap()*/

insert(int num,int loc)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
	int par;
	while(loc>0)
	{
		par=(loc-1)/2;
		if(num<=arr[par])
		{
			arr[loc]=num;
			return;
		}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		arr[loc]=arr[par];
		loc=par;
	}/*End of while*/
	arr[0]=num;
}/*End of insert()*/


heap_sort()
{
	int last;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	for(last=n-1; last>0; last--)
	   del_root(last);
}/*End of del_root*/

del_root(int last)
{
	int left,right,i,temp;
	i=0; /*Since every time we have to replace root with last*/
	/*Exchange last element with the root */
	temp=arr[i];
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	arr[i]=arr[last];
	arr[last]=temp;

	left=2*i+1; /*left child of root*/
	right=2*i+2;/*right child of root*/

	while( right < last)
	{
		if( arr[i]>=arr[left] && arr[i]>=arr[right] )
			return;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		if( arr[right]<=arr[left] )
		{
			temp=arr[i];
			arr[i]=arr[left];
			arr[left]=temp;
			i=left;
		}
		else
		{
			temp=arr[i];
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
			arr[i]=arr[right];
			arr[right]=temp;
			i=right;
		}
		left=2*i+1;
		right=2*i+2;
	}/*End of while*/
	if( left==last-1 && arr[i]<arr[left] )/*right==last*/
	{
		temp=arr[i];
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		arr[i]=arr[left];
		arr[left]=temp;
	}
}/*End of del_root*/



/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */