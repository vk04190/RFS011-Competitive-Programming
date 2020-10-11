#include<iostream>
#include<math>

int f1(int x){
int z;
z=sqrt(3-cos (2*x));
return z;}

int f2(int x){
int z;
z=pow(x,6)-pow(2.718281828,x);
return z;}

main(){
int x,y;
cout<<"please enter your number :"<<endl;
cin>>x;
if (x>=0)f1(x);cout<<"z = "<<f1(x);
if (x<0) f2(x);cout<<"z = "<<f2(x);

cin>>y;}
