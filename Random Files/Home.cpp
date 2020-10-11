#include<iostream.h>
#include<conio.h>
   void malazoo()
   {
         for(int i=0;i<100;i++)
               { system("cls");
                textcolor(i);
                cout<<"\t\t";
         	cprintf ("******************************************************");
                cout<<"\n";cout<<"\t\t";
         	cprintf ("*****                                            *****");
                cout<<"\n";cout<<"\t\t";
         	cprintf ("*****                 Welcome To                 *****");
                cout<<"\n";cout<<"\t\t";
         	cprintf ("*****                                            *****");
                cout<<"\n";cout<<"\t\t";
         	cprintf ("*****                 X O  Games                 *****");
                cout<<"\n";cout<<"\t\t";
                cprintf ("*****                                            *****");
                cout<<"\n";cout<<"\t\t";
                cprintf ("*****               By.samya rjoop               *****");
                cout<<"\n";cout<<"\t\t";
                cprintf ("*****                                            *****");
                cout<<"\n";cout<<"\t\t";
         	cprintf ("******************************************************");
                cout<<"\n\n";cout<<"\t\t";
                cprintf ("                    Please Wait...                    ");
                }
                 system("cls");
                }
   	void main()
	{   malazoo();
 malaz:   int b=1;
 bool x=true;
        float c=0;
        		cout<<"\t\t******************************************************\n";
		cout<<"\t\t*****                                            *****\n";
		cout<<"\t\t*****                 Welcome To                 *****\n";
                cout<<"\t\t*****                                            *****\n";
		cout<<"\t\t*****                 X O  Games                 *****\n";
                cout<<"\t\t*****                                            *****\n";
                cout<<"\t\t*****               By.Malaz Kseby               *****\n";
                cout<<"\t\t*****                                            *****\n";
		cout<<"\t\t******************************************************\n\n\n\n";

        cout<<"\t\t\t     ~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"\t\t\t    |  ";
        textcolor(10);
        cprintf("1- Player VS Player");
        cout<<"     |\n\t\t\t    |  2- Player VS Computer   |\n\t\t\t    |  3- About Me...\t       |\n\t\t\t    |  4- Exit Game...\t       |\n";
        cout<<"\t\t\t     ~~~~~~~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t";
               cprintf("Select youer chose ...");
                c=getch();
        for (int i=0;i<i+1;i++)
        {
        if (c==13)
        break;
        else if (c==27)
        {b=4;
        break;}
        if (c==80)
        b++;

        if (c==72)
        b--;

        if (b==0)
        b=4;
        if (b==5)
        b=1;
        if (b==1)
        {
        gotoxy(1,13);
       cout<<"\t\t\t     ~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"\t\t\t    |  ";
        textcolor(10);
        cprintf("1- Player VS Player");
        cout<<"     |\n\t\t\t    |  2- Player VS Computer   |\n\t\t\t    |  3- About Me...\t       |\n\t\t\t    |  4- Exit Game...\t       |\n";
        cout<<"\t\t\t     ~~~~~~~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t";
               cprintf("Select youer chose ...");
        c=getch(); continue;   }
        if (b==2)
        {
       gotoxy(1,13);
       cout<<"\t\t\t     ~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"\t\t\t    |  1- Player VS Player     |\n\t\t\t    |  ";
        textcolor(10);
        cprintf("2- Player VS Computer");
        cout<<"   |\n\t\t\t    |  3- About Me...\t       |\n\t\t\t    |  4- Exit Game...\t       |\n";
        cout<<"\t\t\t     ~~~~~~~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t";
               cprintf("Select youer chose ...");
                c=0;          c=getch();  continue;
         }
                  else if (b==3)
        {
      gotoxy(1,13);
       cout<<"\t\t\t     ~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"\t\t\t    |  1- Player VS Player     |\n\t\t\t    |  2- Player VS Computer   |\n\t\t\t    |  ";
        textcolor(10);
        cprintf("3- About Me...");
        cout<<"\t       |\n\t\t\t    |  4- Exit Game...\t       |\n";
        cout<<"\t\t\t     ~~~~~~~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t";
               cprintf("Select youer chose ...");
                c=0;           c=getch();  continue;        }
                              if (b==4)
        {
    gotoxy(1,13);
       cout<<"\t\t\t     ~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"\t\t\t    |  1- Player VS Player     |\n\t\t\t    |  2- Player VS Computer   |\n\t\t\t    |  3- About Me...\t       |\n\t\t\t    |  ";
        textcolor(10);
        cprintf("4- Exit Game...");
        cout<<"\t       |\n";
        cout<<"\t\t\t     ~~~~~~~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t";
               cprintf("Select youer chose ...");
                c=0;            c=getch(); continue;        }

        }
       if (b==1)
       {system("cls");
       system("game1.exe");}
       else if (b==2)
       {system("cls");
       system("game2.exe");}
       else if (b==3)
       {system("cls");
       system("about.exe");}
       else if (b==4)
        {
        system("cls");
                cout<<"\n\n\n\n\n\n\t\t\t\t Are You Sure...\n\n\n\t\t";
                 textcolor(10);
         cprintf("1- Exit Game...");
         cout<<"\t\t\t2-Back...";
        c=getch();
        for (int i=0;i<i+1;i++)
        {if (c==13)
        break;
        else if ((c==80)||(c==77))
        {if (x==true)
        x=false;
        else if (x==false)
        x=true;}
        else if ((c==72)||(c==75))
        {if (x==true)
        x=false;
        else if (x==false)
        x=true;}
        if (x==true)
      {  system("cls");
                cout<<"\n\n\n\n\n\n\t\t\t\t Are You Sure...\n\n\n\t\t";
                 textcolor(10);
         cprintf("1- Exit Game...");
         cout<<"\t\t\t2-Back...";
        c=getch();}
       else if (x==false)
      {  system("cls");
                cout<<"\n\n\n\n\n\n\t\t\t\t Are You Sure...\n\n\n\t\t1- Exit Game...\t\t\t";
                 textcolor(10);
         cprintf("2-Back...");
        c=getch();}

}
if (x==true)
exit(2);
else if(x==false)
{system("cls");
goto malaz;}
} }
