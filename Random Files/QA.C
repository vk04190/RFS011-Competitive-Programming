/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

#define MAX 5
int rear=-1;
int front=-1;
int queue[MAX];
void main()
{
	int flag;
	void insert();
	void del();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	void display();
	clrscr();
	while(1)
	{
	  printf("\n1.Insert Element: ");
	  printf("\n2.Delete Element: ");
	  printf("\n3.Display Elements:");
	  printf("\n4.For Quit:");
	  printf("\nEnter your choice");
	  scanf("%d",&flag);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	  switch(flag)
	  {
	      case 1:  insert();
		     break;
	      case 2:   del();
		    break;
	      case 3:  display();
		    break;
	      case 4:exit(1);
	      default: printf("\nWrong choice");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	  }//end of switch
      }//end of loop
  }//end of main
void insert()
{
    int data;
    if(rear==MAX-1)
    {
	printf("\nQueue is Overflow(Full)");
	getch();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    }
    else
    {
       if(front==-1)
	   front=0;
       printf("\nEnter the item to be inserted in Queue:");
       scanf("%d",&data);
       rear=rear+1;
       queue[rear]=data;
     }
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
void del()
{
    if(front==-1||front>rear)
    {
	printf("\nQueue is Underflow(Empty)");
	getch();
    }
    else
    {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
       printf("\nElement Deleted from Queue is:%d",queue[front]);
       front=front+1;
       getch();
    }
}
void display()
{
   int i;
   if(front==-1)
   {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      printf("\nQueue is empty");
      getch();
   }
   else
   {
      printf("\nQueue elements: ");
      for(i=front;i<=rear;i++)
	 printf("  %d",queue[i]);
      getch();
   }
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */