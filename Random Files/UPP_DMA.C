    /*TO PRINT IN UPPER CASE USING DYNAMIC MEMORY ALLOCATION*/
				     /*A.SANDEEP*/
				     /*02211A0560*/
				     /*C.S.E*/
   #include<conio.h>
   #include<stdio.h>
   #include<stdlib.h>
   main()
     {
       char *p;
       int i,n;
       clrscr();
       printf("Enter the no. of characters:");
       scanf("%d",&n);
       p=(char *)malloc(n*i);
       printf("Enter a string:");
       for(i=0;i<=n;i++)
	 scanf("%c",(p+i));
	 for(i=0;i<=n;i++)
	    {
	     if(*(p+i)>=97&&*(p+i)<=123)
	       {
		*(p+i)=*(p+i)-32;
	       }
	     printf("%c",*(p+i));
	    }

	 getch();
   }

