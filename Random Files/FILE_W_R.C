
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
   {
    char ch;
    FILE *fptr;
    clrscr();
    fptr=fopen("f1.dat","w");
    while((ch=getchar())!=EOF)
	{
	 putc(ch,fptr);
	}
    fclose(fptr);
    fptr=fopen("f1.dat","r");
    if(fptr==NULL)
	{
	 printf("ERROR IN FILE OPENING");
	 exit(0);
	}
    else
       {
	while((ch=getc(fptr))!=EOF)
	printf("%c",ch);
       }
    fclose(fptr);
    getch();
   }