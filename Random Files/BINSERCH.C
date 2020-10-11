    /* programme to implement binary search */
                                      /*RAVINDRA P*/
                                      /*02211A0558*/
                                      /*CSE*/   
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],n,i,se,flag=0,low,high,middle;
    clrscr();
    printf("ENTER HOW MANY ELEMENTS DO YOU WANT TO ENTER\n");
    scanf("%d",&n);
    printf("ENTER %d ELEMENTS\n",n);
    for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    printf("ENTER THE ELEMENT TO BE SEARCHED\n");
    scanf("%d",&se);
    sort(a,n);
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    low=0;
    high=n-1;
    while(low<=high)
    {
       middle=(low+high)/2;
       if(se<a[middle])
	  high=middle-1;
       else if(se>a[middle])
	  low=middle+1;
       else
       {
	  printf("ELEMENT %d FOUND AT POSITION a[%d]",se,middle);
	  flag=1;
	   break;
       }
    }
    if(flag==0)
	printf("given element was not found \n");
    getch();
}

/*OUTPUT
  ENTER HOW MANY ELEMENTS DO YOU WANT TO ENTER:4
  ENTER 4 ELEMENTS
  34 56 77 90
  ENTER THE ELEMENT TO BE SEARCHED:56
  ELEMENT 56 FOUND AT POSITION: 2     */
