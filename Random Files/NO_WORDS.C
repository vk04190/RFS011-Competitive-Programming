	/*TO PRINT NUMBERS INTO WORDS*/
				      /*A.sandeep*/
				      /*02211A0560*/
				      /*C.S.E.*/
  #include<stdio.h>
  #include<conio.h>
   void main()
    {
    int x,n,m,r,rno=0;
    clrscr();
    printf("Enter the no.:");
    scanf("%d",&n);
    while(n!=0)
       {
       r=n%10;
       rno=(rno*10)+r;
       n=n/10;
       }
    while(rno!=0)
       {
       m=rno%10;
       switch(m)
	 {
	 case 0:printf("  ZERO  ");
		break;
	 case 1:printf("  ONE  ");
		break;
	 case 2:printf("  TWO  ");
		break;
	 case 3:printf("  THREE  ");
		break;
	 case 4:printf("  FOUR  ");
		break;
	 case 5:printf("  FIVE  ");
		break;
	 case 6:printf("   SIX  ");
		break;
	 case 7:printf("  SEVEN  ");
		break;
	 case 8:printf("  EIGHT  ");
		break;
	 case 9:printf("  NINE  ");
		break;
       }
	rno=rno/10;
      }
     getch();
    }