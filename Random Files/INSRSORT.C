/* programme for insertion sort */      /*RAVINDRA P*/
                                      /*02211A0558*/
                                      /*CSE*/      
#include<stdio.h>
#include<conio.h>
void main()
{
   int a[10],i,j,x,k;
   clrscr();
   printf("enter an element and to stop press ctrl+z \n");
   i=0;
   while(scanf("%d",&x)!=EOF)
   {
	k=i-1;
	while(x<a[k] && k>=0)
	{
	    a[k+1]=a[k];
	    k--;
	}
	a[k+1]=x;
	i++;
	printf("the sorted array elements after inserting are \n");
	for(j=0;j<i;j++)
	       printf("%d\t",a[j]);
	printf("enter an element and to stop press ctrl+z \n");
   }
   printf("the final sorted array is \n");
   for(j=0;j<i;j++)
   {
       printf("%d\t",a[j]);
   }
   getch();
}
