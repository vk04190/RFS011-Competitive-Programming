		/*TO PRINT UPPER TRIANGLE OF A MATRIX*/
					      /*A.SANDEEP*/
					      /*02211A0560*/
					      /*C.S.E.*/
  #include<stdio.h>
  #include<conio.h>
   void main()
    {
     int a[3][3],i,j;
     clrscr();
     printf("Enter the elements into matrix A:");
     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
       scanf("%d",&a[i][j]);
       printf("THE UPPER TRIANGLE MATRIX IS:\n");
       for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
	   {
	    if(i<=j)
	    printf("%4d",a[i][j]);
	    else
	    printf("   0");
	   }
	    printf("\n");
	}
      getch();
    }

