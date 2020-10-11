/*		PROGRAM TO TRNS NUM TO WORDS @ 			PRASAD.G.V.L:
																					02211A0540*/

#include<stdio.h>
#include<conio.h>
void main(){
long int n,r,a=0,x;
clrscr();
printf("enter the num to be tested \n");
scanf("%ld",&n);
x=n;
while(n!=0)
{
	r=n%10;
	a=a*10+r;
	n=n/10;
}
printf("the reverse num is %ld",a);
if(x!=a)
printf("numis not pallindrome\n");
else
printf("num ispallindrome\n");
getch();
}