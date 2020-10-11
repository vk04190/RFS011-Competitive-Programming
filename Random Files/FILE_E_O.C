#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 FILE *fd,*fe,*fo;
 int x,i;
 clrscr();
 fd=fopen("data.dat","w");
 printf("Enter any 10 no.s:\n");
 for(i=0;i<10;i++)
     {
      scanf("%d",&x);
      putw(x,fd);
     }
     fclose(fd);
 fd=fopen("data.dat","r");
 fe=fopen("even.dat","w");
 fo=fopen("odd.dat","w");
 while((x=getw(fd))!=EOF)
     {
      if(x%2==0)
	putw(x,fe);
      else
       putw(x,fo);
      }
     fclose(fd);
     fclose(fe);
     fclose(fo);
     fe=fopen("even.dat","r");
     fo=fopen("odd.dat","r");
     if(fe==NULL||fo==NULL)
	{
	 printf("FILE IS NOT OPENED");
	 exit(0);
	}
	{
	 printf("CONTENTS OF THE EVEN FILE ARE:\n");
	 while((x=getw(fe))!=EOF)
	  printf("%d\t",x);
	 printf("\nCONTENTS OF THE odd FILE ARE:\n");
	 while((x=getw(fo))!=EOF)
	  printf("%d\t",x);
	 }
     fclose(fd);
     fclose(fo);
     fclose(fe);
     getch();
 }


