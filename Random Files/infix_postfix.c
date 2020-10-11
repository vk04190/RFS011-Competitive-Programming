/* PROGRAM TO CONVERT INFIX EXPRESSION TO POSTFIX EXPRESSION */
#include<stdio.h>
#define max 80
char stack[max];
int top=-1;
void main()
{
void intopost(char *);
char infix[max];
int i,j;
clrscr();
printf("enter an expression  :");
gets(infix);
intopost(infix);
printf("  for the given infix expression =%s",infix);
getch();
}
void intopost(char *y)
{
void push(char);
char pop();
char stacktop();
int prec(char);
char gettoken(char y[]);
char c;
printf("postfix expression =");
while((c=gettoken(y))!='\0')
{
if((c>='a')&&(c<='z'))
printf("%c",c);
else if(c=='(')
push(c);
else if(c==')')
{
while((c==pop())!='(')
printf("%c",c);
}
else
{
while(prec(stack[top])>prec(c))
printf("%c",pop());
push(c);
}
}
while(top>-1)
{
printf("%c",pop());
}
putchar('\n');
}

void push(char c)
{
if(top>max-1)
{
printf("stack overflow");
exit(0);
}
else
stack[++top]=c;
}

char pop()
{
if(top<0)
{
printf("stack empty");
exit(0);
}
else
return(stack[top--]);
}

int prec(char c)
{
switch(c)
{
case '^': return(6);
		  break;
case '*':
case '/': return(5);
		  break;
case '+':
case '-': return(4);
		  break;
case '(': return(0);
		  break;
default : return(0);
}
}
char gettoken(char y[])
{
static int i=0;
while(1)
{
if(y[i]==' ')
i++;
else
return(y[i++]);
}
}
