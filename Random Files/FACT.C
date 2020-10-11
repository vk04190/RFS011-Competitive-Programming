#include<stdio.h>
#include<conio.h>
void main(){
long int fact(int n);
long int n;
clrscr();
printf("enter the num\n");
scanf("%d",&n);
printf("the factorial of given numn is   %d",fact(n));
getch();
}
 long int fact(int n)
 {long int f;
 if(n==1||n==0)
 return(1);
 else
 f=n*fact(n-1);
 return(f);
 }