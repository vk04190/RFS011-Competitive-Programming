	/*PROGRAM TO PRINT MULTIPLICATION TABLES UPTO n*/

#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int l,i,n,x;
clrscr();
printf("Enter a no. to print tables upto it :");
scanf("%d",&x);
printf("     THE MULTIPLICATION TABLE OF \n IS");
for(n=1;n<=x;n++)
   {
   printf("\n\nThe m t of :%2d\n",n);
    for(i=1;i<=10;i++)
       {
	l=n*i;
	delay(5000);
	printf("\t\t\t%d*%d=%d\n",n,i,l);
	}
printf("Press any key........\n\n\n\n\n\n\n");
getch();
}
}
