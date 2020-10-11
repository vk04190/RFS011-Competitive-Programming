/*PROGRAM TO IMPLEMENT A DEQUEUE*/
#include<stdio.h>
#define MAX 20
struct dqtype{
int dq[MAX];
int left;
int right;
};
main()
{
static struct dqtype dqueue={{0},-1,-1};
int choice,menu();
int el;
for(;;)
{
printf("\n\t\t1.Make dqueue empty\n");
printf("\n\t\t2.Add element from front\n");
printf("\n\t\t3.Add element from rear\n");
printf("\n\t\t4.Delete element from front\n");
printf("\n\t\t5.delete element from rear\n");
printf("\n\t\t6.display Queue\n");
printf("\n\t\t7.Exit program\n");
printf("\n Choose option between 1 and 7");
choice=getch();
if(choice=='7')
break;
switch(choice)
{
case'1':makedqempty(&dqueue);
break;
case'2':addfront(&dqueue);
break;
case'3':addrear(&dqueue);
break;
case'4':delfront(&dqueue);
break;
case'5':delrear(dqueue);
break;
case'6':dqdisp(&dqueue);
break;
}
fflush(stdin);
}
}
makedqempty(struct dqtype*dqueue)
{
dqueue->left=-1;
dqueue->right=-1;
}
dqfull(struct dqtype*dqueue)
{
if((dqueue->left==0)&&(dqueue->right==MAX-1))
return(1);
else
return(0);
}
dqempty(struct dqtype*dqueue)
{
if((dqueue->left==-1)&&(dqueue->right==-1))
return(1);
else
return(0);
}
addfront(struct dqtype*dqueue)
{
int el;
if(dqfull(dqueue))
{
printf("\n Dequeue is Full....");
return;
}
if(dqueue->left==0)
{printf("\nCannot insert from front");
return;
}
printf("Element to add:\n");
scanf("%d",&el);
dqueue->left++;
dqueue->dq[dqueue->left]=el;
if(dqueue->right==-1)
dqueue->right=0;
}
addrear(struct dqtype*dqueue)
{
int el;
if(dqfull(dqueue))
{
printf("\n Dequeue is full....");
return;
}
if(dqueue->right==MAX-1)
{
printf("\nCannot insert from Rear");
return;
}
printf("Element to add:\n");
scanf("%d",&el);
dqueue->right++;
dqueue->dq[dqueue->right]=el;
if(dqueue->left==-1)
dqueue->left=0;
}
delfront(struct dqtype*dqueue,int*el)
{
if(dqempty(dqueue))
{
printf("\n Dequeue is Empty");
return;
}
*el=dqueue->dq[dqueue->right];
if(dqueue->left==dqueue->right)
makedqempty(dqueue);
else
dqueue->left++;
}
delrear(struct dqtype*dqueue,int*el)
{
if(dqempty(dqueue))
{
printf("\n Dequeue is Empty");
return;
}
*el=dqueue->dq[dqueue->right];
if(dqueue->left==dqueue->right)
makedqempty(dqueue);
else
dqueue->right--;
}
dqdisp(struct dqtype dqueue)
{
int i;
if(dqempty(&dqueue))
printf("\nDequeue is empty");
else
{
for(i=dqueue.left;i<=dqueue.right;i++)
printf("\nQ[%d]\t%d",i,dqueue.dq[i]);
}
}

