	/*TO FIND THE QUADRIANT OF THE GIVEN POINT*/
						/*A.SANDEEP*/
						/*02211A0560*/
  #include<stdio.h>
  #include<conio.h>
  void main()
   {
    int x,y;
    clrscr();
    printf("Enter the co-ordinates x,y:");
    scanf("%d%d",&x,&y);
		if(x>=0)
	{
	if(y>=0)
	printf("The point is in first quadriant");
	else
	printf("The point is in FOURTH quadriant");
	}
		if(x<=0)
	{
	if(y>=0)
	printf("The point is in SECOND quadriant");
	else
	printf("The point is in THIRD quadriant");
	}
		getch();
	 }
