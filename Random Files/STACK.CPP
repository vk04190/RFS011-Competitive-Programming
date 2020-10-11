#include<conio.h>
#include<stdio.h>
#include<alloc.h>
struct node
{
int data;
struct node *next;
};
struct node *stack=NULL;
struct node *top=stack;
push(int newv);
display();
int pop();
main()
{
clrscr();
int newv,del;
push(1);
push(2);
push(3);
display();
push(4);
display();
printf("\n delet %d ",pop());
printf("\n delet %d ",pop());
printf("\n delet %d ",pop());
printf("\n delet %d ",pop());
printf("\n delet %d ",pop());
display();
push(5);
push(6);
push(7);
display();
printf("\n delet %d ",pop());
display();
getch();
}
push(int newv)
{
struct node *newnode;
if (stack==NULL)
{
newnode=(struct node *)malloc(sizeof(node));
newnode->data=newv;
newnode->next=NULL;
stack=newnode;
top=stack;
}
else
{
newnode=(struct node *)malloc(sizeof(node));
newnode->data=newv;
newnode->next=NULL;
top->next=newnode;
top=newnode;
}
}
display()
{
struct node *temp=stack;
while(temp!=NULL)
{
printf("\n element %d",temp->data);
temp=temp->next;
}
}
int pop()
{
int popv=0;
struct node *target=stack;
if (stack==NULL)
printf("\n Underflow");
else
{
if(top==stack)
{
popv=top->data;
free(top);
stack=NULL;
top=stack;
}
else
{
while(target->next!=top)
target=target->next;
popv=top->data;
free(top);
top=target;
target->next=NULL;
}
}
return (popv);
}