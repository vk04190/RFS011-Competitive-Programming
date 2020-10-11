/*second largest number @							  PRASAD.G.V.L
																	02211A0540
																	CSE*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter the 3 values\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&a>c)
	{
		if (b>c)
		printf("%d",b);
		else
		printf("%d",c);
	}
	else if(b>c&b>a)
	{
		if(c>a)
		printf("%d",c);
		else
		printf("%d",a);
 }
 else if(c>a&c>b)
 {
	if(a>b)
	printf("%d",a);
	else
	printf("%d",b);
 }
 getch();
}