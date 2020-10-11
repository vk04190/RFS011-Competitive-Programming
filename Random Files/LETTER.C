/*PROGRAM TO FIND NUMOF LETTERS &WORDS	@	PRASAD.G.V.L
																				 02211A0540 CSE*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char st[100];
	int i=0,letters=0,words=0;
	clrscr();
	printf("enter ur text\n");
	gets(st);
	while(st[i]!='\0')
	{
	if(st[i]!=' ')
			letters++;
	 else
			words++;
			i++;
	}
	printf("letters r %d\n",letters);
	printf("words r %d\n",words);
	getch();
}