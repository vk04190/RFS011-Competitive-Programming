/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<malloc.h>
struct PQUEUE
{
   int priority;
   int data;
   struct PQUEUE *next;
};
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
typedef struct PQUEUE pqueue;
pqueue *front=NULL;
void main()
{
	int flag;
	void insert();
	void del();
	void display();
	clrscr();
	while(1)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	{
	  printf("\n1.Insert Element: ");
	  printf("\n2.Delete Element: ");
	  printf("\n3.Display Elements:");
	  printf("\n4.For Quit:");
	  printf("\nEnter your choice");
	  scanf("%d",&flag);
	  switch(flag)
	  {
	      case 1:  insert();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		     break;
	      case 2:   del();
		    break;
	      case 3:  display();
		    break;
	      case 4:exit(1);
	      default: printf("\nWrong choice");
	  }//end of switch
      }//end of loop
  }//end of main
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void insert()
{
	pqueue *temp,*q;
	temp=(pqueue*)malloc(sizeof(pqueue));
	printf("\nEnter the item to be inserted in PQueue:");
	scanf("%d",&temp->data);
	printf("\nEnter its priority: ");
	scanf("%d",&temp->priority);
	if(front==NULL||temp->priority<front->priority)
	{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	   temp->next=front;
	   front=temp;
	}
	else
	{
	    q=front;
	    while(q->next!=NULL && q->next->priority<=temp->priority)
		q=q->next;
	    temp->next=q->next;
	    q->next=temp;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	 }
}
void del()
{
    pqueue *temp;
    if(front==NULL)
    {
	printf("\nPQUEUE is Underflow(Empty)");
	getch();
    }
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    else
    {
       temp=front;
       printf("\nDeleted element is:%d",temp->data);
       front=front->next;
       free(temp);
       getch();
    }
}
void display()
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
   pqueue *temp;
   temp=front;
   if(front==NULL)
   {
      printf("\nPQueue is empty");
      getch();
   }
   else
   {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      printf("\nPriority item ");
      printf("\tQueue is: ");
      while(temp!=NULL)
      {
	 printf("\n%5d\t%5d",temp->priority,temp->data);
	 temp=temp->next;
      }
      getch();
   }
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */