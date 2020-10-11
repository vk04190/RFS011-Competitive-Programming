/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
int main(){
  int a[10],i,n,m,c,l,u;
  printf("Enter the size of an array->");
  scanf("%d",&n);
  printf("\nEnter the elements of the array->");
  for(i=0;i<n;i++){
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    scanf("%d",&a[i]);
  }
  printf("\nThe elements of an array are->");
  for(i=0;i<n;i++){
    printf(" %d",a[i]);
  }
  printf("\nEnter the number to be search->");
  scanf("%d",&m);
  l=0,u=n-1;
  c=binary(a,n,m,l,u);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  if(c==0)
    printf("\nThe number is not in the list");
  else
     printf("\nThe number is found");
   return 0;
 }


 int binary(int a[],int n,int m,int l,int u){
   int mid,c=0;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   if(l<=u){
     mid=(l+u)/2;
      if(m==a[mid]){
          c=1;
      }
      else if(m<a[mid]){
          return binary(a,n,m,l,mid-1);
      }
      else
          return binary(a,n,m,mid+1,u);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    }
   else
         return c;
  }
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */