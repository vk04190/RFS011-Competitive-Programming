		  /*TO CANCATENATE TWO STRINGS*/
					     /*A.SANDEEP*/
					     /*02211A0560*/
					     /*C.S.E.*/
  #include<stdio.h>
  #include<conio.h>
  #include<string.h>
   void main()
    {
     char c[100];
     char a[50];
     char b[50];
     clrscr();
     printf("Enter a string1:");
     gets(a);
     printf("Enter a string2:");
     gets(b);
     strcat( a,b);
     printf("%s",a);
     getch();
    }