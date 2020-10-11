#include<iostream.h>
#include<conio.h>
 void main()
 {
         system("cls");
         int c=0,x=1;
                cout<<"\n\n\n\n\n\n\t\t\t Play Again...\n\n\n\t\t";
                 textcolor(10);
         cprintf("1- Yes");
         cout<<"\t\t\t2-No";
        c=getch();
        for (int i=0;i<i+1;i++)
        {if (c==13)
        break;
        else if (c==80)
        {if (x==true)
        x=false;
        else if (x==false)
        x=true;}
        else if (c==72)
        {if (x==true)
        x=false;
        else if (x==false)
        x=true;}
        if (x==true)
      {  system("cls");
                cout<<"\n\n\n\n\n\n\t\t\t Play Again...\n\n\n\t\t";
                 textcolor(10);
         cprintf("1- Yes");
         cout<<"\t\t\t2-No";
        c=getch();}
       else if (x==false)
      {  system("cls");
                cout<<"\n\n\n\n\n\n\t\t\t Play Again...\n\n\n\t\t1- Yes\t\t\t";
                 textcolor(10);
         cprintf("2-No");
        c=getch();}

}
if (x==true)
{system("cls");
system("game2.exe");}
else if(x==false)
{system("cls");
system("home.exe");}}

