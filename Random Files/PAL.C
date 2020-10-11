/****************************************************************************
		    PROGRAM TO PRINT PALINDROME STRING
****************************************************************************/
#include<stdio.h>						/*/NAME:M PRASHANTH     */
#include<conio.h>						/*ROLL NO:02211A0437      */
void rev(char [],char []);				/*BRANCH:E C E              */
int camp(char [],char[]);
void main()
{
char a[20],b[20];
int c;
clrscr();
printf("\nenter the first string:");
scanf("%s",a);
rev(a,b);
c=camp(a,b);
if(c==0)
printf("\nthe string is a palindrome");
else
printf("\nthe string is not a palindrome");
getch();
}
void rev(char s1[],char s2[])
{
int i,j=0,l;
for(i=0;s1[i]!='\0';i++);
l=i-1;
for(i=l;i>=0;i--)
{
s2[j]=s1[i];
j++;
}
s2[j]='\0';
}
int camp(char s1[],char s2[])
{
int c,i;
for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
{
if(s1[i]!=s2[i])
break;
}
return s2[i]-s1[i];

}
