#include<iostream>
int swap(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    // printf("%d %d %d %d",x,y);
    return 0;
};

int main(){
    int a,b;
    a=10;
    b=20;
    swap(a,b);
    printf("A=%d B=%d",a,b);
};