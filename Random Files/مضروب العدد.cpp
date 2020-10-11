#include<iostream>
int factorial(int);
void main(){
int a;
cout<<"enter your number";
cin>>a;
cout<<factorial(a);
cin>>a;
}
int factorial(int x){
if (x>1)
return (x*factorial(x-1));
else return 1;}
