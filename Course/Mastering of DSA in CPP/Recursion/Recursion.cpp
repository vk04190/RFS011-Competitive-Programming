#include <iostream>
using namespace std;

void function1(int n){
    if (n>0)
    {
        printf("\n%d",n); //<--Accesnding Phase ---> Calling time
        function1(n-1);
        printf("\n%d",n); //<--Decending Time---> Returning Time

    }
};

int main(){
    int x=3;
    function1(x);
};