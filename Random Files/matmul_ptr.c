//** MATRIX MUL USING POINTERS **//
#include<stdio.h>
#include<malloc.h>
main()
{
int *a[10],*b[10],*c[10];
int i,j,m,n,p,q,k;
clrscr();
a=(int *)malloc(7*7*sizeof(int));
b=(int *)malloc(7*7*sizeof(int));
c=(int *)malloc(7*7*sizeof(int));
system("clear");
printf("\n MAT MUL \n");
printf("\n\t enter order of first matrix:");
scanf("%d %d",&m,&n);
printf("\n\t enter order of second matrix:");
scanf("%d %d",&p,&q);
if(m!=p)
{
printf("not possible");
exit();
}
else
{
printf("\n enter elements of first mat \n");
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	scanf("%d",*(a+1)+j);
	printf("\n enter elements of second mat \n");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",*(b+i)+j);
	for(i=0;i<m;i++)
	for(j=0;j<q;j++)
	{
	*(*(c+i)+j)=0;
	for(k=0;k<n;k++)
	(*(*(c+i)+j))+=(*(*(a+i)+k)*(*(*b+k)+j));
	}
printf("\n\t THE PRODUCT MATRIX IS: \n");
for(i=0;i<m;i++)
	{
	for(j=0;j<q;j++)
	   {
	   printf("%d",*(*(c+i)+j));
	   printf("\n");
}
}
}
}
}
