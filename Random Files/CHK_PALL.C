	/*TO CHECK WHETHER THE GIVEN NO. IS PALLINDROME OR NOT*/
							/*A.SANDEEP*/
							/*02211A0560*/
  #include<stdio.h>
  #include<conio.h>
  void main()
  {
   int n,r,t,sum=0;
   clrscr();
   printf("    OUTPUT:\n");
   printf("\tEnter a no.");
   scanf("%d",&n);
   t=n;
   while(n!=0)
	{
	r=n%10;
	sum=sum*10+r;
	n=n/10;
	}
   if(sum==t)
   printf("\tThe no. %d is a pallindrome",t);
   else
   printf("\tThe no. %d is not a pallindrome",t);
   getch();
  }
