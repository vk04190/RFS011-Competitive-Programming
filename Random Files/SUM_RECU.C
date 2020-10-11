	    /*TO PRINT SUM OF NUMBERS USING RECURSIVE*/
						  /*A.sandeep*/
						  /*02211A0560*/
						      /*CSE*/
  #include<stdio.h>
  #include<conio.h>
   void main()
    {
    int sdigits(int n);
    int n,s;
    clrscr();
    printf("Enter a number :");
    scanf("%d",&n);
    s=sdigits(n);
    printf("The sum of digits is :%d",s);
    getch();
    }
    int sdigits(int n)
     {
     int sum=0;
     if(n==0)
	  return(0);
     else
     sum=n%10+sdigits(n/10);
     return(sum);
     }