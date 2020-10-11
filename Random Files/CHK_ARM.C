	/*TO CHECK WHETHER THE GIVEN NO. IS ARMSTRONG OR NOT*/
						      /*A.SANDEEP*/
						      /*02211A0560*/

  #include<stdio.h>
  #include<conio.h>
  void main()
   {
    int n,r,t,sum=0;
    clrscr();
    printf("  OUTPUT :\n");
    printf("\tEnter a no.");
    scanf("%d",&n);
    t=n;
    while(n!=0)
	{
	r=n%10;
	sum=sum+r*r*r;
	n=n/10;
	}
   if(sum==t)
   printf("The no. %d is armstrong",t);
   else
   printf("The no. %d is not an armstrong",t);
   getch();
  }
