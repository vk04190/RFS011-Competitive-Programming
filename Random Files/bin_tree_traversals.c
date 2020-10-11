/*PROGRAM TO CONSTRUCT A BINARY TREE AND TRAVERSE  THE SAME/*
/*operations on trees*/
#include <stdio.h>
#define NULL0
#define max 50
struct tree{
int data;
struct tree*left;
struct tree*right;
};
typedef struct tree btree;
btree *rt;
int stack[max];
int top,lnode;
void push(btree *x)
{
stack[++top]=x;
}int pop()
{
return(stack[top--]);
}
void create()
{
btree*p,*temp;
char ans;
stack[top]=NULL;
clrscr();
fflush(stdin);
rt=(btree *)malloc(sizeof(btree));
printf("enter data to be inserted into the root node\n");
scanf("%d",&rt->data);
p=rt;
while(p)
{
printf("Is the right child of %10d data existing (y/n)\n",p->data);
fflush(stdin);
ans=toupper(getch());
if(ans=="N")
p->right=NULL;
else
{temp=(btree*)malloc(sizeof(btree));
fflush(stdin);
printf("enter data\n");
scanf("%d",&temp->data);
p->right=temp;
}
fflush(stdin);
printf("Is the child of %10d data existing(y/n)\n",p->data);
ans=toupper(getch());
if(ans=='N')
{
p->left=NULL;
p=pop();
}
else
{
temp=(btree*)malloc(sizeof(btree));
printf("enter data\n");
scanf("%d",&temp->data);
p->left=temp;
p=p->left;
}
}
}
int menu()
{
int c;
printf("\t\t\tMAIN MENU\n");
printf("\t\t1.Create binary tree\n");
printf("\t\t2.traverse the tree in inorder \n");
printf("\t\t3.traverse the tree in postorder\n");
printf("\t\t4.traverse tree in preorder\n");
printf("\t\t5.Find no.of nodes in a binary tree\n");
printf("\t\t6.Exit\n");
scanf("%d",&c);
return(c);
}
void printinorder(btree *r)
{
if(r!=NULL)
{
printinorder(r->left);
printf("%6d",r->data);
printinorder(r->right);
}
}
void printpreorder(btree*r)
{
if(r!=NULL)
{
printf("%6d",r->data);
printpreorder(r->left);
printpreorder(r->right);
}
}
void printpostorder(btree*r)
{
if(r!=NULL)
{
printpostorder(r->left);
printpostorder(r->right);
printf("%6d",r->data);
}
}
void main()
{
int choice,n;
top=0;
while(1)
{
clrscr();
choice=menu();
switch(choice)
{
case1:create();
break;
case2:printinorder(rt);
getch();
break;
case3:printpostorder(rt);
getch();
break;
case5:n=countnodes();
printf("No.of nodes in a binary tree   :%10d\n",n);
printf("No. of leaf nodes in a binary tree   %10d\n",lnode);
printf("No. of interior nodes in a binary tree:%10d\n",(n-lnode-1));
getch();
break;
case6:exit(0);
}
}
}
