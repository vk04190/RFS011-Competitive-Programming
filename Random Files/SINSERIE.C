/*			PROGRAM FOR SINE SERIES  @						G.V.L.PRASAD
																							02211A0540,CSE*/

#include<stdio.h>
#include<conio.h>
void main()
{
	float  x,i,fact=1,n;
	float sum=0,p,q,res;
	clrscr();
	printf("enterthe value of x and n\n");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i=2*i-1)
	{
		p=pow(x,i);
		fact=fact*i;
		q=p/fact;
		sum=sum+q;
	}
	res=sum-1;
	printf("the series is %f",res);
	getch();
}