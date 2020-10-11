	/*PROGRAM TO CREAT CIRCULAR QUEUE AND ACCESS ON USER~S  REQUEST
														PRASAD.G.V.L
														02211A0540
														CSE*/
#include<stdio.h>
#include<conio.h>
		int CQstack[10];
		int h=0,t=0,C=0;

	void main()
	{
		char c,ch;
		void insert(),delet(),display();
		clrscr();
		printf("press 1,2,3to start\n");
		scanf("%c",&c);
		while(c=='1'||c=='2'||c=='3')
		{
			printf("enter ur choice:\n");
			printf("1.for INSERT\n2.for DELET\n3.for DISPLAY\n4.FOR QUIT\n");
			fflush(stdin);
			scanf("%c",&ch);
			  switch(ch)
			  {
				case '1':insert();break;
				case '2':delet();break;
				case '3':display();break;
				case '4':goto exit;
				default:printf("wrong choice:choose again\n");
			  }
		}
		exit:
		printf("thank u ...\n");
			  getch();
  }
	   void	insert()
	   {
			int n;
			if(C==9)
			printf("stack full:no push\n");
			else
			{
				printf("enter elements into array\n");
				scanf("%d",&n);
				CQstack[C]=n;
				C++; t++;
				if(t>9)
				t=0;
			}
	   }
	   void delet()
	   {
			 int n;
			if(h==0)
			printf("stack empty:no pop\n");
			else
			{
				printf("deleted the array element\n");
				n=CQstack[h];
				printf("poped : %d\n",n);
				CQstack[h]=0;
				h++;
				if(h>9)
				h=0;
			}
	   }
			void display()
			{
				int C=0,n;
				printf("here ur display\n");
				while(C<10)
				{
				  n=CQstack[C];
				  printf("%d\t",n);
				  C++;
				}
			}