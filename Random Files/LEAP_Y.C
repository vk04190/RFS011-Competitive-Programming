       /*TO CHECK WHETHER  THE GIVEN YEAR IS LEAP YEAR OR NOT*/
						   /*A.SANDEEP*/
						   /*02211A0560*/

  #include<stdio.h>
  #include<conio.h>
  void main()
   {
    int a;
    clrscr();
    printf("enter the year:");
    scanf("%d",&a);
    if(a%4==0||a%100==0)
	printf("It is a leap year\n");
	printf("No. of days: 366");
    else
	printf("It is not a leap year\n");
	printf("No. of days: 365");

    getch();
   }