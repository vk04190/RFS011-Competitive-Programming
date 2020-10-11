		  #include<stdio.h>
main()
{
int i,a[20],n;
void heapsort(int a[],int n);
clrscr();
printf("enter the no of ele:\n");
scanf("%d",&n);
printf("enter elements:\n");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
heapsort(a,n);
printf("elements in sorted order:\n");
for(i=1;i<=n;i++)
printf("%d\n",a[i]);
getch();
}

void heapsort(int a[],int n)
{
int k,p,i=1;
void downheap(int a[],int n,int k);
for(k=n/2;k>=1;k--)
{
downheap(a,n,k);
}
while(n>=1)
{
k=a[i];
a[i]=a[n];
a[n]=k;
downheap(a,--n,i);
}
return;
}

void downheap(int a[],int n,int k)
{
int i,j,u;
u=a[k];
while(k<=n/2)
{
j=2*k;
if((j<n) && (a[j]<a[j+1]))
j++;
if(u>=a[j])
break;
a[k]=a[j];
k=j;
}
a[k]=u;
return;
}


