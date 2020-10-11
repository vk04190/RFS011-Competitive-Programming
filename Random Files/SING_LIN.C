			 /*SINGLE LINKED LIST*/
				 /*A.SANDEEP*/
				 /*02211A0560*/
				 /*C.S.E*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
  {
   int data;
   struct node*next;
  };
   int c=0;
   struct node*first=NULL;
   struct node*last=NULL;
   struct node*prev=NULL;
   struct node*next=NULL;
   struct node*newnode=NULL;

   void display();
   void append(int x);
   void insertbefore(int,int);
   void insertafter(int,int);
   void delnode(int);
   void search(int);
   void replace(int,int);
   void count();
   void reverse();
   void sort(char);

   void main()
     {
       int n,x,choice=0;
       char ch;
       while(choice<11)
	 {
	  clrscr();
	  printf("\nSINGLE LINKED LIST\n");
	  printf("\n____________________________________________________\n");
	  printf("\n\t1.DISPLAY THE LIST");
	  printf("\n\t2.CREATE/APPEND NEW NODE");
	  printf("\n\t3.Insert new node after specific node");
	  printf("\n\t4.Insert new node before specific node");
	  printf("\n\t5.DELETE a node");
	  printf("\n\t6.Search the list for specific node");
	  printf("\n\t7.Replace the specific data with new value");
	  printf("\n\t8.count the no. of nodes present in the node");
	  printf("\n\t9.Reverse the list");
	  printf("\n\t10.Sort the list");
	  printf("\n\t11.Quit\n");
	  printf("\n\tEnter u'r choice:");
	  scanf("%d",&choice);
	  switch(choice)
	    {
	     case 1:display();
		   break;
	     case 2:printf("Enter the data:");
		    scanf("%d",&x);
		    append(x);
		    break;
	     case 3:printf("Insert after the node no.:");
		    scanf("%d",&n);
		    printf("Enter the data for a new node:");
		    scanf("%d",&x);
		    insertafter(n,x);
		    break;
	     case 4:printf("Insert before node no.:");
		    scanf("%d",&n);
		    printf("Data to store is:");
		    scanf("%d",&x);
		    insertbefore(n,x);
		    break;
	     case 5:printf("Delete the node no.:");
		    scanf("%d",&n);
		    delnode(n);
		    break;
	     case 6:printf("Enter the data value to search");
		    scanf("%d",&n);
		    search(x);
		    break;
	     case 7:printf("Existing data value which should be replacedis:");
		    scanf("%d",&n);
		    printf("Enter the new data value:");
		    scanf("%d",&x);
		    replace(n,x);
		    break;
	     case 8:count();
		    break;
	     case 9:reverse();
		    break;
	  /*   case 10:printf("Sorting order");
		     printf("type 'a' for ascending,'d' for descending");
		     ch=getchar();
		     sort(ch);
		     break;   */
	     default:printf("WRONG CHOICE");
       }
      }
   }
   void append(int x)
      {
       newnode=(struct node*)malloc(sizeof(struct node));
       newnode->data=x;
       newnode->next=NULL;
       if(first==NULL)
	  {
	   printf("LIST IS EMPTY");
	   getch();
	   first=newnode;
	   last=newnode;
	   c++;
	  }
       else
	  {
	   last->next=newnode;
	   last=newnode;
	   c++;
	  }
       }
       void display()
	  {
	   struct node*temp;
	   clrscr();
	   temp=first;
	   if(temp==NULL)
	       {
	       printf("LIST IS EMPTY");
	       getch();
	       }
	   else
	     {
	      while(temp!=NULL)
		 {
		 printf("\t%d\n",temp->data);
		 temp=temp->next;
		 }
	      }
	      getch();
	   }
    void insertafter(int n,int x)
       {
	struct node*temp;
	int i;
	if(first==NULL)
	   {
	   printf("LIST IS EMPTY");
	   getch();
	   }
	else if(n<1||n>c)
	   {
	   printf("INVALID NODE NO.\n");
	   getch();
	   }
	else
	   {
	    newnode=(struct node*)malloc(sizeof(struct node));
	    newnode->data=x;
	    if(n==c)
	      {
	       last->next=newnode;
	       last=newnode;
	       newnode->next=NULL;
	      }
	    else if(n==1)
	      {
	       newnode->next=first->next;
	       first->next=newnode;
	      }
	    else
	      {
	       temp=first;
	       for(i=1;i<n;i++)
		 {
		  temp=temp->next;
		 }
	       newnode->next=temp->next;
	       temp->next=newnode;
	       c++;
	    }
	 }

       }

    void insertbefore(int n,int x)
       {
	struct node*temp;
	int i;
	if(first==NULL)
	   printf("LIST IS EMPTY");
	else if(n<1||n>c)
	   printf("INVALID NODE NO.\n");
	else
	   {
	    newnode=(struct node*)malloc(sizeof(struct node));
	    newnode->data=x;
	    if(n==1)
	      {
	       newnode->next=first;
	       first=newnode;
	      }
	    else
	      {
	       temp=first;
	       for(i=1;i<n-1;i++)
		  temp=temp->next;
	       newnode->next=temp->next;
	       temp->next=newnode;
	      }
	    c++;
	   }
	}
    void delnode(int n)
       {
	 int i;
	 struct node*temp;
	 if(first==NULL)
	   printf("LIST IS EMPTY CANNOT PERFORM DELETION");
	else if(n<1||n>c)
	   printf("INVALID NODE NO.\n");
	else
	  {
	   if(n==1)
	     {
	      temp=first;
	      first=temp->next;
	      free(temp);
	     }
	else if(n==c)
	    {
	     prev=first;
	     for(i=1;i<n-1;i++)
	       prev=prev->next;
	     temp=prev->next;
	     prev->next=NULL;
	     last=prev;
	    }
	else
	   {
	    prev=first;
	    for(i=1;i<n-1;i++)
	       {
	       prev=prev->next;
	       }
	    temp=prev->next;
	    prev->next=temp->next;
	   }
	   free(temp);
	   c--;
	}
    }

   void search(int x)
     {
      int i,found=0;
      struct node *temp;
      if(first==NULL)
	 printf("List is empty");
      else
	{
	 printf("Total elements searched %d\n",x);
	 temp=first;
	 for(i=1;i<c;i++)
	    {
	     if(temp->data==x)
	     {
	      printf("Match found at node no. %d\n",i);
	      found++;
	     }
	 temp=temp->next;
	  }
	 printf("Total matches found are %d\n",found);
       }
      getch();
  }
 void replace(int x,int y)
     {
      struct node*temp;
      int i,found=0;
      if(first==NULL)
	 printf("List is empty");
      else
	{
	 printf("Total items of the list are %d",x);
	 temp=first;
	 for(i=1;i<c;i++)
	   {
	    if(temp->data==x)
	      {
	       printf("Match found at %d position",i);
	       temp->data=y;
	       found++;
	      }
	      temp=temp->next;
	    }
	   if(found)
	    printf("\nTotal data values %d node(s) are replaced with %d",found,y);
	   else
	   printf("\nNO matches found");
	 }
	 getch();
      }

      void reverse()
	{
	 struct node *a=first;
	 struct node *b=NULL;
	 struct node *c=NULL;
	 while(a!=NULL)
	    {
	     b=a->next;
	     a->next=c;
	     c=a;
	     a=b;
	    }
	    last=first;
	    first=c;
	}
 void count()
    {
     int count=0;
     struct node*temp;
     temp=first;
     if(first==NULL)
	{
	 printf("List is empty");
	}
     while(temp!=NULL)
	{
	 count++;
	 temp=temp->next;
	}
	printf("No. of nodes=%d",count);
	getch();
    }











