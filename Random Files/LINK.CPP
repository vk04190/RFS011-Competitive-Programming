#include<conio.h>
#include<stdio.h>
#include<alloc.h>


struct node
{
int data;
struct node *link;
};
int count(struct node *q);
display(struct node *q);
append(struct node **q,int num);
main()
{
clrscr();
struct node *p;
p=NULL;

printf("\n number of element = %d",count(p));

append(&p,1);
append(&p,2);
append(&p,3);
append(&p,4);
//append(&p,5);
display(p);
printf("\n number of element = %d",count(p));
getch();
}
int count(struct node *q)
{
int c=0;
while(q!=NULL)
{
q=q->link;
c++;
}
return(c);
}
display(struct node *q)
{
while(q!=NULL)

{
printf("\n element = %d",q->data);
printf("\t element = %d",q->link);
q=q->link;

}
}
append(struct node **q,int num)
{
struct node *temp;
temp=*q;

if(*q==NULL)
{
*q=(struct node *)malloc(sizeof(struct node));
temp=*q;
}
else
{
while(temp->link!=NULL)
temp=temp->link;
temp->link=(struct node *)malloc(sizeof(struct node));
temp=temp->link;
}
temp->data=num;
temp->link=NULL;
}
