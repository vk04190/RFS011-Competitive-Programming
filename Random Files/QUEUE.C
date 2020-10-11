	/*PROGRAM TO ACCESS THE ELEMENTS OF QUE ON USER~S REQUEST  
														 PRASAD.G.V.L
														 0221A0540
														 CSE*/

#include<stdio.h>
#include<conio.h>
		int Qstack[10];
		int h=0,t=0;
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
			printf(
			"1.for insert\n2.for delete\n3.for display\n4 quit\n"
															);
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
			if(t==9)
			printf("Qstack full:no push\n");
			else
			{
				printf("enter elements into Q array\n");
				scanf("%d",&n);
				t++;h++;
				Qstack[t]=n;
			}
	   }
	   void delet()
	   {
			 int n;
			if(h==0)
			printf("Qstack empty:no pop\n");
			else
			{
				printf("poping the array\n");
				n=Qstack[h];
				t--;h--;
				printf("poped : %d\n",n);
			}
	   }
			void display()
			{
				int h=0,n;
				printf("here ur display\n");
				while(h<10)
				{
				  n=Qstack[h];
				  printf("%d\t",n);
				  t++;h++;
				}
		   }