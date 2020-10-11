/* IMPLEMENTATION OF STACK OPERATION USING LINKED LIST */
#include<stdio.h>
#include<alloc.h>
struct stack
{
int data;
struct stack *next;
};
typedef struct stack node;
node *top;

int menu()
{
int n;
printf("\n enter your choice \n");
printf("\n 1.push() \n");
printf("\n 2.pop() \n");
printf("\n 3.display() \n");
printf("\n 4.exit");
scanf("%d",&n);
return(n);
}

void push()
{
node *p;
p=(node *)malloc(sizeof(node));
printf("enter item to be pushed on to the stack\n");
scanf("%d",&p->data);
p->next=top;
top=p;
}

int pop()
{
int item;
node *temp;
temp=top;
item=top->data;
top=temp->next;
return(item);
}

void display()
{
node *temp;
temp=top;
if(temp==NULL)
printf("stack is empty\n");
else
{
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
void main()
{
int c,item;
int menu();
void push();
int pop();
void display();
void create();
top==NULL;
create();
while(1)
{
clrscr();
c=menu();
switch(c)
{
case1:push();
break;
case2:item=pop();
break;
case3:display();
getch();
break;
case4:exit(0);
default: break;
printf("enter your choice");
scanf("%d",&c);
}
}
}
void create()
{
node*p;
while(1)
{
p=(node*)malloc(sizeof(node));
printf("enter an item");
scanf("%d",&p->data);
p->next=top;
top=p;
printf("Do 'U' want add one more node(Y\N)");
if(toupper(getch())=='N')
break;
}
}
}



