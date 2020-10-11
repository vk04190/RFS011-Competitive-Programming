/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
int main(){
int a[10],i,n,m,c=0;
printf("Enter the size of an array");
scanf("%d",&n);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
printf("\nEnter the elements of the array");
for(i=0;i<=n-1;i++){
scanf("%d",&a[i]);
}
printf("\nThe elements of an array are");
for(i=0;i<=n-1;i++){
printf(" %d",a[i]);
}
printf("\nEnter the number to be search");
scanf("%d",&m);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
for(i=0;i<=n-1;i++){
if(a[i]==m){
c=1;
break;
}
}
if(c==0)
printf("\nThe number is not in the list");
else
printf("\nThe number is found");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
return 0;
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */