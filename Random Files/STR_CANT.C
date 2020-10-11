#include<stdio.h>
#include<conio.h>
 void main()
  {
   char s[10],s2[10];
   clrscr();
   printf("Enter string 1:");
   gets(s);
   printf("Enter string 2:");
   gets(s2);
   strcancat(s,s2);
   getch();
  }
