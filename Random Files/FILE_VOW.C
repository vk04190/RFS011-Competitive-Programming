  #include<stdio.h>
  #include<conio.h>
  #include<stdlib.h>
  void main()
    {
     int n=0;
     char ch;
     FILE *f1;
     clrscr();
     f1=fopen("f1.dat","w");
     if(f1==NULL)
	{
	 printf("FILE ERROR");
	exit(0);
	}
     else
     {
     printf("Enter file contents:");
     while((ch=getchar())!=EOF)
     putc(ch,f1);
     }
     fclose(f1);
	f1=fopen("f1.dat","r");
	if(f1==NULL)
	{
	 printf("FILE ERROR");
	}
	else

	{
	 while((ch==getc(f1))!=EOF)
	     {
	      if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	      n++;
	    }
	 }
	 printf("THE NO OF VOWELS=%d",n);
	 fclose(f1);
	// getch();
     }
