#include<iostream>

void redarray(int a[],int size){
int i;
for (i=1;i<=size;i++)
cin>>a[i];
}

int sum(int a[],int size){
int sum=0,i;
for (i=1;i<=size;i++)
sum+=a[i];
return sum;}

int main(){
const size=5;
int a[size],y;

cout<<"enter the numbers...\n";
redarray(a,size);
cout<<"sum= "<<sum(a,size);

cin>>y;}
