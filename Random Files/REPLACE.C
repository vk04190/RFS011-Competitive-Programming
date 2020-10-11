/*PROGRAM TO REPLACE A CHAR  IN THE STRING @ 	PRASAD.G.V.L
																							02211A0540
																							CSE*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	 char st[20],ch1,ch2;
	 int c=0,i;
	 clrscr();
	 printf("enter ur text\n");
	 gets(st);
	 printf("which char you  like to replace with what:\n");
	 scanf("%c %c",&ch1,&ch2);
	 for(i=0;i<20;i++)
	 {
		 if(st[i]==ch1)
		 {
			st[i]=ch2;
		 c++;
		 }
	}
	printf("the modified is \n %s\n",st);
	printf("num of replaces is %d\n",c);
		getch();
}

//////////////////OUTPUT////////////////////////////