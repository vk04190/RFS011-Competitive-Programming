#include<stdio.h>
#include<conio.h>

main()
{
		int matrix[3][3];
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<3,j++)
			{
				printf("/nEnter element no%d,%d",i+1,j+1);
				scanf("%d",& matrix[i][j]);
			}
	}
		printf("\nelement%d,%d,%d"i+1,j+1,matrix[i][j]);
}