 /* programme to implement linear search */     /*RAVINDRA P*/
                                                                        /*02211A0558*/
                                                                    /*CSE*/          
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],n,i,se,flag=0;
    clrscr();
    printf("enter no. of elments \n");
    scanf("%d",&n);
    printf("enter %d elements \n",n);
    for(i=0;i<n;i++)
    {
	scanf("%d",&a[i]);
    }
    printf("enter the searching element \n");
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
	if(a[i]==se)
	{
	    printf("element was found at position a[%d]",i);
	    flag=1;
	     break;
	}
    }
    if(flag==0)
       printf("element was not found \n");
    getch();
}

