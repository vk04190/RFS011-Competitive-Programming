/*PROGRAM TO EVALUATE POSTFIX EXPRESSION*/
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
static float stack[30],n;
static int top;
main()
{
static char s[40];
int i,j;
void push(float);
clrscr();
printf("\n enter the postfix expression\n");
scanf("%s",s); i=0;
j=strlen(s); top=-1;
while(i<j)
{
if(isalpha(s[i])) { printf("\n enter the value for %c          ",s[i]);
					scanf("%f",&n);
					push(n); }
else eval(s[i]);
i++;
}
printf("\n\n value of expression is    %f",stack[top]);
getch();
}
void push(float m)
{
top=top+1;
stack[top]=m;
}
pop()
{ float v;
  v=top;
  top--;
  return(stack[v]);
  }
  eval(char v)
  {
  float m,n;
  switch(v)
  {
case '+' :stack[top+1]=pop()+pop();
			top++;
			break;
case '-' :stack[top+1]=-pop()+pop();
		  top++;
		  break;
case '*' :stack[top+1]=pop()*pop();
		  top++;
		  break;
case '/' :
m=pop();
n=pop();
stack[top+1]=1/m*n;
		   top++;
		   break;
case '^' :m=pop();
		  n=pop();
stack[top+1]=pow(n,m);
		   top++;
		   break;
}
}


