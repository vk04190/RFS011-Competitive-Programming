/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#define MAX 5
int dqueue[MAX];
int left=-1;
int right=-1;

   void input_que();
   void output_que();
   void insert_right();
   void insert_left();
   void delete_left();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   void delete_right();
   void display_que();

void main()
{
   int choice;
   clrscr();
   printf("\n1.input restricted dequeue:");
   printf("\n2.Output restricted dequeue:");
   printf("\nEnter your choice:");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   scanf("%d",&choice);
   switch(choice)
   {
	case 1:
		input_que();
		break;
	case 2:
		output_que();
		break;
	default:
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		printf("\nWrong choice");
    }
}
void input_que()
{
    int choice;
    while(1)
    {
       printf("\n1.Insert at right: ");
       printf("\n2.Delete from left: ");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
       printf("\n3.Delete from right: ");
       printf("\n4.Display: ");
       printf("\n5.Return to main ");
       printf("\n6.Quit ");
       printf("\nEnter your choice:");
       scanf("%d",&choice);
       switch(choice)
       {
	   case 1:
		insert_right();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		break;
	   case 2:
		delete_left();
		break;
	   case 3:
		delete_right();
		break;
	   case 4:
		display_que();
		break;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	   case 5:
		 return;
	   case 6:
		exit(1);
	   default:printf("\Wrong choice:");
       }
   }
}
void output_que()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    int choice;
    while(1)
    {
       printf("\n1.Insert at right: ");
       printf("\n2.Insert at left : ");
       printf("\n3.Delete from left: ");
       printf("\n4.Display: ");
       printf("\n5.Return to main ");
       printf("\n6.Quit ");
       printf("\nEnter your choice:");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
       scanf("%d",&choice);
       switch(choice)
       {
	   case 1:
		insert_right();
		break;
	   case 2:
		insert_left();
		break;
	   case 3:
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		delete_left();
		break;
	   case 4:
		display_que();
		break;
	   case 5:
		 return;
	   case 6:
		exit(1);
	   default:printf("\Wrong choice:");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
       }
  }
}
void insert_right()
{
   int data;
   if( (left==0&&right==MAX-1)||(left==right+1) )
   {
	printf("\nQueue Overflow:");
	getch();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	return;
   }
   if(left==-1)
   {
	left=0;
	right=0;
   }
   else if(right==MAX-1)
	return;
   else
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	right=right+1;
   printf("\nInput the element for adding in queue:");
   scanf("%d",&data);
   dqueue[right]=data;

}
void insert_left()
{
   int data;
   if( (left==0&&right==MAX-1)||(left==right+1) )
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   {
      printf("\nQueue Overflow");
      getch();
      return;
   }
   if(left==-1)
   {
      left=0;
      right=0;
   }
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   else if(left==0)
	left=MAX-1;
   else
	left=left-1;
   printf("\nInput the element fpr adding in queue");
   scanf("%d",&data);
   dqueue[left]=data;

}
void delete_left()
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
  if(left==-1)
  {
     printf("Queue Underflow");
     getch();
     return;
  }
  printf("\nElement deleted from queue is:%d",dqueue[left]);
  if(left==right)
  {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      left=-1;
      right=-1;
  }
  else if(left==MAX-1)
	left=0;
  else
	left=left+1;

}
void delete_right()
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
	if(left==-1)
	{
	    printf("Queue Underflow ");
	    getch();
	    return;
	}
	printf("\nElement deleted from queue is:%d",dqueue[right]);
	if(left==right)
	{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	   left=-1;
	   right=-1;
	}
	else if(right==0)
		right=MAX-1;
	else
		right=right-1;

}
void display_que()
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
   int fposition=left,rposition=right;
   if(left==-1)
   {
      printf("Queue is empty " );
      getch();
      return;
   }
   printf("\nQueue elements " );
   if(fposition<=rposition)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   {
       while(fposition<=rposition)
       {
	   printf(" %d",dqueue[fposition]);
	   fposition++;
       }
   }
   else
   {
	while(fposition<=MAX-1)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	{
	   printf("%d",dqueue[fposition]);
	   fposition++;
	}
	fposition=0;
	while(fposition<=rposition)
	{
	   printf("%d",dqueue[fposition]);
	   fposition++;
	}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   }

}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */