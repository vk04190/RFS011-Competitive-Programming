// samya rjoop 20810649

#include <iostream>
#include <conio.h>
#include <string>

struct empolye{
int reg,salary,hour,main_salary;
string name;
};


void add_info(int how_many,empolye s[100]){
for (int i=0;i<how_many;i++){
 clrscr();
cout<<"reg :> ";cin>>s[i].reg;
cout<<"name :> ";cin>>s[i].name;
cout<<"main salary :> ";cin>>s[i].main_salary;
cout<<"extra hour :> ";cin>>s[i].hour; }}


void final_salary(int how_many,empolye s[100]){
int z;
 clrscr();
cout<<"reg   name  ext.hour  h.cost   f.salary\n";
cout<<"________________________________________\n\n";
for(int i=0;i<how_many;i++){
cout<<s[i].reg<<"     ";
cout<<s[i].name<<"      ";
cout<<s[i].hour<<"      ";
if (s[i].hour<=10)cout<<100/10;
else if (s[i].hour>=11 || s[i].hour<=24)cout<<150/11;
else if (s[i].hour>=120)cout<<200/25;
cout<<"    ";
if (s[i].hour<=10){z=s[i].main_salary+s[i].hour*10;cout<<z ; }
else if (s[i].hour>=11&&  s[i].hour<=24){z=s[i].main_salary+s[i].hour*150/11;cout<<z ;}
else if (s[i].hour>=25){z=s[i].main_salary+s[i].hour*200/25;cout<<z ; }
cout<<endl;
}  }



void maxf(int how_many , empolye s[100]){
int max;
max=s[0].salary;
for (int i=1;i<how_many;i++)
if(s[i].salary>=max)max=s[i].salary;
for (int i=1;i<how_many;i++)
if (s[i].salary==max){
cout<<"\n\nthe empoly has max salary is :\n";
cout<<"name :> "<<s[i].name;
cout<<"\nmain salary :> "<<s[i].main_salary;}
}

void sum(int how_many,empolye s[100]){
int sum=0,i;
for (i=0;i<how_many;i++)
sum+=s[i].hour;
cout<<"\n\n\nsum of extra hour is : "<<sum;
}


void print(int how_many,empolye s[100]){
int z;
cout<<"\n\n\nname       cost extra hour \n";
for (int i=0;i<how_many;i++){
cout<<s[i].name<<"        ";
if (s[i].hour<=10){z=s[i].main_salary+s[i].hour*10;cout<<z ; }
else if (s[i].hour>=11&&s[i].hour<=24){z=s[i].main_salary+s[i].hour*150/11;cout<<z ; }
else if (s[i].hour>=25){z=s[i].main_salary+s[i].hour*200/25;cout<<z ; }
cout<<endl;}
}



main(){
int how_many,y;
empolye s[100];
cout<<"enter how many empolye you have :> ";
cin>>how_many;
add_info(how_many,s);
final_salary(how_many,s);
maxf(how_many,s);
sum(how_many,s);
print(how_many,s);
cin>>y;
}



