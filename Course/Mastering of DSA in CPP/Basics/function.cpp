#include<iostream>
int add(int a,int b){
    int c;
    c=a+b;
    return(c);
}
int main(){
    int x=10;
    int y=10;
    int z;
    z=add(x,y);
    printf("Sum of x and y is %d",z);
}