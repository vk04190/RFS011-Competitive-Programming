//** TO PRINT FLOYIDS TRIANGLE **//
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int i,j,n,k;
clrscr();
printf("enter n");
scanf("%d",&n);
k=1;
for(i=1;i<=n;i++)
   {
   printf("\n");
   for(j=1;j<=i;j++)
   {
   printf("%3d",k);
   k++;
   }}
return;
}