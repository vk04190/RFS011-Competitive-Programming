      #include<stdio.h>
      #include<conio.h>
      void main(void)
      {
      int x,y;
      clrscr();
      for(y=1;y<4;y++)
      {
      for(x=1;x<4;x++)
      if(x==y)
      printf("\xDB");
      else
      printf("\xBO");
      printf("\n");
      }
      getch();
      }


