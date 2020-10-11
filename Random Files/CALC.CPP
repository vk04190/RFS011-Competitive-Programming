#include<stdio.h>
#include<conio.h>
void main(void)
{
clrscr();
int a,b,c=0;
char ch;
int j(int x, int y);
int t(int x, int y);
int ts(int x, int y);
int z(int x, int y);

printf("Enter operator : ");
scanf("%c",&ch);
printf("Enter first number : ");
scanf("%d",&a);
printf("Enter second number : ");
scanf("%d",&b);


if(ch==43)
{
c=j(a,b);
}
else
if(ch==45)
{
c=t(a,b);
}
else
if(ch==47)
{
c=ts(a,b);
}
else if(ch==42)
{
c=z(a,b);
}

printf("\nThe result is : %d",c);
getch();
}

int j(int x, int y)
{
int r;
r=x+y;
return(r);
}

int t(int x, int y)
{
int r;
r=x-y;
return(r);
}

int ts(int x, int y)
{
int r;
r=x/y;
return(r);
}

int z(int x, int y)
{
int r;
r=x*y;
return(r);
}
