#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	FILE *f1,*f2,*f3;void search(char *);
	char c,c1,st1[20],p[10],st2[20],st3[20];
	clrscr();
	printf("RU a new user(n/y)\n");
	scanf("%c",&c);
	if(c=='n')
	{
	printf("enter ur password:\n");
	scanf("%s",&p[10]);
		search(p);
		printf("enter ur file name in ext(.x)\n");
	   //	gets(st1);
			scanf("%s",st1);

		f1=fopen(st1,"w");
		if(f1==NULL)
		printf("file error\n");
		else
		{
		printf("enter ur text now\n");
		printf("press ctrl'z' at end\n");
		while((c1=getchar())!=EOF)
		getc(f1);
		fclose(f1);
	   //	continue;
	   }
 }
	 else  {
	  raju: {
	 printf("enter ur password now\n");
	 scanf("%s",st2);
	 printf("retype it\n");
	 scanf("%s",st3);
	 printf("enter ur filename\n");
	// gets(st1);
	scanf("%s",st1);
	 if(strcmp(st2,st3)==0)
	 {
		f1=fopen(st1,"w++");
		if(f1==0)
		printf("file error\n");
		else
		while((c1=getc(f1))!=EOF)
		putc(c1,f1);
		printf("%c",c1);
	}
	else
		printf("invalid password\n");
		getch();
		goto raju;
 }
 }
 }
	void  search(char p)
	{   char *s1;int i,a,n,j;FILE *p1;
			p1=fopen("pass.dat","r");
		   n=	strcmp(p,st);

		if(





