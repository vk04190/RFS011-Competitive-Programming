/*PROGRAM FOR MATRIX ADDITION  	@		PRASAD.G.V.L
																		02211A0540,CSE*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j;
	clrscr();
 printf("\n\nOUTPUT\n");
	printf("ENTER THE ELEMENTS INTO A MAX\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
	 }
	printf("\n");
	}
		printf("ENTERR THE ELEMENTS TO B MAX\n");
		for(i=0;i<3;i++) {
		for(j=0;j<3;j++ )
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
		}
			for(i=0;i<3;i++){
			for(j=0;j<3;j++)
			{
					c[i][j]=a[i][j]+b[i][j];
			}
			printf("\n");
			}printf("elements of max c\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					printf("  %d",c[i][j]);
				 }
				 printf("\n");
			}

			getch();
}

/////////OUTPUT////////////////////////////////////////////