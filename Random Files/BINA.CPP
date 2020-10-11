#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
main()
{
int a,b;
struct process
{
int a;
char c;
}p[2];
p[0].a=8;
p[0].c='p';
p[1].a=4;
p[1].c='p';
p[2].a=1;
p[2].c='p';
clrscr();
for(a=0;a<=2;a++)
{
printf("\n\n Process %c%d executing\n",p[a].c,a+1);
for(b=1;b<=p[a].a;b++)
{
printf("*");
sleep(1);
}
printf("\n Process %c%d executed",p[a].c,a+1);
}
getch();
}


