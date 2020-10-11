/*PROGRAM TO CONCATENATE & REVERSE A STRING      PRASAD.G.V.L
																								 02211A0540
																								 CSE*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char st[40],st2[20],st1[20];
	clrscr();
	printf("enter ur 1st text\n");
	gets(st1);
	printf("enter ur 2nd text\n");
	gets(st2);
	strcat(st1,st2);
	printf("your modified :\n");
	puts(st1);
	strcpy(st,st1);
	strrev(st);
	printf("your reverse :\n");
	puts(st);
	getch();
}
