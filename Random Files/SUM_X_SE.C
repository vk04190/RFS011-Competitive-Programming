#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n,l,x,d=1;
float s=1,f=1;
clrscr();
printf("Enter the no. n:");
scanf("%d",&n);
printf("The value of x");
scanf("%d",&x);
for(i=1;i<=n;i++)
	{
	f=f*i;
	l=pow(x,i);
	s=s+l/f;
	}
printf("The sum of series is: %f",s);
getch();
}


