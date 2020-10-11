/* Practical 4: Writing a Program which uses 'for' loop statement,
(generate the multiplication tables from 2 to 20). */

#include<stdio.h>
#include<conio.h>
void main (void)
{
 int i,n,j=0;
 clrscr();
 printf("\n\t\tEnter Table No. ");
 scanf("%d",&n);

 if(n>=2 && n<=20)
    for(i=1;i<=10;i++)
       {
       j=n*i;
       printf("\n\t\t%d * %d = %d",n,i,j);
       }
 else
 printf("\nError!!! Enter number from 2 to 20");

 getch();
}
