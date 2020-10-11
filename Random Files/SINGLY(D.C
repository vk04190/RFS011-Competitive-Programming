/* purpose of this program is to create & display singly linked lists*//*RAVINDRA P*/
                                                                                                    /*02211A0558*/
                                                                                                    /*CSE*/   
                                                     
# include <stdio.h>
typedef struct node
        {
         int data;
         struct node *link;
        }node_t;
node_t *create();
void display(node_t *);
void main()
{
  node_t *head;
  clrscr();
  head=create();
  display(head);
  getch();
}
node_t *create()
{
 node_t *first=NULL,*prev,*newnode;
 int x;
 printf("enter data & at the end print ctrl+z");
 while((scanf("%d",&x))!=EOF)
 {
  newnode=(node_t *)malloc(sizeof(node_t));
  newnode->data=x;
  if(first==NULL)
    first=newnode;
  else
    prev->link=newnode;
    prev=newnode;
   prev->link=NULL;
  }
   return(first);
}
void display(node_t *p)
{
  if(p==NULL)
    printf("list is empty");
  else
  {
    printf("the list is \n");
    while(p!=NULL)
    {
     printf("%d---->",p->data);
     p=p->link;
    }
  }
}