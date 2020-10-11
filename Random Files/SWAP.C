		 /*TO SWAP ANY TWO GIVEN NUMBERS*/
						/*A.SANDEEP*/
						/*02211A0560*/
						   /*CSE*/
  #include<stdio.h>
  #include<conio.h>
  void main()
   {
	int temp,a,b;
	clrscr();
	printf("   OUTPUT :\n");
	printf("\tenter the values of a and b:");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("\tthe values after swaping are:");
	printf(" %d %d ",a,b);
	getch();
   }
