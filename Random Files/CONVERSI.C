/*PROGRAM FOR CONVERTING NUM TO ANY BASE 	@	PRASAD.G.V.L
																						02211A0540
																						CSE*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,j,base,a[10],r,i=0;
	clrscr();
	printf("enter the num and base\n");
	scanf("%d%d",&n,&base);
while(n!=0)
{
	r=n%base;
	a[i]=r;
	n=n/base;
	i++;
}
	i--;
	for(j=i;j>=0;j--)
	{
		if(a[j]<=9)
		printf("%d",a[j]);
	 else	if(a[j]==10)
		printf("A");
	 else if(a[j]==11)
	 printf("B");
	 else if(a[j]==12)
	 printf("C");
	 else if(a[j]==13)
		printf("D");
		else if(a[j]==14)
		printf("E");
		else if(a[j]==15)
		printf("F");
		else
		printf("G");
 }
 getch();
 }