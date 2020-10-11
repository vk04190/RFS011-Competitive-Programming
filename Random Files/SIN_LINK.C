		     /*Single linked list*/
				  /*A.SANDEEP*/
				  /*02211A0560*/
				  /*C.S.E.*/
  #include<stdio.h>
  #include<conio.h>
  #include<stdlib.h>
  struct node
    {
      int data;
      struct node *next;
    };
      void display();
      void append(int x);
      struct node *first=NULL;
      struct node *last=NULL;
      struct node *newnode=NULL;
      void main()
	{
	 char ch='y';
	 int x;
	 clrscr();
	 printf("CRATING LINKRD LIST");
	 while(ch=='y')
	    {
	     printf("\nEnter the data:");
	     scanf("%d",&x);
	     append(x);
	     printf("\nDO U WANT TO CREATE ANOTHER NODE[1\N]:");
	     fflush(stdin);
	     ch=getchar();
	    }
	    display();
	    getch();
	 }
	void append(int x)
	   {
	    newnode=(struct node*)malloc(sizeof(struct node));
	    newnode->data=x;
	    newnode->next=NULL;
	      if(first==NULL)
		 {
		  first=newnode;
		  last=newnode;
		  printf("LIST WAS EMPTY,ONE NODE IS CREATED\n");
		 }
	      else
		{
		 last->next=newnode;
		 last=newnode;
		}
	   }
      void display()
	 {
	  struct node *temp;
	   printf("The elements in the node are:\n");
	   temp=first;
	   if(temp==NULL)
	     printf("node is empty\n");
	  while(temp!=NULL)
	   {
	    printf("%5d",temp->data);
	    temp=temp->next;

	    }
	 }





