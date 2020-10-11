	       /*TO IMPLEMENT CIRCULAR QUEUE*/
				      /*A.SANDEEP*/
				      /*02211A0560*/
				      /*C.S.E*/
#include<stdio.h>
#include<conio.h>

int cq[10];
int head=0;
int tail=0;
int count=0;

main()
 {
  int ch=1;
  clrscr();
  while(ch==1||ch==2||ch==3||ch==4)
       {
	printf("\t\t1.INSERTION\n");
	printf("\t\t2.DELETION\n");
	printf("\t\t3.DISPLAY\n");
	printf("\t\t4.EXIT\n");
	printf("ENTER U'R choice:");
	scanf("%d",&ch);
	printf("\n\n");
	     switch(ch)
	       {
		case 1:insert();
		       break;
		case 2:delet();
		       break;
		case 3:display();
		       break;
		case 4:exit(0);
			break;
	       }
       }
  }
    int insert()
     {
       int n;
      if(count==10)
	 {
	  printf("CIRCULAR QUEUE IS FULL\n");
	 }
      else
	 {
	  printf("Enter the element to be inserted:");
	  scanf("%d",&n);
	  cq[tail]=n;
	  tail++;
	  count++;
	  if(tail>9)
	    tail=0;
     }
	    return(n);
	}
    int delet()
	{
	  int n;
	  if(count==0)
	     {
	      printf("CQUEUE IS EMPTY\n");
	     }
	  else
	     {
	      n=cq[head];
	      printf("%d element is deleted.\n",n);
	      head++;
	      count--;
	      if(head>9)
		head=0;
	     }
	      return(n);
	  }
   int display()
	{
	 int i;
	 for(i=head;i<tail;i++)
	    {
	     printf("%3d",cq[i]);
	    }
	}
