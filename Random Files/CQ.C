/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>

#define MAX 5
int rear=-1;
int front=-1;
int cqueue[MAX];
void main()
{
	int flag;
	void insert();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	void del();
	void display();
	clrscr();
	while(1)
	{
	  printf("\n1.Insert Element: ");
	  printf("\n2.Delete Element: ");
	  printf("\n3.Display Elements:");
	  printf("\n4.For Quit:");
	  printf("\nEnter your choice");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	  scanf("%d",&flag);
	  switch(flag)
	  {
	      case 1:  insert();
		     break;
	      case 2:   del();
		    break;
	      case 3:  display();
		    break;
	      case 4:exit(1);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	      default: printf("\nWrong choice");
	  }//end of switch
      }//end of loop
  }//end of main
void insert()
{
    int data;
    if( (front==0&&rear==MAX-1) ||(front==rear+1) )
    {
	printf("\nQueue is Overflow(Full)");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	getch();
	return;
    }
    if(front==-1)
    {
	front=0;
	rear=0;
    }
    else if(rear==MAX-1)
	   rear=0;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
       else
	   rear=rear+1;
    printf("\nEnter the item to be inserted in CQueue:");
    scanf("%d",&data);
    cqueue[rear]=data;

}
void del()
{
    if(front==-1)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    {
	printf("\nQueue is Underflow(Empty)");
	getch();
    }
    printf("\nElement Deleted from Queue is:%d",cqueue[front]);
    getch();
    if(front==rear)
    {
       front=-1;
       rear=-1;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    }
    else
       if(front==MAX-1)
	 front=0;
       else
	  front=front+1;

}
void display()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   int fposition=front,rposition=rear;
   if(front==-1)
   {
      printf("\nCQueue is empty");
      getch();
      return;
   }
   printf("\nCQUEUE elements:");
   if(fposition<=rposition)
     while(fposition<=rposition)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     {
	  printf(" %d",cqueue[fposition]);
	  fposition++;
     }
   else
   {
      while(fposition<=MAX-1)
      {
	  printf(" %d",cqueue[fposition]);
	  fposition++;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      }
      fposition=0;
      while(fposition<=rposition)
      {
	 printf(" %d" ,cqueue[fposition]);
	 fposition++;
      }
   }
   getch();
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */