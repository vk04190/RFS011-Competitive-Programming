#include<stdio.h>
#include<conio.h>
main()
{
int i,s;
char choice;
char name[10][25],word[10][25];
clrscr();
printf("                WELCOME                 \n");
printf("----------------------------------------\n");
printf("WHICH GAME U WANT TO PLAY\n");
printf("PRESS '1' FOR NAMES\n");
printf("PRESS '2' FOR WORDS\n");
{
scanf("%c",&choice);
switch (choice)
{
case'1':
printf("------------------------------------\n");
printf("               MAKE NAMES               \n");
printf("------------------------------------\n");
printf("MAKE NAMES BY (A)\n");
printf("------------------------------------\n");
for(i=1;i<=25;i++){
printf("%d",i);}
scanf("%s",&name[i]);
break;
case'2':
printf("-------------------------------------\n");
printf("               MAKE WORDS            \n");
printf("-------------------------------------\n");
printf("MAKE WORDS BY (B)\n");
printf("-------------------------------------\n");
for(i=1;1<=25;i++){
printf("%d\n",i);}
scanf("%s",&word[i]);
break;
default:
printf("              WRONG CHOICE              \n");
}
getch();
}

