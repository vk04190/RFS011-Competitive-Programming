              /*IMPLEMENTATION OF CIRCULAR QUEUE*/             
                                                    /*RAVINDRA P*/
                                                     /*CSE*/   
                                                     /*ROLL NO:02211A0558*/          
                                                                                #include<stdio.h>
#include<conio.h>
#define size 4


typedef struct cqueue
{
 int cq[size];
 int f,r;
}cq_t;
 void initial(cq_t *);
 void insert(int ,cq_t *);
 int delet(cq_t *);
 void display(cq_t *);
 void menu();

 void main()
 {
  int x,ch;
  cq_t a,*cp=&a;
  clrscr();
  initial(cp);
  menu();
  printf("\nEnter your choice : ");
  scanf("%d",&ch);
  while(ch<4)
  {
   switch(ch)
   {
    case 1:
    printf("\nEnter the element to be inserted : ");
    scanf("%d",&x);
    insert(x,cp);
    break;
    case 2:
    x=delet(cp);
    if(x==-1)
     printf("\nunderflow");
    else
     printf("\nDeleted element = %3d",x);
     break;
    case 3:
     display(cp);
     break;
    }
    menu();
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
   }
  }
  void initial(cq_t *cp)
  {
   cp->f=0;
   cp->r=-1;
  }
  void insert(int x,cq_t *cp)
  {
   if(((cp->r+1)%size==cp->f)&&(cp->r!=-1))
    printf("\nCircular queue is full");
   else
   {
    if(cp->r==size-1)
     cp->r=0;
    else
     cp->r++;
     cp->cq[cp->r]=x;
    }
   }
   int delet(cq_t *cp)
   {
    int x;
    if(cp->r==-1)
     return(-1);
    else if(cp->f==cp->r)
    {
     x=cp->cq[cp->r];
     initial(cp);
     return(x);
    }
    else
    {
     x=cp->cq[cp->f];
     if(cp->f==size-1)
      cp->f=0;
     else
      cp->f++;
      return(x);
     }
    }
    void display(cq_t *cp)
    {
     int i;
     if(cp->r==-1)
      printf("\nCircular queue is empty");
      else if(cp->f==cp->r)
       printf("%d",cp->cq[cp->f]);
       else if(cp->f<cp->r)
       {
	for(i=cp->f;i<=cp->r;i++)
	 printf("\t%d",cp->cq[i]);
       }
       else
       {
	for(i=cp->f;i<=size-1;i++)
	 printf("\t%d",cp->cq[i]);
	  for(i=0;i<=cp->r;i++)
	   printf("\t%d",cp->cq[i]);
       }
     }

   void menu()
   {
    printf("\n\t1.INSERTION\n\t2.DELETION\n\t3.DISPLAY\n\t4.EXIT\n");
   }
