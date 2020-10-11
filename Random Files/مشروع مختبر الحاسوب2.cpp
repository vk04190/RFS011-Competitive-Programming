#include <stdlib>
#include <iostream>
#include <string>
#include <conio>
#include <math>



void print1(){
textcolor(11);
cprintf("Please choose an option by entering the number, press q to quit\r\n\r\n");
cprintf("\r\n       =============================================================\r\n");
cprintf("                      ============================  \r\n\r\n");
cprintf("                         1 - simple caculater       \r\n");
cprintf("                         2 - Trigonometric functions\r\n");
cprintf("                         3 - Converter numbers      \r\n");
cprintf("                         4 - power                  \r\n");
cprintf("                         5 - About This Program     \r\n");
cprintf("                         q - to exist               \r\n");
cprintf("\r\n                      ============================   ");
cprintf("\r\n       =============================================================\r\n\r\n");
cprintf("enter your chioce :> "); }

void caculater(){
double num,z;
double num2;
char choice,ch1;
for (;;){
do {
textcolor(11);
cprintf("Please choose an option by entering the number, press q to quit\r\n\r\n");
cprintf("  **==========================================**\r\n");
cprintf("  **   1 - Addition                           **\r\n");
cprintf("  **   2 - Subtraction                        **\r\n");
cprintf("  **   3 - Division                           **\r\n");
cprintf("  **   4 - Multiplication                     **\r\n");
cprintf("  **   q- back to main menue                  **\r\n");
cprintf("  **==========================================**\r\n");
cin>>choice;
clrscr();  } while ( choice < '1' || choice > '4' && choice != 'q'); clrscr();
if (choice == 'q') break;
textcolor(12);
switch (choice) {
case '1':
 cprintf("Please enter a number\r\n");
cin>>num;
cprintf("Another number to be added\r\n");
cin>>num2;
cout<<"The Resulte of: "<<num<<" + "<<num2<<" = "<<num + num2;
cout<<"\n\n\n";
cprintf("enter C to coninue..");
cin>>ch1;clrscr ();
break;
case '2':
cprintf("Please enter a number\r\n");
cin>>num;
cprintf("Another number to be substract\r\n");
cin>>num2;
cout<<"The Resulte of: "<<num<<" - "<<num2<<" = "<<num - num2;
cout<<"\n\n\n";
cprintf("enter C to coninue..");
cin>>ch1;clrscr ();
break;
case '3':
cprintf("Please enter a number\r\n");
cin>>num;
cprintf("Another number to be diveded\r\n");
cin>>num2;
if((num ==0) && (num2==0)){
cout<<"The Resulte of: "<<num<<" / "<<num2<<" = Unknown";}
else  if((num !=0) && (num2==0)){
cout<<"The Resulte of: "<<num<<" / "<<num2<<" = Unknown";}
else if((num==0)&&(num2!=0)){
cout<<"The Resulte of: "<<num<<" / "<<num2<<" = " << "0";}
else if ((num!=0)&&(num2!=0))
cout<<"The Resulte of: "<<num<<" / "<<num2<<" = "<<num / num2;
cout<<"\n\n\n";
cprintf("enter C to coninue..");
cin>>ch1;clrscr ();
break;
case '4':
cprintf("Please enter a number\r\n");
cin>>num;
cprintf("Another number to be multiplied\r\n");
cin>>num2;
cout<<"The Resulte of: "<<num<<" * "<<num2<<" = "<<num * num2;
cout<<"\n\n\n";
cprintf("enter C to coninue..");
cin>>ch1;clrscr ();
break;
default:textcolor(77);cprintf("That is not an option");
   }}}

 void trigonometric(){
double num,z;
char choice,ch1;
for (;;){
do {
clrscr ();
textcolor(11);
cprintf("  **==========================================**\r\n");
cprintf("  **             1 - cosine                   **\r\n");
cprintf("  **             2 - sine                     **\r\n");
cprintf("  **             3 - tangent                  **\r\n");
cprintf("  **             4 - cotangent                **\r\n");
cprintf("  **             5 - secant                   **\r\n");
cprintf("  **             6 - cosecant                 **\r\n");
cprintf("  **             7 - back to main menue       **\r\n");
cprintf("  **==========================================**\r\n");
cin>>choice;
clrscr();  } while ( choice < '1' || choice > '6' && choice != '7');  clrscr();
if (choice == '7') break;
textcolor(12);
cprintf("\r\nenter angle :>");
cin>>num;
switch (choice){
case '1':cout<<"cosine "<<num<<" = "<<cos(num);
cprintf("\r\nenter C to coninue..");
cin>>ch1;clrscr ();break;
case '2':cout<<"sine "<<num<<" = "<<sin(num);
cprintf("\r\nenter C to coninue..");
cin>>ch1;clrscr ();break;
case '3':cout<<"tagent "<<num<<" = "<<sin(num)/cos(num);
cprintf("\r\nenter C to coninue..");
cin>>ch1;clrscr ();break;
case '4':cout<<"cotangent "<<num<<" = "<<cos(num)/sin(num);
cprintf("\r\nenter C to coninue..");
cin>>ch1;clrscr ();break;
case '5':cout<<"secant "<<num<<" = "<<1/cos(num);cprintf("enter C to coninue..");
cin>>ch1;clrscr ();break;
case '6':cout<<"cosecant "<<num<<" = "<<1/sin(num);
cprintf("\r\nenter C to coninue..");
cin>>ch1;clrscr ();break;
default:textcolor(77);cprintf("That is not an option");
   }}}

void converter(){
int num,i=0,y,x,j,k[100];
int sum=0;
char ch1,choice;
for (;;){
do {
cprintf("  **==========================================**\r\n");
cprintf("  **          1 - decimal to binary           **\r\n");
cprintf("  **          2 - binary to decimal           **\r\n");
cprintf("  **          q - back to main menue          **\r\n");
cprintf("  **==========================================**\r\n");
cout<<"enter you choice :> ";
cin>>choice;clrscr();  } while ( choice < '1' || choice > '2' && choice != 'q');  clrscr();
if (choice == 'q') break;
cout<<"enter a number :> ";
cin>>num;
x=num;
switch (choice){
case '1':{
while (num!=0){
y=num%2;
sum+=y*pow(10,i);
num=num/10;
i++;
}
cout<<x<<" in binary = "<<sum;
cprintf("\r\nenter C to coninue..");
cin>>ch1;clrscr ();
break;}



case '2':{
while (num!=0){
y=num%10;
sum+=y*pow(2,i);
num=num/10;}
cout<<sum;
cprintf("\r\nenter C to coninue..");
cin>>ch1;clrscr ();break;}

               }   }    }


void pow1(){
int num,i,pow1;
char ch1;
for ( ; ; ){
do{
clrscr ();
cprintf("enter the number :> ");cin>>num;
cprintf("enter the power :> ");cin>>i;
pow1=pow(num,i);
cout<<num<<" to power "<<i<<" = "<<pow1;
cprintf("\r\ndo you to continue ...  Y / N:> ");cin>>ch1;
}while ( ch1 != 'n');  clrscr();break;
 } }

void about(){
char ch1;

 cout<<"\tthis programe, made by samya rjoop :)\n\n";
 cout<<"\t\t\GOOD LOOK....\n";
 cout<<"\n\n\n";
 cprintf("enter C to coninue..");
cin>>ch1;clrscr ();}


int main(){
char choice1;
for (;;){
do {
print1();
cin>>choice1;
clrscr();} while ( choice1 < '1' || choice1 > '7' && choice1 != 'q');  clrscr();
if (choice1 == 'q') break;
textcolor(12);
switch (choice1) {
case '1':caculater();break;
case '2':trigonometric();break;
case '3':converter();break;
case '4':pow1();break;
case '5':about();break;
}    }
return 0;


}