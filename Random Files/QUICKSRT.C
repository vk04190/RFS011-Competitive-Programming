/* programme for quick sort */              /*RAVINDRA P*/
                                                      /*02211A0558*/
                                                      /*CSE*/         

#include<stdio.h>
#include<conio.h>
void quicksort(int [],int,int);
void main()
{
      int a[10],n,i;
      clrscr();
      printf("enter the no. of elements \n");
      scanf("%d",&n);
      printf("enter %d elements \n",n);
      for(i=0;i<n;i++)
      {
	 scanf("%d",&a[i]);
      }
      quicksort(a,0,n-1);
      printf("the sorted array elemets are \n");
      for(i=0;i<n;i++)
	   printf("%d\t",a[i]);
      getch();
}

void quicksort(int a[],int lb,int ub)
{
      int i,j,temp;
      if(lb<ub)
      {
	  i=lb+1;
	  j=ub;
	  while(1)
	  {
	      while(a[i]<a[lb])
		 i++;
	      while(a[j]>a[lb])
		 j--;
	      if(i<j)
	      {
		 temp=a[i];
		 a[i]=a[j];
		 a[j]=temp;
	      }
	      else
		  break;
	  }
	  temp=a[lb];
	  a[lb]=a[j];
	  a[j]=temp;
	  quicksort(a,lb,j-1);
	  quicksort(a,j+1,ub);
      }
}


