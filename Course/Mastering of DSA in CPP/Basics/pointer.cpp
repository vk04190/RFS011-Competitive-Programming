#include<iostream>
int main(){
    int a=10;
    int *p;
    printf("%d",p);
    printf("\n%d",*p);
    printf("\n%d",&p);
    p=&a;
    printf("%d",p);
    printf("\n%d",*p);
    printf("\n%d",&p);
    printf("%d",a);
    // int *q=(int *)malloc(a);
    // printf("%d",q);
}