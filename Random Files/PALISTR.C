/*PROGRAM TO TEST A STRING IS PALLINDROME OR NOT@	PRASAD.G.V.L
																									02211A0540
																											CSE*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char st1[10],st2[10];
	int a;
	clrscr();
	printf("enter ur text\n");
	gets(st1);
	strcpy(st2,st1);
	strrev(st1);
	a=strcmp(st1,st2);
	if(a==0)
	printf("strings r equal :its pallindrome\n");
	else
	printf("strings not equal : not pallindrome\n");
	getch();
}