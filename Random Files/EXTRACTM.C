		/*PROGRAM TO EXTRACT 'N'CHARACTERS FROM'M'	@ PRASAD.G.V.L
																									02211A0540
																									CSE*/
#include<stdio.h>
#include<conio.h>
	void main()
	{
		char c[20];
		int m,n,i;
		clrscr();
		printf("ENTER UR TEXT\n");
		for(i=0;i<20;i++)
		{
			scanf("%c",&c[i]);
		}
		printf("enter  ur m,n values\n");
		printf("-----------------\n");
		printf("from value :m  to value:n\n");
		scanf("%d %d",&m,&n);
		for(i=m;i<(m+n);i++)
		{
			printf("%c",c[i]);
		}
		getch();
}