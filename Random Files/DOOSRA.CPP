     #include<stdio.h>
     #include<conio.h>
     void main (void)
     {
     int tn,i;

     clrscr();
     printf("Enter table no;\n");
     scanf("%d",&tn);
     for(i=1;i<=10;i++)
     {
     printf("\t\t%d x %d = %d\n\n",tn,i,tn*i);
     }
     getch();
     }



