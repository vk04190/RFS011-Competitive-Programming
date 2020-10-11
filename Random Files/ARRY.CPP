#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
main()
{
int a,b=0,arr[5];
char s[]="your element is ";
clrscr();
for(a=0;a<=4;a++)
{
printf("Enter arry = \n");
scanf("%d",&arr[a]);
}
for(a=0;a<=4;a++)
{
b=0;
while(s[b]!='\0')
{
printf("%c",s[b]);
b++;
delay(50);
}
printf("%d\n",arr[a]);
}
getch();
}