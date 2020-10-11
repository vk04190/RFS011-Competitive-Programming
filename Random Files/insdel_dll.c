/*FUNCTIONS FOR INSERTION AND DELETION OPERATIONS IN DOUBLY LINKED LIST*/
#include<stdio.h>
 struct list{
	    int data;
	    struct list*rlink,*llink;
	    };
 typedef struct list dnode;
 dnode *last,*first;
 void main()
 {
 void append();
 void addatbeg();
 void addafter();
 void display();
 void create();
 void xdelete();
 int menu();
 int c;
 first=NULL;
 while(1)
 {
 clrscr();
 c=menu();
 switch(c)
 {
 case 1:create();
 break;
 case 2:append();
 break;
 case 3:addatbeg();
 break;
 case 4:addafter();
 break;
 case 5:xdelete();
 break;
 case 6:display();
 getch();
 break;
 case 7:exit(0);
 }
 }
 }
 int menu()
 {
 int n;
 printf("ENTER YOUR CHOICE \n\n");
 printf ("1.create a list\n");
 printf("2.append a note to the list\n");
 printf("3.add node to the beginning of the list\n");
 printf("4.add a node after the specified node\n");
 printf("5.delete a node from the list \n");
 printf("6.display the list\n");
 printf("7.exit from the program\n");
 scanf("%d",&n);
 return(n);
 }
 void append()
 {
 dnode *temp,*p;
 temp=first;
 p=(dnode*)malloc(sizeof(dnode));
 printf("Enter data\n");
 scanf("%d",&p->data);
 if(temp==NULL)
 {
 p->llink=first;
 p->rlink=first;
 first=p;
 }
 else
 {
 while(temp->rlink!=NULL)
 temp=temp->rlink;
 p->rlink=temp->rlink;
 temp->rlink=p;
 p->llink=temp;
 last=p;
 }
 return(0);
 }void addatbeg()
 {
 dnode*p;
 p=(dnode*)malloc(sizeof(dnode));
 printf("Enter data\n");
 scanf("%d%",&p->data);
 p->rlink=first;
 p->llink=first->llink;
 first->llink=p;
 first=p;
 return(0);
 }
 void addafter()
 {
 dnode *temp,*p;
 int loc,i=1;
 temp=first;
 printf("Enter the location of the dnode\n");
 scanf("%d%{",&loc);
 while((i)&&(temp->rlink!=NULL))
 {
 temp=temp->rlink;
 i++;
 }
 if(temp->rlink==NULL)
 printf("There are less than %d elements\n",loc);
 else
 {
 p=(dnode*)malloc(sizeof(dnode));
 printf("Enter data\n");
 scanf("%d",&p->data);
 p->llink=temp;
 p->rlink=temp->rlink;
 (temp->rlink)->llink=p;
 temp->rlink=p;return(0);
 }
 }
 void display()
 {dnode*temp;
 temp=first;printf("forward\n");
 while(temp!=NULL)
 {
 printf("%6d\n",temp->data);
 temp=temp->llink;
 }
 return;
 }
 void xdelete()
 {
 dnode *temp,*u;
 int i=1,loc;
 temp=first;
 printf("enter node no to be deleted \n");
 scanf("%d",&loc);
 while(temp!=NULL)
 {
 if(i==loc)
 {
 if(i==1)
 {
 first=temp->rlink;
 first->llink=temp->llink;
 free(temp);
 return(0);
 }
 else
 {
 u->rlink=temp->rlink;
 if(temp->rlink!=NULL)
 (temp->rlink)->llink=u;
 else
 last=u;
 free(temp);
 return(0);
 }
 }
 else
 {
 u=temp;
 temp=temp->rlink;
 i++;
 }
 }
 printf("location not found");
 }
 void create()
 {
 dnode*temp,*p;
 float x;
 temp=first;
 while(1)
 {
 clrscr();
 p=(dnode *)malloc(sizeof(dnode));
 printf("enter data\n");
 scanf("%d %s",&p->data);
 if(temp==NULL)
 {
 first=p;
 p->llink=NULL;
 temp=p;
 }
 else
 {
 temp->rlink=p;
 p->llink=temp;
 temp=p;
 }
 printf("do you want to add one more term(y/n)?\n");
 if(toupper(getch())=='N')
 break;
 }
 p->rlink==NULL;
 last=p;
 return(0);
 }





















