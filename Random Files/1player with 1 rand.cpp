#include<iostream.h>
#include<conio.h>
int pl=1;
int xz=0;
int pr1=0,pr2=0,pr3=0,pr4=0,pr5=0,pr6=0,pr7=0,pr8=0, pr9=0;
int p1=0,p2=0, p3=0,p4=0,p5=0,p6=0,p7=0,p8=0,p9=0;
int drw()
{        for (int i=5;i<25;i++)
        {gotoxy(35,i);
        cout <<"|";}
        for (int i=5;i<25;i++)
        {gotoxy(43,i);
        cout <<"|";}
        for (int i=30;i<50;i++)
        {gotoxy(i,10);
        cout <<"-";}
        for (int i=30;i<50;i++)
        {gotoxy(i,20);
        cout <<"-";}}


int pri1(int n)
{gotoxy(32,22);
if (n==1)
{
textcolor(12);
cprintf("X");
 p1=1;}
else if (n==2)
{textcolor(10);
cprintf("O");
  p1=2;}

pr1=1;
xz++;
}

int pri2(int n)
{
gotoxy(39,22);
if (n==1)
{
textcolor(12);
cprintf("X");
 p2=1;}
else if (n==2)
{textcolor(10);
cprintf("O");
p2=2;}pr2=1;xz++;}


int pri3(int n)
{
gotoxy(46,22);
if (n==1)
{
textcolor(12);
cprintf("X");
 p3=1;}
else if (n==2)
{textcolor(10);
cprintf("O");
p3=2;}pr3=1;xz++;}

int pri4(int n)
{
gotoxy(32,15);
if (n==1)
{
textcolor(12);
cprintf("X");
 p4=1;}
else if (n==2)
{textcolor(10);
cprintf("O");
p4=2;}pr4=1;xz++;}

int pri5(int n)
{
gotoxy(39,15);
if (n==1)
{
textcolor(12);
cprintf("X");
 p5=1;}
else if (n==2)
{textcolor(10);
cprintf("O");
p5=2;}pr5=1;xz++;}

int pri6(int n)
{
gotoxy(46,15);
if (n==1)
{
textcolor(12);
cprintf("X");
 p6=1;}
else if (n==2)
{textcolor(10);
cprintf("O");
p6=2;}pr6=1;xz++;}

int pri7(int n)
{
gotoxy(32,8);
if (n==1)
{
textcolor(12);
cprintf("X");
 p7=1;}
else if (n==2)
{textcolor(10);
cprintf("O");
p7=2;}pr7=1;xz++;}

int pri8(int n)
{
gotoxy(39,8);
if (n==1)
{
textcolor(12);
cprintf("X");
 p8=1;}
else if (n==2)
{textcolor(10);
cprintf("O");
p8=2;}pr8=1;xz++;}

int pri9(int n)
{
gotoxy(46,8);
if (n==1)
{
textcolor(12);
cprintf("X");
 p9=1;}
else if (n==2)
{textcolor(10);
cprintf("O");
p9=2;}pr9=1;xz++;}



        int ply1()
        { int c,c1,z;
   malaz: c=getch();
           gotoxy(35,25);
           cout<<"\t\t\t\t";
           if (c==27)
            {gotoxy(12,12);
            cout<<"\n\n\tAre you sure\n\n    1.Home\t     2.back\n\n\tEnter your chosen\n\n\t\t" ;
               cin>>c1;
               if (c1==1)
               system("home.exe");
               else if (c1==2)
               {gotoxy(12,12);
                cout<<"\n\t\t\n\t\t     \n\n\t\t\t\t\n\t\t\t   \n\t\t\t\t\n\t\t\t\t\n\t\t\t\n\t\t\t\n\t\t\t\n\t\t\t";
                 gotoxy(16,12);
                 goto malaz;} }

       else if (c==49)
        {if (pr1==1)
          {gotoxy(35,25);
           cout<<"You can't chose this place";
           goto malaz;}
         else
        pri1(1);}

        else if (c==50)
        {if (pr2==1)
          {gotoxy(35,25);
           cout<<"You can't chose this place";
            goto malaz;}
         else
        pri2(1); }


        else if (c==51)
        {if (pr3==1)
          {gotoxy(35,25);
           cout<<"You can't chose this place";
            goto malaz;}
         else
        pri3(1); }

       else if (c==52)
        {if (pr4==1)
          {gotoxy(35,25);
           cout<<"You can't chose this place";
            goto malaz;}
         else
        pri4(1); }

        else if (c==53)
        {if (pr5==1)
          {gotoxy(35,25);
           cout<<"You can't chose this place";
            goto malaz;}
         else
        pri5(1); }

      else if (c==54)
        {if (pr6==1)
          {gotoxy(35,25);
           cout<<"You can't chose this place";
            goto malaz;}
         else
        pri6(1); }

      else if (c==55)
        {if (pr7==1)
          {gotoxy(35,25);
           cout<<"You can't chose this place";
            goto malaz;}
         else
        pri7(1); }

      else if (c==56)
        {if (pr8==1)
          {gotoxy(35,25);
           cout<<"You can't chose this place";
            goto malaz;}
         else
        pri8(1); }

      else if (c==57)
        {if (pr9==1)
          {gotoxy(35,25);
           cout<<"You can't chose this place";
            goto malaz;}
         else
        pri9(1); }

        pl=2;}

        int ply2()
        { int z,c,t;
   malaz:

     t=rand()%9;
        if (t==0)
        goto malaz;
        else if (t==1)
         c=49;
                 else if (t==2)
         c=50;
                 else if (t==3)
         c=51;
                 else if (t==4)
         c=52;
                 else if (t==5)
         c=53;
                 else if (t==6)
         c=54;
                 else if (t==7)
         c=55;
                 else if (t==8)
         c=56;
                 else if (t==9)
         c=57;

   gotoxy(35,25);
           cout<<"\t\t\t\t";
        if (c==49)
        {if (pr1==1)
          {gotoxy(35,25);
           cout<<"You can't chose this place";
           goto malaz;}
         else
        pri1(2);}

        else if (c==50)
        {if (pr2==1)
          {gotoxy(35,25);
           cout<<"You can't chose this place";
            goto malaz;}
         else
        pri2(2); }

         else if (c==51)
        {if (pr3==1)
          {gotoxy(35,25);
           cout<<"You can't chose this place";
            goto malaz;}
         else
        pri3(2); }

        else if (c==52)
        {if (pr4==1)
          {gotoxy(35,25);
           cout<<"You can't chose this place";
            goto malaz;}
         else
        pri4(2); }

                else if (c==53)
        {if (pr5==1)
          {gotoxy(35,25);
           cout<<"You can't chose this place";
            goto malaz;}
         else
        pri5(2); }

        else if (c==54)
        {if (pr6==1)
          {gotoxy(35,25);
           cout<<"You can't chose this place";
            goto malaz;}
         else
        pri6(2); }

      else if (c==55)
        {if (pr7==1)
          {gotoxy(35,25);
           cout<<"You can't chose this place";
            goto malaz;}
         else
        pri7(2); }

      else if (c==56)
        {if (pr8==1)
          {gotoxy(35,25);
           cout<<"You can't chose this place";
            goto malaz;}
         else
        pri8(2); }

      else if (c==57)
        {if (pr9==1)
          {gotoxy(35,25);
           cout<<"You can't chose this place";
            goto malaz;}
         else
        pri9(2); }


        pl=1;}


int srt()
{
int x=0;
if ((p1==1)&&(p2==1)&&(p3==1))
{ for (int i=32;i<48;i++)
     {gotoxy(i,22);
       textcolor(13);
       cprintf("-");}
x=1;}
else if ((p4==1)&&(p5==1)&&(p6==1))
{ for (int i=32;i<48;i++)
     {gotoxy(i,15);
       textcolor(13);
       cprintf("-");}
x=1;}
else if ((p7==1)&&(p8==1)&&(p9==1))
{ for (int i=32;i<48;i++)
     {gotoxy(i,8);
       textcolor(13);
       cprintf("-");}
x=1;}
else if ((p7==1)&&(p4==1)&&(p1==1))
{ for (int i=7;i<23;i++)
     {gotoxy(32,i);
       textcolor(13);
       cprintf("|");}
x=1;}
else if ((p8==1)&&(p5==1)&&(p2==1))
{ for (int i=7;i<23;i++)
     {gotoxy(39,i);
       textcolor(13);
       cprintf("|");}
x=1;}
else if ((p9==1)&&(p6==1)&&(p3==1))
{ for (int i=7;i<23;i++)
     {gotoxy(46,i);
       textcolor(13);
       cprintf("|");}
x=1;}
else if ((p1==1)&&(p5==1)&&(p9==1))
{gotoxy(46,8);
int j=8;
 for (int i=46;i>30;i--)
     {gotoxy(i,j++);
      textcolor(13);
       cprintf("/");
       cout<<"\n";}
x=1; }


else if ((p7==1)&&(p5==1)&&(p3==1))
{gotoxy(32,8);
int j=6;
 for (int i=30;i<48;i++)
     {gotoxy(i,j++);
      textcolor(13);
       cprintf("\\");
       cout<<"\n";}
x=1; }



else if ((p1==2)&&(p2==2)&&(p3==2))
{ for (int i=32;i<48;i++)
     {gotoxy(i,22);
       textcolor(13);
       cprintf("-");}
x=2;}
else if ((p4==2)&&(p5==2)&&(p6==2))
{ for (int i=32;i<48;i++)
     {gotoxy(i,15);
       textcolor(13);
       cprintf("-");}
x=2;}
else if ((p7==2)&&(p8==2)&&(p9==2))
{ for (int i=32;i<48;i++)
     {gotoxy(i,8);
       textcolor(13);
       cprintf("-");}
x=2;}
else if ((p7==2)&&(p4==2)&&(p1==2))
{ for (int i=7;i<23;i++)
     {gotoxy(32,i);
       textcolor(13);
       cprintf("|");}
x=2;}
else if ((p8==2)&&(p5==2)&&(p2==2))
{ for (int i=7;i<23;i++)
     {gotoxy(39,i);
       textcolor(13);
       cprintf("|");}
x=2;}
else if ((p9==2)&&(p6==2)&&(p3==2))
{ for (int i=7;i<23;i++)
     {gotoxy(46,i);
       textcolor(13);
       cprintf("|");}
x=2;}
else if ((p1==2)&&(p5==2)&&(p9==2))
{gotoxy(46,8);
int j=8;
 for (int i=46;i>30;i--)
     {gotoxy(i,j++);
      textcolor(13);
       cprintf("/");
       cout<<"\n";}
x=2; }
else if ((p7==2)&&(p5==2)&&(p3==2))
{gotoxy(32,8);
int j=6;
 for (int i=30;i<48;i++)
     {gotoxy(i,j++);
      textcolor(13);
       cprintf("\\");
       cout<<"\n";}
x=2; }
else if (xz==9)
x=3;
return x;
}






void main()
{      int z=0,t,c;
       drw();
       for(int i=0;i<i+1;i++)
       {z=srt();
       gotoxy(35,25);
       if (z==1)
       {textcolor(14);
       cprintf("Player 1 (X) Win");
       getch();
       break ;}
       else if (z==2)
       {textcolor(14);
       cprintf("Computer (O) Win");
       getch();
       break ;}
       else if (z==3)
       {textcolor(14);
       cprintf("No body won");
       getch();
       break ;}
       else
       {gotoxy(10,10);
        textcolor(10);
        cprintf("Player:");
       if (pl==1)
       {cout<<"\n\n\t "<<pl<<"  (X)";
       ply1();}
       else if (pl==2)
       {cout<<"\n\n\t "<<pl<<"  (O)";
       ply2();}}}
       system("new1");
       }
