	/*PROGRAM TO COPY THE CONTENTS OF FILE @ PRASAD.G.V.L
											 02211A0540
												CSE*/
#include<stdio.h>
#include<conio.h>
	void main()
	{
	char ch;
	FILE *fp1,*fp2;
	clrscr();
	 fp1=fopen("f1.dat","r");
	 fp2=fopen("target.dat","w");
	 if(fp1==NULL)
	 {
		 printf("file error");
		 exit();
	 }
	 else
		while((ch=getc(fp1))!=EOF)
		putc(ch,fp2);
		fclose(fp1);
		fclose(fp2);
		fp2=fopen("target.dat","r");
		printf("the contents of file(target):\n");
		while((ch=getc(fp2))!=EOF)
			printf("%c",ch);
		 fclose(fp2);
		 fclose(fp2);
		 getch();
  }