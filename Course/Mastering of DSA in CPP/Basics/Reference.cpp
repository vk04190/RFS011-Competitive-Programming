#include<iostream>
int main(){
    int a;
    int b;
    int &r=b;
    b=10;
    printf("HI");
    printf("%d" "%d", b,r);
    r=r+2;
    printf("%d",r);
    printf("\n%d",&b);
    printf("\n%d",&r);
    printf("\n%d",&a);
};