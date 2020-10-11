                                                                                                  /*RAVINDRA P*/
                                                                                                 /*02211A0558*/
                                                                                                  /*CSE*/                                                         

#include <stdio.h>
#define size 3
typedef struct deque
  {
   int q[size];
   int f,r;
  }dq_t;
  void initialise(dq_t*);
  void insr(dq_t*,int);
  void insf(dq_t*,int);
  int delf(dq_t*);
  int delr(dq_t*);
  void display(dq_t*);
  void menu();
  void main()
  {
    dq_t a,*p=&a;
    int x,ch;
    initialise(p);
    menu();
    printf("Enter your choice\n");
    scanf("%d",&ch);

    while (ch<6)
    {
       switch(ch)
       {
	   case 1:
		   printf("Enter the element to be inserted from rare end\n");
		   scanf("%d",&x);
		   insr(p,x);
		   break;
	   case 2:
		  printf("Enter the element to be inserted from front end\n");
		  scanf("%d",&x);
		  insf(p,x);
		  break;
	   case 3:
		  x=delf(p);
		  if(x==-1)
		  printf("Deletion is not possible\n");
		  else
		  printf("Deleted element=%d",x);
		  break;
	  case 4:
		  x=delr(p);
		  if(x==-1)
		  printf("Deletion is not possible\n");
		  else
		  printf("Deleted element=%d",x);
		  break;
	  case 5:
		  display(p);
	}
	menu();
	printf("Enter your choice\n");
	scanf("%d",&ch);
    }
 }
    void initialise(dq_t *p)
    {
	p->f=0;
	p->r=-1;
    }
    void insr(dq_t *p,int x)
    {
       if(p->r==size-1)
       printf("Insertion from rare end is not possible\n");
       else
       {
	 p->r++;
	 p->q[p->r]=x;
       }
    }
    void insf(dq_t *p,int x)
    {
       if(p->f==0 && p->r==-1)
       printf("Insertion from front end is not possible\n");
       else if(p->r==-1)
       {
	   p->r++;
	   p->q[0]=x;
       }
       else
       {
	  p->f--;
	  p->q[p->f] =x;
       }
    }
     int delf(dq_t *p)
     {
	int x;
	if(p->r==-1)
	return(-1);
	else
	{
	  if(p->r==p->f)
	  {
	   x=p->q[p->f];
	   initialise(p);
	   return(x);
	   }
	  else
	  {
	    x=p->q[p->f];
	    p->f++;
	    return(x);
	    }
	 }
       }
      int delr(dq_t *p)
      {
	int x;
	if(p->r==-1)
	return(-1);
	else if(p->r==p->f)
	{

	  x=p->q[p->r];
	  initialise(p);
	  return(x);
	 }
	 else
	 {
	   x=p->q[p->r];
	   p->f++;
	   return(x);
	 }
       }
       void display(dq_t *p)
   {
       int i;
       if (p->r==-1)
       printf("DQ is empty\n");
       else if(p->r==p->f)
       printf("%d\n",p->q[p->f]);
	else
       {
	 for(i=p->f;i<=p->r;i++)
	   printf("%d\t",p->q[i]);
	 }
}
  void menu()
    {
      printf("\n 1-insertion from rare end\n");
      printf("\n 2-insertion from front end\n");
      printf("\n 3-deletion from front end\n");
      printf("\n 4-deletion from rare end\n");
      printf("\n 5-display\n");
      printf("\n 6-exit\n");
   }






