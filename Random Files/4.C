/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
int main(){
  int x[20],size,i;
  printf("\nEnter size of the array :");
  scanf("%d",&size);
  printf("\nEnter %d elements :",size);
  for(i=0;i<size;i++)
    scanf("%d",&x[i]);
  quicksort(x,0,size-1);
  printf("\nSorted elements :");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  for(i=0;i<size;i++)
    printf(" %d",x[i]);
  return 0;
}


quicksort(int x[10],int first,int last){
    int pivot,j,temp,i;
     if(first<last){
         pivot=first;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
         i=first;
         j=last;
         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
                  x[j]=temp;
             }
         }
         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);
    }
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */