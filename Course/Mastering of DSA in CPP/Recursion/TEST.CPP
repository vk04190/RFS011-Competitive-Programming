#include <iostream>
#include <typeinfo>
int main(){
    int x=1;
    // printf("%d",typeid(&x).name());
    // printf((char*)x);
    printf("%d",(char*)&x);
    fork();
}