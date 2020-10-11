
		/* programme to implement stacks */
                                        /*RAVINDRA P*/
                                      /*02211A0558*/
                                      /*CSE*/   

                                                 
   #include<stdio.h>
   #include<conio.h>
   #define max 3
   typedef struct stack
   {
       int s[max];
       int top;
   }s_t;
   void push(s_t *,int);
   int pop(s_t *);
   void display(s_t *);
   void menu();
   void main()
   {
	s_t a,*sp=&a;
	int x,ch;
	sp->top=-1;
	menu();
	printf("enter your choice \n");
	scanf("%d",&ch);
	while(ch<4)
	{
	   switch(ch)
	   {
	      case 1:
		     printf("enter a number \n");
		     scanf("%d",&x);
		     push(sp,x);
		     break;
	     case 2:
		    x=pop(sp);
		    if(x==-1)
		     printf("stack is empty");
		    else
		     printf("deleted element =%d",x);
		     break;
	     case 3:
		    display(sp);
	   }
	   printf("enter your choice");
	   scanf("%d",&ch);
      }
   }


      void push(s_t *sp,int x)
      {
	 if(sp->top==max-1)
	   printf("stack is full");
	 else
	 {
	   sp->top++;
	   sp->s[sp->top]=x;
	 }
      }

      int pop(s_t *sp)
      {
	 int x;
	 if(sp->top==-1)
	    return(-1);
	 else
	 {
	    x=sp->s[sp->top];
	    sp->top--;
	    return(x);
	 }
      }

      void display(s_t *sp)
      {
	 int i;
	 if(sp->top==-1)
	    printf("stack is empty");
	 else
	 {
	    printf("stack elements are \n");
	    for(i=sp->top;i>=0;i--)
	      printf("%d\t",sp->s[i]);
	 }
      }
	 void menu()
	 {
	     printf(" 1: insertion");
	     printf(" 2: deletion");
	     printf(" 3: display");
	     printf(" 4: exit");
	 }


