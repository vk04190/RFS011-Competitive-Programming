#include<stdio.h>
#include<conio.h>
int i,j=0,k=0;
char q[30],s[35],p[35];
void main()
{
int n,l;
char x;
int prcci(char);
clrscr();
printf("\n Enter an infix expression as a string");
gets(q);
l=strlen(q);
q[l+1]=')';
s[j++]='(';
for(i=0;i<=l+1;i++)
{
if(((q[i]>=65)&&(q[i]<=90))||((q[i]>=97)&&(q[i]<=122)))
p[k++]=q[i];
if(q[i]=='(')
s[j++]='(';
if((q[i]=='-')||(q[i]=='+')||(q[i]=='*')||(q[i]=='/'))
{
n=j-1;
if((s[n]=='-')||(s[n]=='+')||(s[n]=='*')||(s[n]=='/'))
{
if((prcci(q[i])<=prcci(s[n]))&&(i>=2))
{
p[k++]=s[n];
s[n]=q[i];
}
}
s[j++]=q[i];
}
if(q[i]==')')
{
j=j-1;
do
{
p[k++]=s[j];
j--;
}while(s[j]!='(');
x=s[j];
}
}
printf("The postfix expression is:\n");
puts(p);
getch();
}
int prcci(char x)
{
if((x=='-')||(x=='+'))
return(1);
if((x=='*')||(x=='/'))
return(2);
}



































