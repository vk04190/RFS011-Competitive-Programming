#include<iostream>
void print (int n){
int j,i;
for (i=1;i<=n;i++){
for (j=1;j<=i;j++)
cout<<"* ";
cout<<endl; }
}

main (){
int n;
cout<<"enter how long n ";cin>>n;
print(n);
cin>>n;}