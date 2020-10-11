      /*TO PRINT FACTORIAL OF A GIVEN NUMBER USING RECURSIVE*/
						    /*A.SANDEEP*/
						    /*02211A0560*/
						       /*CSE*/
  #include<stdio.h>
  #include<conio.h>
   void main()
    {
    long int fact(int n);
    int n,f;
    clrscr();
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The factorial of a %d is %d",n,fact(n));
    getch();
    }
    long int fact(int n)
       {
       long int f;
	if(n==1||n==0)
	return(1);
    else
	f=n*fact(n-1);
	return(f);
    }