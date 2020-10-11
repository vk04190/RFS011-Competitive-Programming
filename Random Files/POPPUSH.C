	/*PROGRAM TO PUSH AND POP IN A STACK	@	PRASAD.G.V.L
												02211A0540 CSE*/

#include<stdio.h>
#include<conio.h>
		int stack[10];
		int sp=-1,mt=-1,full=9;

	void main()
	{
		char c,ch;
		void push(),pop(),display();
		clrscr();
		printf("press 1,2,3to start\n");
		scanf("%c",&c);
		while(c=='1'||c=='2'||c=='3')
		{
			printf("enter ur choice:\n");
			printf("1.for push\n2.for pop\n3.for display\n4 quit\n");
			fflush(stdin);
			scanf("%c",&ch);
			  switch(ch)
			  {
				case '1':push();break;
				case '2':pop();break;
				case '3':display();break;
				case '4':goto exit;
				default:printf("wrong choice:choose again\n");
			  }
		}
		exit:
		printf("thank u ...\n");
			  getch();
  }
	   void	push()
	   {
			int n;
			if(sp==full)
			printf("stack full:no push\n");
			else
			{
				printf("enter elements into array\n");
				scanf("%d",&n);
				sp++;
				stack[sp]=n;
			}
	   }
	   void pop()
	   {
			 int n;
			if(sp==mt)
			printf("stack empty:no pop\n");
			else
			{
				printf("poping the array\n");
				n=stack[sp];
				sp--;
				printf("poped one %d\n",n);
			}
	   }
			void display()
			{
				int sp=0,n;
				printf("here ur display\n");
				while(sp<full)
				{
				  n=stack[sp];
				  printf("%d\t",n);
				  sp++;
				}
			}