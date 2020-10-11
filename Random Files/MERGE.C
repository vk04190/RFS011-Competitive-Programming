 /* purpose of this program is to write a program on bubblesort*/
                                                     /*RAVINDRA P*/
                                                       /*02211A0558*/
                                                        /*CSE*/   \
# include <stdio.h>
# define SIZE 50
void merge();
void merge_pass(int [],int,int);
void main()
{
  int a[SIZE],n,i;
  clrscr();
  printf("enter the no. of elements\n");
  scanf("%d",&n);
  printf("enter the %d values\n",n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  merge_pass(a,0,n-1);
  printf("the sorted array is\n");
  for(i=0;i<n;i++)
     printf("%d\t",a[i]);
  getch();
}
void merge_pass(int a[],int l,int h)
{
   int  m;
   if(l!=h)
   {
      m=(l+h)/2;
      merge_pass(a,l,m);
      merge_pass(a,m+1,h);
      merge(a,l,m,h);
   }
}
void merge(int a[],int l,int m,int h)
{
   int b[SIZE],i,j,k;
   i=l;
   j=m+1;
   k=l;
   while(i<=m && j<=h)
   {
       if(a[i]<a[j])
	{
	   b[k]=a[i];
	   k++;  i++;
	}
	else
	{
	   b[k]=a[j];
	   k++;  j++;
	}
   }
   if(i<=m)
    {
	 while(i<=m)
	 {
	   b[k]=a[i];
	   k++;  i++;
	 }
    }
    else
    {
	 while(j<=h)
	 {
	   b[k]=a[j];
	   k++;  j++;
	 }
    }
    for(i=l;i<=h;i++)
    {
       printf("%d\t",b[i]);
       a[i]=b[i];
    }
    printf("\n");
}






