// Implement Tail Recursion using Function and if  
// #include <iostream>
// void func(int n){
//     if (n>0){
//         printf("%d ",n);
//         func(n-1);
//     }
// }

// int main(){
//     func(30);
// }


// or 
// Implement tail recursion using while loop


#include <iostream>
void func(int n){
    while (n>0)
    {
        printf("%d ",n);
        n--;
    }
    
}

int main(){
    func(30);
}