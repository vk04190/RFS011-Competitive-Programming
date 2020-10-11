#include<stdio.h>
#include<conio.h>
#include<dos.h>
 void main()
  {
   int i,k,a,j;
   printf("sandeep");
   for(i=0;a[i]!='\0';i++)
   {
    if(k==0)
     {
      j--;
      gotoxy(i+5,j+10);
      if(i%10==0)
      k=1;
      }
      else
      {
      j++;
      gotoxy(i+5,j+10);
      if(i%10==0)
      k=0;
      }
      textcolor(RED+BLINK);
      //sound(i*10);
      puts(a);
      delay(100);
      clrscr();
      //nosound
      }
      getch();
      }

