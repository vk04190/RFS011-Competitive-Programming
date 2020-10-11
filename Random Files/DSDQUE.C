	   /*PROGRAM TO IMPLEMENT DEQUEUES
				Name:M.Manoj Kumar
				Branch:CSE
				Roll.No.:02211A0529*/

#include<stdio.h>
#include<conio.h>
int dq[10];
int r=-1;
int f=0;
int temp;
void finsert();
void rinsert();
void fdelet();
void rdelet();
void display();
void main()
{
    int ch=1;
    clrscr();
    while (ch==1||ch==2||ch==3||ch==4||ch==5)
    {
       printf("1:insertion from front end ");
       printf("2:insertion from rear end ");
       printf("3:deletion from front end ");
       printf("4:deletion from rear end ");
       printf("5:display ");
       printf("6:xquit ");
       printf("enter your choice ");
       scanf("%d",&ch);
       switch(ch)
       {
	  case 1:finsert();
		 break;
	  case 2:rinsert();
		 break;
	  case 3:fdelet();
		 break;
	  case 4:rdelet();
		 break;
	  case 5:display();
		 break;
	  case 6:printf("press any key to exit \n");
		 break;
       }
      getch();
    }
}
void finsert()
{
    int n;
    if (r==-1&&f==0)
    {
      r++;
      printf("enter the element into the queue \n");
      scanf("%d",&n);
      dq[r]=n;
      printf("the element inserted is %d \n",n);
    }
   else if (f==0)
    printf("insertion from front end is not possible \n");
    else
    {
       f--;
       printf("enter the element \n");
       scanf("%d",&n);
       dq[f]=n;
       printf("the element inserted is %d \n",n);
    }
}
void rinsert()
{
   int n;
   if(r==9)
   printf("insertion is not possible \n");
   else
   {
      r++;
      printf("enter the element\n");
      scanf("%d",&n);
      dq[r]=n;
      printf("the element inserted at the rear end is %d \n",n);
   }
}
void fdelet()
{
   int n;
   if (r==-1)
   printf("dqueue is empty \n");
   else if (f==r)
   {
      n=dq[f];
      r=-1;
      f=0;
      printf("the element deleted from the front end is %d \n",n);
   }
   else if (f!=r)
   {
      n=dq[f];
      f++;
      printf("the element deleted from the front end is %d \n",n);
  }
}
void rdelet()
{
int n;
if (r==-1)
printf("dqueue is empty \n");
else if (f==r)
{
   n=dq[r];
   r=-1;
   f=0;
   printf("the element deleted from the rear end is %d \n",n);
}
else if (f!=r)
{
  n=dq[r];
  r--;
 printf("the element deleted from the rear end is %d \n",n);
}
}
void display()
{
  if (r==-1&&f==0)
  printf("the dequeue is empty \n");
  else
  {
    temp=f;
    printf("the elements in the deque are \n");
    while(temp!=r+1)
    {
      printf("%d\n",dq[temp]);
      temp++;
    }
  }
}

