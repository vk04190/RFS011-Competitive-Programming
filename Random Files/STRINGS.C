/*PROGRAM TO UTILISE ALL STRING FUNCTIONS
																					 PRASAD.G.V.L
																					 02211A0540
																					 CSE*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char st1[10],st2[10],st[10],st3[10];
	int s1,s2,x;
	clrscr();
	printf("enter your string\n");
	gets(st1);
	s1=strlen(st1);
	printf("your string length is %d\n",s1);
	printf("enter your next text\n");
	gets(st2);
		s2=strlen(st2);
		printf("your next is %d length\n",s2);
	strcpy(st3,st2);
	 x=strcmp(st1,st3);
	 if(x==0)
	 printf("both STRINGS  r equal\n");
	 else
	 printf("not equal STRINGS\n");
	 strcpy(st,st1) ;
	 strrev(st);
	 printf("your reverse string1 text is :");
	 puts(st);
	 getch();
}

