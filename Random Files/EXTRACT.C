/*PROGRAM TO EXTRACT A PART OF STRING @	PRASAD.G.V.L
																				02211A0540
																				CSE*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char st[100];
	int i=0,n;
	clrscr();
	printf("enter ur text\n");
	gets(st);
	 printf("enter to how many character you want:\n");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
		printf("%c",st[i]);
		getch();
}
