	    /*TO PRINT THE FOLLOWING OUTPUT 1
					   2 2
					  3 3 3
					    ........n*/

						 /*A.SANDEEP*/
						 /*02211A0560*/
						    /*CSE*/
  #include<stdio.h>
  #include<conio.h>
  #include<dos.h>

   void main()
    {
    int n,i,j;
    clrscr();
    printf("Enter the range:");
    scanf("%d",&n);
    textbackground(GREEN);
    for(i=1;i<=n;i++)
       {
	for(j=i;j<=n;j++)
	   printf(" ");
	     for(j=1;j<=i;j++)
	   {
	    textcolor(YELLOW+BLINK);
	     cprintf("%2d",i);
	    }
	printf("\n");
	}

	getch();
    }

