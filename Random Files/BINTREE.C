                                                                           /*P.C.NARAYANA RAO*/
                                      /*02211A0532*/
                                      /*CSE*/   
                                      
#include <stdio.h>
#define SIZE 10
typedef struct node
      {
	 struct node *lchild;
	 char data;
	 struct node *rchild;
      }node_t;
typedef struct stack
     {
       node_t *s[SIZE];
       int top;
     }s_t;
node_t *bcreate();
void push(node_t*,s_t*);
node_t *pop(s_t*);
void inorder(node_t*);
void postorder(node_t*);
void preorder(node_t*);
void main()
{
  node_t *t;
  clrscr();
  t=bcreate();
  printf("\ninorder traversel:");
  inorder(t);
  printf("\npreorder traversel:");
  preorder(t);
  printf("\npostorder traversel:");
  postorder(t);
  getch();
}

node_t *bcreate()
{
  node_t *t,*p,*l,*r;
  char ch;
  s_t a,*sp=&a;
  sp->top=-1;
  push(NULL,sp);
  t=p=(node_t*)malloc(sizeof(node_t));
  printf("enter the root node\n");
  fflush(stdin);
  scanf("%c",&p->data);
  while(p!=NULL)
  {
    printf("enter whether the right child exits for the node%c:",p->data);
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {
      r=(node_t*)malloc(sizeof(node_t));
      printf("enter the right child of node%c:",p->data);
      fflush(stdin);
      scanf("%c",&r->data);
      p->rchild=r;
      push(r,sp);
    }
    else
      p->rchild=NULL;
      printf("enter whether the left child exits for the node%c:",p->data);
      fflush(stdin);
      scanf("%c",&ch);
      if(ch=='y'||ch=='Y')
      {
	l=(node_t*)malloc(sizeof(node_t));
	printf("enter the left child of node%c:",p->data);
	fflush(stdin);
	scanf("%c",&l->data);
	p->lchild=l;
	p=l;
     }
     else
     {
       p->lchild=NULL;
       p=pop(sp);
     }
   }
  return(t);
}

void push(node_t *p,s_t*sp)
{
  if(sp->top==SIZE-1)
     printf("stack is full");
  else
     {
       sp->top++;
       sp->s[sp->top]=p;
    }
}

node_t *pop(s_t*sp)
{
  node_t *p;
  p=sp->s[sp->top];
  sp->top--;
  return(p);
}

void inorder(node_t*t)
{
  if(t!=NULL)
    {
      inorder(t->lchild);
      printf("%c",t->data);
      inorder(t->rchild);
   }
}

void preorder(node_t*t)
{
 if(t!=NULL)
   {
    printf("%c",t->data);
    preorder(t->lchild);
    preorder(t->rchild);
   }
}

void postorder(node_t*t)
{
 if(t!=NULL)
    {
     postorder(t->lchild);
     postorder(t->rchild);
     printf("%c",t->data);
    }
}


