/*PROGRAM TO MULTIPLY 2 MATYRICES 	@		naresh.g
											01211a0529 cse*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int r1,r2,c1,c2,i,j,k,a[3][3],b[3][3],c[3][3];
	clrscr();
	printf("ENTER the row and col size of the matrix A\n");
	scanf("%d %d",&r1,&c1);
	printf("enter the elements into matrix A\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("ENTER the row and col size of the matrix B\n");
	scanf("%d %d",&r2,&c2);
	printf("enter the elements into matrix B\n");

	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
		scanf("%d",&b[i][j]);
		}
		printf("\n");
	}

	if(c1==r2)
	{
		for(i=0;i<r1;i++)
			for(j=0;j<c2;j++)
				{
					 c[i][j]=0;
					 for(k=0;k<r2;k++)
						c[i][j]+=a[i][k]*b[k][j];
				 }
	}
	else
	{
	 printf("multiplication is not possible");
	 }



	printf("ELEMENTS OF C\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",c[i][j]);
	 }
			printf("\n");
	}
 getch();
}
///////////////////OUTPUT//////////////////////////////////////