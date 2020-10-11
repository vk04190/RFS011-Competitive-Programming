	     /*TO PRINT THE FACTORIAL OF A GIVEN NUMBER*/
						/*A.SANDEEP*/
						/*02211A0560*/
  #include<conio.h>
  #include<stdio.h>
  void main()
   {
    int i,n,fact=1;
    clrscr();
    printf("Enter a no. to find its fact:");
    scanf("%d",&n);
    do
	{
	for(i=1;i<=n;i++)
	fact=fact*i;
	}
    while(fact<n);
    printf("%d",fact);
    getch();
   }
