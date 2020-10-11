/* purpose of this program is to write a program on bubblesort*//*RAVINDRA P*/
                                      /*02211A0558*/
                                      /*CSE*/   

# include <stdio.h>
# define SIZE 10
void bubbsort(int [],int);
void main()
{
  int a[SIZE],n,i;
  clrscr();
  printf("enter the values\n");
  scanf("%d",&n);
  printf("enter %d values\n",n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  bubbsort(a,n);
  printf("the sorted array is\n");
  for(i=0;i<n;i++)
     printf("%d\t",a[i]);
  getch();
}

void bubbsort(int a[],int n)
{
  int temp,pass,exch,i;
  for(pass=1;pass<=n-1;pass++)
  {
    exch=0;
    for(i=0;i<n-pass;i++)
    {
      if(a[i]>a[i+1])
	{
	  temp=a[i];
	  a[i]=a[i+1];
	  a[i+1]=temp;
	  exch++;
       }
    }
      if(exch==0)
	 break;
  }
}

