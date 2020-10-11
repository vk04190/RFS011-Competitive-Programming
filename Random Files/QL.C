/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<malloc.h>
struct QUEUE
{
    int data;
    struct QUEUE *next;
};
typedef struct QUEUE queue;
queue *front=NULL;
queue *rear=NULL;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
	int flag;
	void insert();
	void del();
	void display();
	clrscr();
	while(1)
	{
	  printf("\n1.Insert Element: ");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	  printf("\n2.Delete Element: ");
	  printf("\n3.Display Elements:");
	  printf("\n4.For Quit:");
	  printf("\nEnter your choice");
	  scanf("%d",&flag);
	  switch(flag)
	  {
	      case 1:  insert();
		     break;
	      case 2:   del();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		    break;
	      case 3:  display();
		    break;
	      case 4:exit(1);
	      default: printf("\nWrong choice");
	  }//end of switch
      }//end of loop
  }//end of main
void insert()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	queue *temp;
	temp=(queue*)malloc(sizeof(queue));
	printf("\nEnter the item to be inserted in Queue:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(front==NULL)
	      front=temp;
	else
	     rear->next=temp;
	rear=temp;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
void del()
{
    queue *temp;
    if(front==NULL)
    {
	printf("\nStack is Underflow(Empty)");
	getch();
    }
    else
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    {
       temp=front;
       printf("\nDeleted element is:%d",temp->data);
       front=front->next;
       free(temp);
       getch();
    }
}
void display()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   queue *temp;
   temp=front;
   if(front==NULL)
   {
      printf("\nQueue is empty");
      getch();
   }
   else
   {
      printf("\nQueue elements: ");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      while(temp!=NULL)
      {
	 printf("  %d",temp->data);
	 temp=temp->next;
      }
      getch();
   }
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */