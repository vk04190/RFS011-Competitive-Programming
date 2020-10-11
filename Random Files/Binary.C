/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
int main(){
  int a[10],i,n,m,c=0,l,u,mid;
  printf("Enter the size of an array->");
  scanf("%d",&n);
  printf("\nEnter the elements of the array->");
  for(i=0;i<n;i++){
      scanf("%d",&a[i]);
  }
  printf("\nThe elements of an array are->");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  for(i=0;i<n;i++){
      printf(" %d",a[i]);
  }
  printf("\nEnter the number to be search->");
  scanf("%d",&m);
  l=0,u=n-1;
  while(l<=u){
      mid=(l+u)/2;
      if(m==a[mid]){
      c=1;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
          break;
      }
      else if(m<a[mid]){
      u=mid-1;
      }
      else
      l=mid+1;
  }
  if(c==0)
      printf("\nThe number is not in the list");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  else
      printf("\nThe number is found");
  return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */