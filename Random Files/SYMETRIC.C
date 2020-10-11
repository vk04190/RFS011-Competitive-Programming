

/*			PROGRAM TO TEST SYMETRIC OR NOT 	@					PRASAD.G.V.L
																										02211A0540
																										CSE*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,a[3][3],x=0;
 clrscr();
 printf("ENTER THEELEMENTS OF MAX A\n");
 for(i=0;i<3;i++)
 {
	for(j=0;j<3;j++)
	{
	scanf("%d",&a[i][j]);
	}
	printf("\n");
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	 if(a[i][j]==a[j][i])
	 x++;
	 }
 }
 if(x==9)
 printf("MAX IS SYMETRIC\n");
 else
 printf("MAX IS NOT SYMETRIC \n");
			getch();
	}

	////////////OUTPUT///////////////////////