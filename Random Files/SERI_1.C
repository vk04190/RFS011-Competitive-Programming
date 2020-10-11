						/*A.SANDEEP*/
						/*02211A0560*/
						   /*CSE*/

  #include<stdio.h>
  #include<conio.h>
  #include<math.h>
   void main()
    {
      int x,i,p,fact=1,n;
      float sum=1,y;
      clrscr();
      printf("Enter the values x and n:");
      scanf("%d%d",&n,&x);
      for(p=1;p<=n;p+=2)
       {
       y=pow(x,p);
       fact=1;
       for(i=1;i<=p;i++)
	 {
	 fact*=i;
	 sum+=y/fact;
	 }
       }
      printf("%f",sum);
    getch();
    }

