# include <stdio.h>
# include <conio.h>

void main(void)
{
int i=0,x,y,a[10],b;
clrscr();

for(y=0;y<=9;y++)
{
a[y]=y+1;
}

printf("Enter a number: ");
scanf("%d",&x);

for(b=0;b<=9;b++)
{
if(a[b]==x)
{
i=1;
break;
}
}
if(i==1)
{
printf("Match Found !");
}
else
{
printf("No Match !");
}
getch();
}