	 /*TO PRINT SMALLEST AND LARGEST NUMBER USING AN ARRAY*/
						/*A.SANDEEP*/
						/*02211A0560*/
						/*C.S.E.*/
  #include<stdio.h>
  #include<conio.h>
  void main()
   {
   int a[10],i,large,small;
   clrscr();
   for(i=0;i<10;i++)
      {
      printf("Enter a[%d] value: ",i);
      scanf("%d",&a[i]);
      }
   large=a[0];
   small=a[0];
   for(i=1;i<10;i++)
      {
      if(a[i]<small)
	 small=a[i];
      if(a[i]>large)
	 large=a[i];
      }
   printf("Large=%d\n Small=%d",large,small);
   getch();
   }