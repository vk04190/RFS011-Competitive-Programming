/* PROGRAM TO IMPLEMENT QUEUE OPERATION USING LINKED LIST */
#include <stdio.h>
#include <alloc.h>
struct queue
{
int data;
struct queue *next;
};
typedef struct queue node;
node *front,*rear;
int menu()
{
int n;
printf("\n enter your choice\n");
printf("\n 1.queueinsert()\n");
printf("\n 2.queuedelete()\n");
printf("\n 3.display()\n");
printf("\n 4.exit from the program\n");
scanf("%d",&n);
return(n);
};
void qins()
{
node*p;
p=(node*)malloc(sizeof(node));

printf("enter an item");
scanf("%d",&p->data);
if(front==NULL)
{
p->next=front;
rear=p;
front=p;
}
else
{
p->next=rear->next;
rear->next=p;
rear=p;
}
}
int qdelete()
{
int item;
node*temp;
temp=front;
item=front->data;
front=front->next;
free(temp);
return(item);
}
void display()
{
node*temp;
temp=front;
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
void main()
{
int c,item;
void create();
rear=front=NULL;
create();
while(1)
{
clrscr();
c=menu();
switch(c)
{
case1:qins();
break;
case2:item=qdelete();
break;
case3:display();
getch();
break;
case4:exit(0);
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
if(front==NULL)
{
p->next=front;
rear=p;
front=p;
}
else
{
p->next=rear->next;
rear->next=p;
rear=p;
}
printf("Do 'U' want add one more node\n");
if(toupper(getch)=='N')
break;
}
}





