	  /*TO CHECK WHETHER THE GIVEN NO. IS PRIME OR NOT*/
						 /*A.SANDEEP*/
						 /*02211A0560*/
						     /*CSE*/

  #include<stdio.h>
  #include<conio.h>
  void main()
   {
    int n,i=2,r;
    clrscr();
    printf("\t\tenter the no.");
    scanf("%d",&n);
    while(i<n)
	{
	r=n%i;
	i++;
	if(r==0)
		{
		printf("n is composite");
		break;
		}
	}
	if(r!=0)
	printf("n is prime");
    getch();
   }
    /*OUTPUT*/
               enter the no. 56
               n is composite 