#include<stdio.h>
#include<conio.h>
 void main()
 {
 int a[10],sum=0;
 int *j;
 int i,n;
 clrscr();
 printf("Enter how many elements u want to add:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
  j=&a[0];
 for(i=0;i<n;i++)
     {

       sum=sum+*j;
       j++;
     }
 printf("sum=%d",sum);
}

