	/*TO FIND ADDRESS OF CHAR,STRING,INTEGER*/

#include<stdio.h>
#include<conio.h>
 main()
  {
   char *chp,*sp;
   int i;
   char ch,s[10];
   int *ip;
   clrscr();
   printf("Enter a char:");
   scanf("%c",ch);
   printf("Enter a string:");
   scanf("%s",s);
   printf("Enter a integer:");
   scanf("%d",&i);
   chp=&ch;
   sp=s;
   ip=&i;
   printf("\nchar\tadd\tstring\t\tstringadd\tint\tint add\n");
   printf("%c\t%u\t%s\t\t%u\t\t%d\t%u",ch,&chp,s,&s,i,&i);
   printf("\nchar pointer value is:%u",chp);
   printf("\nstring pointer value is:%u",sp);
   printf("\nint pointer value is:%u",ip);
   getch();
  }