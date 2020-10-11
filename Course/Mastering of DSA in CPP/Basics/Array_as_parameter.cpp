#include<iostream>
void fun(int *a,int n){
    int i;
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    };
    printf("Hello %d %d",n,i);
}

int main(){
    int a[5]={1,2,34,5,6};
    fun(a,5);
    printf("hello");
}

