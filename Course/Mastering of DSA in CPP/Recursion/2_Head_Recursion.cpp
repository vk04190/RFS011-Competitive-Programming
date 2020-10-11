// Implement HEAD Recursion using Function and if  
// #include<iostream>
// void func(int n){
//     if (n>0){        
//         func(n-1);
//         printf("%d ",n);
//     }
// }

// int main(){
//     func(30);
// }


// Implement HEAD Recursion using loop

#include<iostream>
void func(int n){
    int i=1;
    while (i<n){
        printf("%d ", i);
        i++;
    }
}



int main(){
    func(30);
}

