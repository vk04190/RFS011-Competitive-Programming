/****************************************************************************
PROGRAM TO ADD 2 EQUATIONS
*****************************************************************************/
#include<stdio.h>              /*/NAME:M PRASHANTH      */
#include<conio.h>              /*ROLL NO:02211A0437   */
#include<alloc.h>              /*/BRANCH:E C E      */
struct poly
{
 int e,c;
 struct poly *ptr;
};
struct poly * create();
void display(struct poly *);
struct poly * add(struct poly *,struct poly *);
void main()
{
 struct poly *head1,*head2,*head3;
 clrscr();
 printf("Enter the co-efficients and the exponents in order of");
 printf("1st expression");
 printf("\nAt end -9:");
 head1=create();
 printf("Enter the co-efficients and the exponents in order of");
 printf("2nd expression");
  printf("\nAt end -9:");
 head2=create();
 printf("The 1st expression is\n");
 display(head1);
 printf("The 2nd expression is\n");
 display(head2);
 head3=add(head1,head2);
 printf("\nresultent expression is:\n");
 display(head3);
 getch();
}
struct poly * create()
{
 struct poly *head,*temp,*prev;
 int x,y;
 head=prev=NULL;
 while(1)
 {
  scanf("%d",&x);
  if(x==-9) break;
  temp=(struct poly *) malloc(sizeof(struct poly));
  temp->c=x;
  scanf("%d",&y);
  temp->e=y;
  temp->ptr=NULL;
  if(head==NULL) head=temp;
  else prev->ptr=temp;
  prev=temp;
 }
 return head;
}
void display(struct poly *head)
{
 while(head!=NULL)
 {
  printf("%dx^%d",head->c,head->e);
  if(head->ptr!=NULL) printf("+");
  head=head->ptr;
 }
 printf("\n");
}
struct poly * add(struct poly *head1,struct poly *head2)
{
 struct poly *head3,*temp,*prev;
 head3=prev=NULL;
 while((head1!=NULL)&&(head2!=NULL))
 {
  temp=(struct poly *) malloc(sizeof(struct poly));
  if(head1->e==head2->e)
  {
   temp->e=head1->e;
   temp->c=head1->c+head2->c;
   temp->ptr=NULL;
   head1=head1->ptr;
   head2=head2->ptr;
  }
  else if((head1->e)>(head2->e))
  {
   temp->e=head1->e;
   temp->c=head1->c;
   temp->ptr=NULL;
   head1=head1->ptr;
  }
  else if((head1->e)<(head2->e))
  {
   temp->e=head2->e;
   temp->c=head2->c;
   temp->ptr=NULL;
   head2=head2->ptr;
  }
  if(head1==NULL)
  {
   while(head2!=NULL)
   {
    temp->e=head2->e;
    temp->c=head2->c;
    temp->ptr=head2->ptr;
   }
  }
  else if(head2==NULL)
  {
   while(head1!=NULL)
   {
    temp->e=head1->e;
    temp->c=head1->c;
    temp->ptr=head1->ptr;
   }
  }
  if(head3==NULL) head3=temp;
  else prev->ptr=temp;
  prev=temp;
 }
 return head3;
}