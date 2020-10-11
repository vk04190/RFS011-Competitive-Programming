#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
  {
   char ch;
   int i,j=9,a=3;
   textcolor(GREEN+BLINK);
   clrscr();
   while(j<=12)
    {
     for(i=5;i<70;i++)
       {
	gotoxy(i,12);
	cprintf("i %c india",a);
	delay(75);
	clrscr();
       }
       exit(0);
      j++;
    }
    getch();
   }
