	/*TO GENERATE FIBONACCI SERIES USING DO WHILE*/
					/*A.SANDEEP*/
					/*02211A0560*/
					   /*CSE*/
   #include<stdio.h>
   #include<conio.h>
   void main()
   {
    int pre=0,cur=1,fut,n,i;
    clrscr();
    printf("Enter a No. to generate fibonacci series upto n:");
    scanf("%d",&n);
    do
     {
      fut=pre+cur;
      pre=cur;
      cur=fut;
      printf("%d\t",fut);
      }
   while(fut<n);
   getch();
   }
   /*output*/
    Enter a No. to generate fibonacci series upto n:10
    1    2    3	   5    8    13























