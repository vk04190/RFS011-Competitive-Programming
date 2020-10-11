/* purpose of this program is to find length,insertion after & before the 
   given node & also deletion in the singly linked lists*/
                                                    /*RAVINDRA P*/
                                      /*02211A0558*/
                                      /*CSE*/   
# include <stdio.h>
typedef struct node
        {
         int data;
         struct node *link;
        }node_t;
node_t *create();
void menu();
int length(node_t*);
void inserta(int,node_t *);
node_t *insertb(int,node_t *,node_t *);
node_t *del(node_t *,node_t *);
void display(node_t *);
void main()
{
  node_t *head,*temp;
  int x,ch,i,j;
  clrscr();
  head=create();
  menu();
  printf("enter your choice:");
  scanf("%d",&ch);
  while(ch<6)
  {
   switch(ch)
   {
    case 1:
	    printf("length=%d",length(head));
	    break;
    case 2:
	   printf("enter the node no.\n");
	   scanf("%d",&i);
	   if(i>length(head))
	      printf("not possible");
	   else
	     {
	       printf("enter the value\n");
	       scanf("%d",&x);
	       temp=head;
	       for(j=1;j<=i-1;j++)
		 temp=temp->link;
	       inserta(x,temp);
	      }
	      break;
   case 3:
	  printf("enter the node no.\n");
	  scanf("%d",&i);
	  if(i>length(head))
	     printf("not possible");
	  else
	    {
	      printf("enter the values\n");
	      scanf("%d",&x);
	      temp=head;
	      for(j=1;j<=i-1;j++)
	       temp=temp->link;
	      head=insertb(x,head,temp);
	     }
	 break;
   case 4:
	  printf("enter the node no.\n");
	  scanf("%d",&i);
	  if(i>length(head))
	     printf("not possible");
	  else
	    {
	      temp=head;
	      for(j=1;j<=i-1;j++)
		temp=temp->link;
	      head=del(head,temp);
	      printf("deleted element=%d",x);
	     }
	      break;
   case 5:
	  display(head);
	  break;
  }
 menu();
 printf("enter your choice\n");
 scanf("%d",&ch);
 }
 getch();
}
node_t * create()
{
 int x;
 node_t *next,*head=NULL,*prev;
 printf("enter the data\n");
 while(scanf("%d",&x)!=EOF);
 {
   next=(node_t *)malloc(sizeof(node_t));
   next->data=x;
   if(head==NULL)
      head=next;
   else
     prev->link=NULL;
   prev=next;
 }
 prev->link=NULL;
 return(head);
}
void display(node_t *first)
{
 node_t *temp;
 temp=first;
 if(temp==NULL)
   printf("empty");
 else
 {
  while(temp!=NULL)
  {
    printf("%d--->",temp->data);
    temp=temp->link;
  }
 }
}
int length(node_t *first)
{
  node_t *temp=first;
  int c=0;
    while(temp!=NULL)
    {
     c++;
     temp=temp->link;
    }
  return(c);
}
void menu()
{
  printf("\n\n1. Length\n");
  printf("2.Insertion after the given node\n");
  printf("\n3.Insertion before the given node\n");
  printf("4.Deleting the given node\n");
  printf("5.Display\n");
}
void inserta(int x,node_t *p)
{
  node_t *newnode;
  newnode=(node_t *)malloc(sizeof(node_t));
  newnode->data=x;
  newnode->link=p->link;
  p->link=newnode;
 }
 node_t *insertb(int x,node_t *first,node_t *p)
 {
    node_t *newnode,*temp;
    newnode=(node_t*)malloc(sizeof(node_t));
    newnode->data=x;
    newnode->link=p;
    if(p==first)
       first=newnode;
    else
    {
       temp=first;
       while(temp->link=p)
	  temp=temp->link;
       temp->link=newnode;
    }
    return(first);
  }

  node_t *del(node_t *first,node_t *p)
  {
     node_t *temp;
     if(p==first)
     {
	first=first->link;
	free(p);
     }
     else
     {
	temp=first;
	while(temp->link!=p)
	  temp=temp->link;
	temp->link=p->link;
	free(p);
     }
     return(first);
  }







