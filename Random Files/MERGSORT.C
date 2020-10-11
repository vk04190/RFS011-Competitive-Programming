

/* programme for merge sort */  /*RAVINDRA P*/
                                                /*02211A0558*/
                                                   /*CSE*/                  
#include<stdio.h>
#include<conio.h>
void merge_sort(int [],int,int);
void merge();
void main()
{
    int n,i,a[10];
    clrscr();
    printf("enter the number \n");
    scanf("%d",&n);
    printf("enter %d elements \n",n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    merge_sort(a,0,n-1);
    printf("the sorted array is \n");
    for(i=0;i<n;i++)
    {
       printf("%d\t",a[i]);
    }
    getch();
}

void merge_sort(int a[],int low,int high)
{
     int middle;
     if(low<high)
     {
	middle=(low+high)/2;
	merge_sort(a,low,middle);
	merge_sort(a,middle+1,high);
	merge(a,low,middle,high);
     }
}

void merge(int a[],int low,int middle,int high)
{
     int i,j,k;
     int b[10];
     i=low;
     j=middle+1;
     k=low;
     while(i<=middle && j<=high)
     {
	if(a[i]<a[j])
	{
	   b[k]=a[i];
	   i++;
	   k++;
	}
	else
	{
	   b[k]=a[j];
	   j++;
	   k++;
	}
     }
     if(i<=middle)
     {
	while(i<=middle)
	{
	    b[k]=a[i];
	    i++;
	    k++;
	}
     }
     else
     {
	 while(j<=high)
	 {
	   b[k]=a[j];
	   j++;
	   k++;
	 }
      }
      for(i=low;i<=high;i++)
      {
	  printf("%d\t",b[i]);
	     a[i]=b[i];
      }
      printf("\n");
}



