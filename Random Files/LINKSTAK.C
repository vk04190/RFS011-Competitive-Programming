
	 /*PROGRAM TO ACCESS LINKED LIST (STACK)   @  PRASAD.G.V.L
												  02211A0540
												  CSE*/
#include<stdio.h>
#include<conio.h>
struct node
{
	int dat;struct node *nx;};
	struct node *sp=NULL,*nw=NULL,*temp=NULL;
	struct node *stt=NULL,*push(struct node *stt),*pop(struct node *stt);
	void show(struct node *stt);
	void main()
	{
		int ch=1;
		clrscr();
		while(ch==1||ch==2||ch==3)
		{
			printf("\n1.push\n2.pop\n3.quit\n");
			printf("enter ur choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:stt=push(stt);
						printf("contents of stack:\n");
						show(stt);break;
				case 2:stt=pop(stt);
						printf("contents of stack\n");
						show(stt);break;
				case 3: printf("THANK U....\n");
						exit();
			}
		}
	}
		struct node *push(struct node *sp)
		{
			int x;
			printf("enter the data\n");
			scanf("%d",&x);
			nw=(struct node *)malloc(sizeof(struct node));
			nw->dat=x;
			nw->nx=sp;sp=nw;
				 return(sp);
		}

		struct node *pop(struct node *sp)
		{
			 if(sp==NULL)printf("stack empty\n");
			 else
			 {
				temp=sp;
				sp=sp->nx;free(temp);
			 }
			  return(sp);
		}

		void show(struct node *temp)
		{
			while(temp!=NULL)
		 {
			  printf("%d\t",temp->dat);
			  temp=temp->nx;
		 }
		}