 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 void main()
     {
      FILE *f1,*f2;
      char ch;
      clrscr();
      f1=fopen("f1.dat","r");
      f2=fopen("f2.dat","w");
      if(f1==NULL)
	 {
	  printf("FILE ERROR\n");
	  exit(0);
	 }

	   {
	    while((ch==getc(f1))!=EOF)
	    putc(ch,f2);
	    getch();
	    fclose(f1);
	    fclose(f2);
	   }
	   f2=fopen("f2.dat","r");
	   printf("THE CONTENTS OF THE FILE f2.dat \n");
	   while((ch=getc(f2))!=EOF)
	       {
		printf("%c",ch);
	       }
	   fclose(f2);
	   getch();
	 }
