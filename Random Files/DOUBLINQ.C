	/*PROGRAM TO ACCESS THE PROPERTIESOF DOUBLE LINKED LIST @
														   PRASAD.G.V.L
														   02211A0540CSE*/
#include<stdio.h>
#include<conio.h>
struct node
{
	int dat;struct node *p,*nx;
};
	struct node *t=NULL,*h=NULL,*nw=NULL,*temp=NULL;
	void add(),del(),show();
	void show(); int co=0;
	void main()
	{
		int ch=1;
		clrscr();
		while(ch==1||ch==2||ch==3||ch==4)
		{
			printf("\n1.push\n2.pop\n3.show\n4.quit\n");
			printf("\nenter ur choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
						add();break;
				case 2:
						del();
						break;
				case 3: show();break;
				case 4: printf("THANK U....\n");
						exit();
			}
		}
					getch();
	}
			 void add()
			 {
				int x;char ch='y';
			 while(ch=='y')
		 {
				printf("\nenter ur data\n");
				scanf("%d",&x);
				nw=(struct node *)malloc(sizeof(struct node));
				if(h==NULL)
				{
					h=nw;
					nw->dat=x;
					nw->nx=NULL;nw->p=NULL;
				}
				else
				{
					t->nx=nw;
					nw->dat=x;
					nw->nx=NULL;
					nw->p=t;
				}
					t=nw;
				  co++;
				  printf("node added\n");
				  printf("do u want to add(y::n)\n");
					  ch=getche();
			 }
	}
				void del()
				{      int n,i;
				printf("total nodes:%d\n",co);
				printf("enter the node num to delete\n");
				scanf("%d",&n);
				if(h==NULL) printf("list empty\n");
				else if(n<1||n>co)
				printf("invalid nodenum\n");
				else
				{
					if(n==1)
					{
						temp=h;
						h=h->nx;
						h->p=NULL;
						free(temp);
					}
					if(n==co)
					{
						temp=t;
						t=t->nx;
						t->nx=NULL;
						free(temp);
					}
					else
					{
					temp=h;
					for(i=1;i<n;i++)
						temp=temp->nx;
					temp->p->nx=temp->nx;
					temp->nx->p=temp->p;
					free(temp);
					}
					co--;
				}
	}
				 void show()
				 {
					 char c;
					printf("\n1.forward\n2.reverse\n");
					printf("enter ur choice\n");
					c=getche();
							switch(c)
					{
						case '1':printf("\nforward format:\n");
							   temp=h;
							   while(temp!=NULL)
							   {
								printf("%d\t",temp->dat);
								temp=temp->nx;
							   }  break;
						case '2':printf("\nreverse format:\n");
								temp=t;
								while(temp!=NULL)
								{
									printf("%d\t",temp->dat);
									temp=temp->p;
								}
									printf("thats all\n");
									break;
					}
				 }





