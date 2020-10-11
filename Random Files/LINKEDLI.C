	/*PROGRAM TOACCESS THE PROPERTIES OF LINKED LIST 
													PRASAD.G.V.L
													02211A0540
													CSE*/

#include<stdio.h>
#include<conio.h>
struct node
{
	int data;struct node *nx;  };
	   int c=0;
		struct node *f=NULL;
		struct node *l=NULL;
		struct node *p=NULL;
		struct node *temp=NULL;
		struct node *nw=NULL   ;
		struct node *nwrt=NULL  ;
	void display(),append(),instbfr(int ,int),instaft(int,int),
		  delnode(int),search(int),replace(int,int),count(),reverse(),
		  sort(char);
		  void main()
		  {
			int n,x,y,cse=0;char ch;
			clrscr();
			while(cse<11)
			{
//				clrscr();
				printf("\nsingle linked list\n");
				printf("___________________\n");
				printf("1.display\n2.creat\n3.insertafter\n4.insertbefore\n");
				printf("5.delet\n6.search\n7.replace\n8.count\n9.reverse\n");
				printf("10.sort\n11.quit\n");
				printf("ENTER UR CHOICE\n");
				scanf("%d",&cse);
				switch(cse)
				{
					case 1:display();break;
					case 2:
							printf("enter the data\n");
							scanf("%d",&x);
							append(x);break;
					case 3:
						   printf("inserting node afteernum\n");
						   scanf("%d",&n);
						   printf("enter the data for new node\n");
						   scanf("%d",&x);
						   instaft(n,x); break;
					 case 4:
						   printf("inserting node before num\n");
						   scanf("%d",&n);
						   printf("enter the data for new node\n");
						   scanf("%d",&x);
						   instbfr(n,x); break;
					case 5:
							printf("deleting the node\n");
							scanf("%d",&n);
							delnode(n);break;
					case 6:
							printf("enter the data to be searched\n");
							scanf("%d",&x);
							search(n);break;
					case 7:
						   printf("data to b replaced\n");
						   scanf("%d",&n);
						   printf("enter the new data\n");
						   scanf("%d",&x);
						   replace(n,x); break;
					case 8:
						   count();break;
					case 9:reverse();break;
					case 10:
						   printf("type 'a' for ascend & 'd' for descend\n");
						   ch=getche();
							sort(ch);break;
					default:printf("wrong choice\n");break;
					}
				 }
			}

			void append(int x)
			  {
				 int c=0;
				nw=(struct node *)malloc(sizeof(struct node));
				  nw->data=x;
				  nw->nx=NULL;
				  if(f==NULL)
				  {
					printf("list empty before\n");
					f=nw;l=nw;
					c++;
				  }
				  else
				  {
					l->nx=nw;
					l=nw;
				  }
				  printf("node attached\n");
			 }
		   void display()
			 {
				temp=f;
				if(temp==NULL)printf("list is empty\n");
				else
				{
					while(temp->nx!=NULL)
					{
						printf("%d\t",temp->data);
						temp++;
					}
				}
			}
			void instbfr(int n,int x)
			{
			int i;
			if(f==NULL)printf("list empty\n");
			else if(n<1||n>c) printf("invalid node num\n");
			else
				{
					 nw=(struct node*)malloc(sizeof(struct node));
					 nw->data=x;
					 if(n==1)
					 {
						nw->nx=f;
						f=nw;
					 }
					 else
					 {	temp=f;
					   for(i=1;i<n-1;i++)
					   temp=temp->nx;
					   nw->nx=temp->nx;
					   temp->nx=nw;
					 }
						   c++;
				}
		}
				void instaft(int n,int x)
			{
			int i;
			if(f==NULL)printf("list empty\n");
			else if(n<1||n>c) printf("invalid node num\n");
			else
				{
					   nw=(struct node*)malloc(sizeof(struct node));
					   nw->data=x;
					 if(n==c)
					 {
						l->nx=nw;
						l=nw;
						l->nx=NULL;
					 }
					 else if(n==1)
					 {
						nw->nx=f->nx;
						f->nx=nw;
					 }
					 else
					 {	temp=f;
					   for(i=1;i<n;i++)
					   temp=temp->nx;
					   nw->nx=temp->nx;
					   temp->nx=nw;
					 }
						   c++;
				}
		}
			 void delnode(int n)
			 {
				int i;
				if(f==NULL)
				printf("not possible\n");
				else if(n<1||n>c)
				printf("invalid num\n");
				else
				{
					if(n==1)
					{
						temp=f;
						f=temp->nx;
					}
					else if(n==c)
					{
						p=f;
						for(i=1;i<n-1;i++)
						p=p->nx;
						temp=p->nx;
						p->nx=NULL;
						l=p;
					}
				  else
				  {
					p=f;
					for(i=1;i<n-1;i++)
					p=p->nx;
					temp=p->nx;
					p->nx=temp->nx;
				  }
				  free(temp);c--;
				}
			}
			void search(int x)
			{
				int i,fnd=0;
				if (f==NULL)printf("list empty\n");
				else
				{
					printf("search the itemlist %d\n",x);
					temp=f;
				for(i=1;i<c;i++)
				{
				if(temp->data==x)
				{
					printf("match found at node %d",i);
					fnd++;
				}
				temp=temp->nx;
			  }
			  printf("total matches r %d",fnd);
		   }
		}
		void replace(int x,int y)
		{
		   //	int i,fnd=0;
				int i,fnd=0;
				if (f==NULL)printf("list empty\n");
				else
				{
				printf("search the itemlist %d\n",x);
				temp=f;
				for(i=1;i<c;i++)
				{
				if(temp->data==x)
				{
					printf("match found at node %d",i);
					temp->data=y;
					fnd++;
				}
				temp=temp->nx;
			  }
			  if(fnd)
			  printf("data vaslue at %d node replace",y);
			  else
			  printf("no match found,no replace");
		   }
		   printf("founds:%d",c);
		}
		void reverse()
		{
			struct node *a=f,*b=NULL,*co=NULL;
			if(f==NULL)
			printf("list is empty\n");
			else
			while(a!=NULL)
			{
			  b=a->nx;
			  a->nx=co;co=a;
			  a=b;
		       }
		       l= f;
		       f=co;
	       }
		  void count()
		  {
			struct node *temp=f;
			if(temp==NULL)
			printf("list empty :nodes=%d",c);
			else
			while(temp!=NULL)
			{
			       c++;
			       temp=temp->nx;
			}
			printf("nodes:%d",c);
		  }
		  void sort(char ch)
		  {  struct node *x=f,*y=f->nx;
		   if(ch=='a')
		  {
		  printf("ur assending :\n");
		     if(x>y)
		     {
		       temp=y;
		       y=x;
		       x=temp;
		     }
		     while(f!=NULL)
		     {
		      printf("%d\t",f->data);
		      f=f->nx;
		     }
		 }
		     else if(ch=='d')
		     {
		     printf("ur descend:\n");
		       if(x<y)
		       {
			temp=x;
			x=y;
			y=temp;
		       }
		       while(f!=NULL)
		       {
			printf("%d\t",f->data);
			f=f->nx;
		       }
		    }
		}




