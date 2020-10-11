/*PROGRAM FOR BINARY SEARCH*/
#include<stdio.h>
main()
{
int a[20],key,n;
int pos,i;
printf("\n Enter the total number of elements");
scanf("%d",&n);
printf("\n Enter %d numbers in ascending order\n",n);
for(i=0;i<n;++i)
scanf("%d",&a[i]);
printf("Enter key to search");
scanf("%d",&key);
if(pos>=0)
printf("\n successful search.The key %dfound at position %d,key,pos+1);
else
printf("\n Unsuccessful search");
}
binarysearch(int a[],int n;int key)
{
int low,high,midpos;
low=0;
high=n-1;
while(low<=high)
{
midpos=(low+high)/2;
if(key==a[midpos])
return midpos;
else
if(key<a[midpos])
high=midpos-1;
else
low=midpos+1
}
return-1;
}



