		/*TO IMPLEMENT DEQUEUE*/
				  /*C.SANDEEP*/
				  /*02211A0561*/
				  /*C.S.E*/
  #include<stdio.h>
  #include<conio.h>

   void inf();
   void inr();
   void delr();
   void delf();
   void display();

  int f=0;
  int r=-1;
  int dq[10];

   void main()
    {
     int ch=1;
     clrscr();
     while(ch==1||ch==2||ch==3||ch==4||ch==5)
       {
	  printf("\n\t1.INSERTION FROM FRONT END\n");
	  printf("\t2.DELETION FROM FRONT END.\n");
	  printf("\t3.INSERTION FROM REAR END.\n");
	  printf("\t4.DELETION FROM  REAR END.\n");
	  printf("\t5.display.\n");
	  printf("\t6.quit");
	  printf("\nEnter u' choice:");
	  scanf("%d",&ch);
	  switch(ch)
	   {
	   case 1:inf();
	       break;
	   case 2:delf();
	       break;
	   case 3:inr();
	       break;
	   case 5:display();
	       break;
	   case 4:delr();
	       break;
	   case 6:exit(0);
	   }
	}
     }
     void inf()
     {
      int n;
      if(r==-1&&f==0)
	 {
	  printf("\nDEQUE IS EMPTY\n");
	  r++;
	  printf("\nEnter the element:");
	  scanf(" %d",&n);
	  dq[r]=n;
	 }
      else if(f==0&&r==-1)
	     {
	       printf("\nINSERTION FROM FRONT END IS NOT POSSIBLE.\n");
	     }
      else
      {
	 f--;
	 printf("\nEnter the element:");
	 scanf("%d",&n);
	 dq[f]=n;
	 printf("\nThe element inserted from FRONT END is:%d",n);
     }
    }

   void inr()
     {
      int n;
      if(r==9)
	 {
	 printf("\nINSERTION IS NOT POSSIBLE FROM REAR END\n");
	}
     else
      {
       r++;
       printf("\nEnter the element:");
       scanf("%d",&n);
       dq[r]=n;
       printf("\nThe element inserted from REAR END is:%d",n);
     }
 }
   void delf()
     {
      int n;
       if(r==-1)
	{
	 printf("\nDEQUE IS EMPTY\n");
	}
       else if(f==r)
	 {
	  n=dq[f];
	  r=-1;
	  f=0;
	  printf("\nThe element deleted from front is:%d",n);
	 }
	 else if(f!=r)
	  {
	  n=dq[f];
	  f++;
	  printf("\nThe element deleted from front is:%d",n);
	  }
	 }

       void delr()
	{
	int n;
	if(r==-1)
	printf("\nDEQUE IS EMPTY\n");
	else if(f==r)
	 {
	 n=dq[r];
	 r=-1;
	 f=0;
	 printf("\nThe element deleted from REAR END is:%d",n);
       }
       else if(f!=0)
	{
	 n=dq[r];
	 r--;
	 printf("\nThe element deleted from rear is:%d",n);
	}
       }
     void display()
      {
       int i;
       for(i=f;i<=r;i++)
	printf("%4d",dq[i]);
      }
