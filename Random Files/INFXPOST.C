                                                                          /*RAVINDRA P*/
                                                                           /*02211A0558*/
                                                                          /*CSE*/   
#include<stdio.h>
#include<conio.h>
#define size 10
typedef struct stacks
     {
	 char s[size];
	 int top;
     }s_t;
void convert(char *,char *);
void push(s_t *,char);
char pop(s_t *);
int icp(char);
int isp(char);

void main()
{
    char in[20],post[20];
    printf("enter the infix expression \n");
    gets(in);
    convert(in,post);
    printf("equivalent postfix expression=%s",post);
    getch();
}

void convert(char *in,char *post)
{
    char next,temp;
    int i,j;
    s_t a,*sp=&a;
    sp->top=-1;
    push(sp,'(');
    for(i=0,j=0;in[i]!='\0';i++)
    {
       next=in[i];
       if(next>='a' && next<='z'||next>='1' && next<='9')
       {
	  post[j]=next;
	  j++;
       }
       else
       {
	   while(icp(next)<isp(sp->s[sp->top]))
	   {
	       temp=pop(sp);
	       post[j]=temp;
	       j++;
	  }
	   if(icp(next)==isp(sp->s[sp->top]))
	      temp=pop(sp);
	   else
	      push(sp,next);
	   while(sp->s[sp->top]!='(')
	   {
	      temp=pop(sp);
	      post[j]=temp;
	      j++;
	   }
	   post[j]='\0';
	}
    }
}

void push(s_t *sp,char x)
{
    if(sp->top==size-1)
	 printf("stack is full");
    else
    {
	  sp->top++;
	  sp->s[sp->top]=x;
    }
}

char pop(s_t *sp)
{
    char x;
    x=sp->s[sp->top];
    sp->top--;
    return(x);
}

int icp(char x)
{
    switch(x)
    {
       case '+':
       case '-':
		return(1);
       case '*':
       case '/':
       case '%':
		return(3);
       case '(':
		return(5);
       case ')':
		return(0);
    }
}

int isp(char x)
{
    switch(x)
    {
	case '+':
	case '-':
		 return(2);
	case '*':
	case '/':
	case '%':
		 return(4);
	case '(':
		 return(0);
    }
}