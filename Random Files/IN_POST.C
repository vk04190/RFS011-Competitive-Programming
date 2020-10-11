			/*infix to post fix*/
#include<stdio.h>
#include<ctype.h>
int top,stack[81];
main()
 {
  int i;
  char c,x,e[81],pop();
  void display();
  void push(char);
  clrscr();
  printf("Enter the expression ending with '#'\n");
  i=0;
  do
   {
    c=getchar();
    e[i]=c;
    i++;
    }while(c!='#');
    e[i]='\0';
    stack[0]=' ';
    stack[1]='#';
    top=1;
    i=0;
    x=e[i];
    while(x!='#')
      {
       if(isalpha(x))
       printf("%c",x);
       else if(x==')')
	{
	 while(stack[top]!='(')
	 {
	 c=pop();
	 printf("%c",c);
	 }
	 pop();
       }
       else
       {
       while(isp(stack[top]>=icp(x));
       {
	c=pop();
	printf("%c",c);
       }
       push(x);
    }
    i++;
    x=e[i];
  }
  while(top>1)
   {
   c=pop();
   printf("%c",c);
   getch();
  }

  char pop()
   {
    int x;
    x=stack[top];
    top--;
    return x;
   }
   void push(char x)
     {
      stack[++top]=x;
     }
   int isp(char c)
     {
      if(c=='$')
      return 3;
      if(c=='*'||c=='/')
      return 2;
      if(c=='+'||c=='-')
      return 1;
      if(c=='(')
      return 0;
      if(c=='#')
      return -1;
    }
    int icp(char c)
    {
    if(c=='$')
    return 4;
    if(c=='*'||c=='/')
    return 2;
    if(c=='+'||c=='-')
    return 1;
    if(c=='(')
    return 0;
     }
     void display()
     {
     int i;
     printf("postfix expression is...\n");
     for(i=0;i<=top;i++)
     printf("%4d",stack[i]);
    }
   }

