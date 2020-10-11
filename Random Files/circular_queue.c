/*PROGRAM TO IMPLEMENT CIRCULAR QUEUE*/
#include <stdio.h>
#define qsize 50
int qu[qsize];
int front,rear;

int insert()
{
int item;
if(rear==qsize)
rear=1;
else
rear++;
if(front!=rear)
{
printf("enter element to be inserted");
scanf("%d",&item);
qu[rear]=item;
if(front==0)
front++;
}
else
printf("overflow\n");
return;
}
int delete()
{
int item;
if(front!=0)
{
item=qu[front];
if(front==rear)
{
front=rear=0;
return(item);
}if(front==qsize)
front=1;
else
front++;
return(item);
}
else
printf("underflow");
return;
}
void display()
{
int i;
for(i=front;i<=rear;i++)
printf("%d",qu[i]);
printf("\n");
return;
}
main()
{
int i,j,k,item,choice;
int insert();
int delete();
void display();
front=rear=0;
do
{
printf("1.insert an element into qu\n");
printf("2.delete an element from qu\n");
printf("3.quit\n");
printf("\n enter choice");
scanf("%d",&choice);
switch(choice)
{
case1:insert();
printf("cqu after insertion is\n");
display();
printf("\n");
break;
case2:item=delete();
printf("item deleted is:%d\n",item);
printf("cqu after deletion is\n");
display();
printf("\n");
break;
default:break;
}
}
while(choice!=3);
}


