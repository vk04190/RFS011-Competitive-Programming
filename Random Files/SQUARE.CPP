#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int c,p,ans;
clrscr();
printf("ENTER ANY NUMBER             :");
scanf("%d",&c);
printf("ENTER POWER OF THIS NUMBER   :");
scanf("%d",&p);
printf("-------------------------------");
ans=pow(c,p);
if(p==2)
{
printf("\n\n\t\tSQUARE OF %d IS :%d\n",c,ans);
}
if(p==3)
{
printf("\n\n\t\tCUBE OF %d IS  :%d\n",c,ans);
}
else
{
printf("\n\n\t\t\%dth POWER OF %d IS  :\n",p,c,ans);
}
getch();
}