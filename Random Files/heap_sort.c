/*PROGRAM FOR IMPLEMENTING HEAP SORT*/
void main()
{
int a[30],n,i;
void heapsort(int[],int);
clrscr();
printf("enter how many numbers(n)\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
heapsort(a,n);
for(i=1;i<=n;i++)
printf("%4d",a[i]);
}
void heapsort(int x[],int y)
{
int i,item;
void insheap(int [],int,int);
void delheap(int [],int*,int*);
for(i=1;1<y;i++)
insheap(x,i,x[i+1);
while(y>1)
{
delheap(x,&y,&item);
x[y+1]=item;
}
}
void insheap(int tree[],int n,int item)
{
int ptr,par;
n=n+1;
ptr=n;
while(ptr>1)
{
par=ptr/2;
if(item<=tree[par])
{
tree[ptr]=item;
return;
}
tree[ptr]=tree[par];
ptr=par;
}
tree[1]=item;
}
void delheap(int tree[],int*n,int*item)
{
int last,ptr,left,right;
*item=tree[1];
last=tree[*n];
*n=*n-1;
ptr=1;
left=2;
right=3;
while(right<=*n)
{
if((last>=tree[left])&&(last>=tree[right]))
{
tree[ptr]=last;
return;
}
if(tree[right]<=tree[left])
{
tree[ptr]=tree[left];
ptr=left;
}
else
{
tree[ptr]=tree[right];
ptr=right;
}
left=2*ptr;
right=left+1;
}
if((left==*n)&&(last<[left]))
{
ptr=left;
tree[1]=tree[left];
}
tree[ptr]=last;
return(0);
}



