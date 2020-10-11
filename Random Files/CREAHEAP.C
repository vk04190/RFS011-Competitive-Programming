/*to create a heapsort */            /*RAVINDRA P*/
                                      /*02211A0558*/
                                      /*CSE*/      
# include <stdio.h>
# define SIZE 20
void createheap(int [],int);
void main()
{
  int i,n,a[SIZE];
  clrscr();
  printf("enter no.of values\n");
  scanf("%d",&n);
  printf("enter %d values\n",n);
  for(i=1;i<=n;i++)
   scanf("%d",&a[i]);
  createheap(a,n);
  printf("the sorted array is\n");
  for(i=1;i<=n;i++)
    printf("%d\t",a[i]);
  getch();
}
void createheap(int b[],int n)
{
  int i,j,k,key;
  for(i=2;i<=n;i++)
  {
   j=i;
   key=b[i];
   k=j/2;
   while(j>1 && b[k]<key)
   {
     b[j]=b[k];
     j=k;
     k=j/2;
     if(k<1)
        k=1;
   }
  b[j]=key;
  }
}

