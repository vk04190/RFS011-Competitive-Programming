	    /*TO PRINT THE FOLLOWING OUTPUT 1
					    2 2
					    3 3 3
					    ........n*/

						 /*A.SANDEEP*/
						 /*02211A0560*/
						    /*CSE*/
  #include<stdio.h>
  #include<conio.h>
   void main()
    {
    int n,i,j;
    clrscr();
    textcolor(GREEN);
    cprintf("Enter the range:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {
	for(j=1;j<=i;j++)
	    {
	     textcolor(YELLOW+BLINK);
	     cprintf("%2d",i);
	    }
	printf("\n");
	}
	getch();
    }

