   /*program to implement QUE using linked list @ PRASAD.G.V.L
												  02211A0540 CSE*/

#include<stdio.h>
#include<conio.h>
struct node
{
	int dat;struct node *nx;};
	struct node *nw=NULL,*t=NULL,*tmp=NULL,*h=NULL;
	int co=0;
	void add(),del(),show();
	void main()
	{
		int ch=1;
		clrscr();
		while(ch==1||ch==2||ch==3)
		{
			printf("\n1.push\n2.pop\n3.show\n4.quit\n");
			printf("enter ur choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:add();break;
				case 2:	del();break;
				case 4: printf("THANK U....\n");
						exit();
				case 3:show();break;
			}
		}
	}
		void add()
		{
			int x;
			printf("enter ur data\n");
			scanf("%d",&x);
			nw=(struct node *)malloc(sizeof(struct node));
			nw->dat=x;nw->nx=NULL;
			if(t==NULL)
			{
				printf("list not exist\n");
				t=nw;h=nw;
			}
			else
			{
				t->nx=nw;
				t=nw;
			}
			co++;
			printf("data added\n");
		}
			void del()
			{
				if(h==NULL)printf("list empty\n");
				else
				{
					tmp=h;
					h=h->nx;
					printf("deleted:%d",tmp->dat);
					free(tmp);
					if(h==NULL)t=NULL;
				}
			}
				void show()
				{
					printf("here ur wanted:\n");
					   while(h!=NULL)
					   {
							printf("%d\t",h->dat);
							h=h->nx;
					   }
				}


