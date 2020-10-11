/* programme for selection sort *//*RAVINDRA P*/
                                      /*02211A0558*/
                                      /*CSE*/   
                                                    
#include<stdio.h>
#include<conio.h>
void selection(int [],int);
void main()
{
   int a[10],n,i;
   clrscr();
   printf("enter the number \n");
    scanf("%d",&n);
    printf("enter %d elements \n",n);
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
   selection(a,n);
   printf("the sorted array is \n");
   for(i=0;i<n;i++)
	printf("%d\t",a[i]);
   getch();
}

void selection(int a[],int n)
{
   int i,j,min,temp;
   for(i=0;i<n-1;i++)
   {
       min=i;
       for(j=i+1;j<n;j++)
       {
	 if(a[j]<a[min])
	    min=j;
       }
       if(min!=i)
       {
	   temp=a[i];
	   a[i]=a[min];
	   a[min]=temp;
       }
   }
}
