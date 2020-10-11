// #include<iostream>
// using namespace std;
// class Arithametic{
//     private:
//         int a;
//         int b;
//     public:
//         Arithametic(int a , int b);
//         int add();
//         int sub();
// };

// Arithametic::Arithametic(int a, int b){
//     this->a=a;
//     this->b=b;
// }

// int Arithametic::add(){
//     int c;
//     c=a+b;
//     return c;
// }
// int Arithametic::sub(){
//     int c;
//     c=a-b;
//     return c;
// }

// int main(){
//     Arithametic A(4,5);
//     cout<<A.add();
//     cout<<A.sub();
// }

// Now Converting into Templete

#include<iostream>
using namespace std;
template<class T>
class Arithametic{
    private:
        T a;
        T b;
    public:
        Arithametic(T a , T b);
        T add();
        T sub();
};
template<class T>
Arithametic<T>::Arithametic(T a, T b){
    this->a=a;
    this->b=b;
}
template<class T>
T Arithametic<T>::add(){
    T c;
    c=a+b;
    return c;
}
template<class T>
T Arithametic<T>::sub(){
    T c;
    c=a-b;
    return c;
}

int main(){
    Arithametic<int> A(4,5);
    cout<<A.add();
    cout<<A.sub();
    Arithametic<float> B(4.1,5);
    cout<<B.add();
    cout<<B.sub();
}

