# include <stdio.h>
# include <conio.h>

void main(void)
{
void fibo(long x);
long z;
clrscr();
printf("Enter upper limit for Fibonacci Series :");
scanf("%ld",&z);
fibo(z);

}

void fibo(long x)
{
long a,b,c,i;
a=b=c=1;
for(i=1;c<x;i++)
{
if(i>2)
{
c=a+b;
a=b;
b=c;
}
if(c<=x)
printf("%ld\n",c);
}
getch();
}