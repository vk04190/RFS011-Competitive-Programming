/*	PROGRAM TO KNOW LARGEST & 2nd LARGEST IN AN ARRAY   @PRASAD.G.V.L
																												 02211A0540
																												 CSE*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int p[10],i,small,large,s_l;
	clrscr();
	printf("enter the elements");
	for(i=0;i<10;i++)
		scanf("%d",&p[i]);
	 small=p[0];
	 large=p[0];
	 for(i=1;i<10;i++)
	 {
		if(p[i]>small&&p[i]<large)
	 small=p[i];
	 large=p[i];
	 }
	 printf("the smallest num and largest num is  %d\n and %d\n",small,large);
	 getch();
}