#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
main()
{
int a,b,pro[]={10,11,12},temp;
clrscr();
for(a=0;a<=2;a++)
{

for(b=0;b<=2;b++)
{
if(pro[a]>pro[b])
{
printf("\n\n Process %c%d executing\n",'p',b+1);
temp=pro[b];
pro[b]=pro[a];
pro[a]=temp;
}}}
for(a=0;a<=2;a++)
printf("\n\n %d\n",pro[a]);
/*for(a=0;a<=2;a++)
{
printf("\n\n Process %c%d executing\n",p[a].c,a+1);
for(b=1;b<=p[a].a;b++)
{
printf("*");
sleep(1);
}
printf("\n Process %c%d executed",p[a].c,a+1);
}*/
getch();
}