/*PROGRAM TO APPEND TWO FILES (PREVIOUSLY EXISTING)  @
												PRASAD.G.V.L
												02211A0540 CSE*/

#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;FILE *f1,*f2;
	f1=fopen("f1.dat","r");
	f2=fopen("f2.dat","a");
	if(f1==NULL)
	{
		printf("file error\n");
		exit();
	}
	else
	{
		while((ch=getc(f1))!=EOF)
		putc(ch,f2);
		fclose(f2);
		fclose(f1);
	 }
	 f2=fopen("f2.dat","r");
	 printf("here UR contents:\n");
	 while((ch=getc(f2))!=EOF)
	 printf("%c",ch);
	 fclose(f2);
	 getch();
   }