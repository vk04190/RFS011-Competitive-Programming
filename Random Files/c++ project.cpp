#include <iostream>
#include <conio.h>
#include <string>

struct student{
int reg;
string name;
string cours_name;
int first,second,final,total;
};

void print(){
int choise;
     clrscr();
     textcolor(11);
cout<<"\t\n\n";
cout<<"\t";cprintf("look to this option and tell me what you want to do..\r\n");
cprintf("\r\n       =============================================================\r\n");
cprintf("                      ============================\r\n\r\n");
cout<<"\t";cprintf("                1- Enter the information\r\n");
cout<<"\t";cprintf("                2- cancel name\r\n");
cout<<"\t";cprintf("                3- search\r\n");
cout<<"\t";cprintf("                4- display\r\n");
cout<<"\t";cprintf("                5- or mor to quite\r\n");
cprintf("\r\n                      ============================\r\n");
cprintf("       =============================================================\r\n");
cout<<"\n\t";

  }


void add_info(int& cont,student st[100]){
cout<<"\n";
cprintf("enter st_reg# :> ");cin>>st[cont].reg;
cprintf("enter st_name :> ");cin>>st[cont].name;
cprintf("enter course name :> ");cin>>st[cont].cours_name;
cprintf("enter the firsr , second and final marks :>\r\n");
cin>>st[cont].first;
cin>>st[cont].second;
cin>>st[cont].final;
st[cont].total=st[cont].first*.25+st[cont].second*.25+st[cont].final*.25;
 cont++ ;
 }

void cancel_std(int& cont,student st[100]){
int reg,i,k;
char ch;
cprintf("enter reg# of the student you want to cancel :> ");cin>>reg;
for(i=0;i<=cont;i++)
if (reg==st[i].reg)
for(k=i;k<=cont;k++){
st[k].reg=st[k+1].reg;
st[k].name=st[k+1].name;
st[k].cours_name=st[k+1].cours_name;
st[k].first=st[k+1].first;
st[k].second=st[k+1].second;
st[k].final=st[k+1].final;
st[k].total=st[k+1].total;
}
cont--;
cprintf("\r\n\r\npress any kay to return the mainu..");
cin>>ch;

   }

void search(int& cont,student st[100]){
int reg,k;
char ch;
cprintf("enter the student number you want to display :> ");
cin>>reg;
cprintf("\r\nreg#    name    co.name    M.1    M.2  M.final  total");
cprintf("\r\n______________________________________________________\r\n\r\n");
for(k=0;k<cont;k++){
if(reg==st[k].reg) {
cout<<st[k].reg<<"      ";
cout<<st[k].name<<"     ";
cout<<st[k].cours_name<<"       ";
cout<<st[k].first<<"     ";
cout<<st[k].second<<"      ";
cout<<st[k].final<<"      ";
cout<<st[k].total;
cout<<endl;
}

}
cprintf("\r\n\r\npress any kay to return the mainu..");
cin>>ch;
  }

void display(int cont,student st[100]){
int k;
char ch;
cprintf("\r\nreg#    name    co.name    M.1    M.2  M.final  total");
cprintf("\r\n______________________________________________________\r\n\r\n");
for(k=0;k<cont;k++){
cout<<st[k].reg<<"      ";
cout<<st[k].name<<"     ";
cout<<st[k].cours_name<<"       ";
cout<<st[k].first<<"      ";
cout<<st[k].second<<"      ";
cout<<st[k].final<<"      ";
cout<<st[k].total;
cout<<endl;
}
cprintf("\r\n\r\npress any kay to return the mainu..");
cin>>ch;
}


int main(){
student st[100];
int cont=0,choise,j;


 do {
 print();
 cprintf("enter your choise :> ");
cin>>choise;
  clrscr();
 if (choise >5) break;


switch (choise){
case 1: {
add_info(cont,st);
 break;}

 case 2:{
cancel_std(cont,st);
break ; }

case 3:{
search(cont,st);
break; }

case 4:{
display(cont,st);
break;
}


  }//end switch cases
 cout<<"cont= "<<cont;
 } while ( choise < '1' || choise > '4');

 cin>>j;

 }


