#include<iostream>
#include<string>

int max(int x,int y){
int max;
if (x>y)max=x;else max=y;return max;}

int avg(int x,int y){
int avg;
avg=(x+y)/2;
return avg;}

char grade(int avg){
char ch;
int t;t=avg/10;
switch(t){
case 9:cout<<'a';break;
case 8:cout<<'b';break;
case 7:cout<<'c';break;
}return ch;}


int main (){
int x,y,avg,t;

cout<<"enter your marks : "<<endl;
cin>>x>>y;

max(x,y);
cout<<"the max mark is : "<<max(x,y)<<endl;
avg(x,y);
cout<<"avg of 2 marks is : "<<avg(x,y)<<endl;
avg=avg(x,y);
grade(avg);
cout<<"the grade for this student is : "<<grade(avg);
cin>>t;}










