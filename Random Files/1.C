/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
int main(){
  int s,temp,i,j,a[20];
  printf("\nEnter size of the array: ");
  scanf("%d",&s);
  printf("\nEnter %d elements in to the array:",s);
  for(i=0;i<s;i++)
      scanf("%d",&a[i]);
  for(i=0;i<s-1;i++){
      for(j=0;j<s-1-i;j++){
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
           if(a[j]>a[j+1]){
               temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
           }
      }
  }
  printf("\nThe array after sorting is: ");
  for(i=0;i<s;i++)
      printf(" %d",a[i]);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  return 0;
}





/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */