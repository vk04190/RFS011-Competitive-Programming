	/*PROGRAM TO WRITE &READ DATA THROUGH FILE @ 	PRASAD.G.V.L
													02211A0540  CSE*/


#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	FILE *fp;
	clrscr();
	printf("enter the data into the file\n");
	fp=fopen("f1.dat","w");
	while((ch=getchar())!=EOF)
	{
		putc(ch,fp);
	}
		fclose(fp);

	 fp=fopen("f1.dat","r");
	 if(fp==NULL)
	 {
		 printf("error in file");
		 exit();
	 }
	 else
	 {
	 printf("check ur data here\n");
		while((ch=getc(fp))!=EOF)
		printf("%c",ch);
	 }
	 fclose(fp);
	 getch();
  }