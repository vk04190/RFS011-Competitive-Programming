/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>

#define MAX 5
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int top=-1;
int stack[MAX];
void main()
{
	int flag;
	void push();
	void pop();
	void display();
	clrscr();
	while(1)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	{
	  printf("\n1.Push: ");
	  printf("\n2.Pop : ");
	  printf("\n3.Display:");
	  printf("\n4.Exit:");
	  printf("\nEnter your choice");
	  scanf("%d",&flag);
	  switch(flag)
	  {
	      case 1:  push();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		     break;
	      case 2:   pop();
		    break;
	      case 3:  display();
		    break;
	      case 4:exit(1);
	      default: printf("\nWrong choice");
	  }//end of switch
      }//end of loop
  }//end of main
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void push()
{
    int data;
    if(top==MAX-1)
    {
	printf("\nStack is Overflow(Full)");
	getch();
    }
    else
    {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
       printf("\nEnter the item to be pushed to stack:");
       scanf("%d",&data);
       top=top+1;
       stack[top]=data;
     }
}
void pop()
{
    if(top==-1)
    {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	printf("\nStack is Underflow(Empty)");
	getch();
    }
    else
    {
       printf("\npopped element is:%d",stack[top]);
       top=top-1;
       getch();
    }
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void display()
{
   int i;
   if(top==-1)
   {
      printf("\nStack is empty");
      getch();
   }
   else
   {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      printf("\nStack elements: ");
      for(i=top;i>=0;i--)
	 printf("  %d",stack[i]);
      getch();
   }
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */