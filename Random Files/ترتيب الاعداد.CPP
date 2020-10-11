#include<iostream>

swap(int a[3]){
int i,j,x;
for (i=1;i<=3;i++){
for (j=i+1;j<=3;j++)
if (a[j]<a[i])
x=a[i];
a[i]=a[j];
a[j]=x;  }
for (i=0;i<=2;i++)
cout<<a[j];    }

main (){
int x,i,y,a[3];
cout<<"enter your number "<<endl;
for (i=1;i<=3;i++)
cin>>a[i];
swap(a[3]);

cin>>y;}

