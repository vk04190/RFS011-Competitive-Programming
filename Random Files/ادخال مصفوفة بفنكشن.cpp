#include<iostream>

void redarray(int a[],int size){
int i;
for (i=1;i<=size;i++)
cin>>a[i];
}

int max(int a[],int size){
int max=0,i;
for (i=1;i<=size;i++)
if (a[i]>max)max=a[i];
return max;}



int sum(int a[],int size){
int sum=0,i;
for (i=1;i<=size;i++)
sum+=a[i];
return sum;}


void zero(int a[],int size){
int i;
for (i=1;i<=size;i++)
a[i]=0;
for (i=1;i<=size;i++)
cout<<a[i];
}

int main(){
const size=5;
int a[size],y;
cout<<"enter the numbers...\n";
redarray(a,size);
cout<<"\n\nsum= "<<sum(a,size)<<endl;
cout<<"max= "<<max(a,size)<<endl;
zero(a,size);
cin>>y;}
