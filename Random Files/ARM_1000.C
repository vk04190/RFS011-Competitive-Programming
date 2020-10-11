	       /*TO PRINT ARMSTRONG NO.s LESS THAN 1000*/
						  /*A.SANDEEP*/
						  /*02211A0560*/

  #include<stdio.h>
  #include<conio.h>
  void main()
   {
    int q,a,b,c,z,x,n=1;
    clrscr();
    printf("  OUTPUT :");
    while(n<1000)
	{
	a=n%10;
	q=n/10;
	b=q%10;
	c=q/10;
	z=((c*100)+(b*10)+a);
	x=(a*a*a)+(b*b*b)+(c*c*c);
	if(x==z)
	printf("\n\t%d",n);
	n++;
	}
    getch();
   }
