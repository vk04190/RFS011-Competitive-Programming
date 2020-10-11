#include <iostream>
int add(int a, int b){
    int c;
    c=a+b;
    return(c);
}

int main(){
    int x,y;
    x=12;
    y=13;
    int z;
    z=add(x,y);
    printf("%d",z);
}