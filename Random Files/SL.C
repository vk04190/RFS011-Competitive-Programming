/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<malloc.h>
struct STACK
{
    int data;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    struct STACK *next;
};
typedef struct STACK stack;
stack *top=NULL;
void main()
{
	int flag;
	void push();
	void pop();
	void display();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	clrscr();
	while(1)
	{
	  printf("\n1.Push: ");
	  printf("\n2.Pop : ");
	  printf("\n3.Display:");
	  printf("\n4.Exit:");
	  printf("\nEnter your choice");
	  scanf("%d",&flag);
	  switch(flag)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	  {
	      case 1:  push();
		     break;
	      case 2:   pop();
		    break;
	      case 3:  display();
		    break;
	      case 4:exit(1);
	      default: printf("\nWrong choice");
	  }//end of switch
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      }//end of loop
  }//end of main
void push()
{
    stack *temp;
	temp=(stack*)malloc(sizeof(stack));
	printf("\nEnter the item to be pushed to stack:");
	scanf("%d",&temp->data);
	temp->next=top;
	top=temp;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
void pop()
{
    stack *temp;
    if(top==NULL)
    {
	printf("\nStack is Underflow(Empty)");
	getch();
    }
    else
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    {
       temp=top;
       printf("\npopped element is:%d",temp->data);
       top=top->next;
       free(temp);
       getch();
    }
}
void display()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   stack *temp;
   temp=top;
   if(top==NULL)
   {
      printf("\nStack is empty");
      getch();
   }
   else
   {
      printf("\nStack elements: ");
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