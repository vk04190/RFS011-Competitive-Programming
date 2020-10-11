/*PROGRAM TO EVALUATE PREFIX EXPRESSION*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
static float stack[30],n;
static int top;
main()
{
static char s[40];
static int i;
void push(float);
clrscr();
printf("\nenter the prefix expression\n");
scanf("%s",s);
i=strlen(s)-1;top=-1;
while(i>=0)
{
if(isalpha(s[i])) {printf("\n enter the value for %c     ",s[i]);
				   scanf("%f",&n);
				   push(n); }
else eval(s[i]);
i--;
}
printf("\n\n value of expression is    %f,stack[top]);
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
  int a,b;
  switch(v)
  {
  case '+' :stack[top+1]=pop()+pop();
  top++;
  break;
  case '-' :stack[top+1]=pop()-pop();
  top++;
  break;
  case '*' :stack[top+1]=pop()*pop();
  top++;
  break;
  case '/' :stack[top+1]=pop()/pop();
  top++;
  break;
  case '^' :a=pop();b=pop();
  stack[top+1]=pow(a,b);
  top++;
  break;
  }
  }

