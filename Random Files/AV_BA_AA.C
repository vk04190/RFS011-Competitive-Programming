    /*TO COUNT NO. OF STUDENTS ABOVE,BELOW AND AVERAGE STUDENTS*/
				       /*A.SANDEEP*/
				       /*02211A0560*/
				       /*C.S.E.*/
  #include<stdio.h>
  #include<conio.h>
   void main()
    {
     int a[10];
     int aa=0,ba=0,ae=0,i;
     clrscr();
     printf("Enter the marks:\n");
     for(i=0;i<10;i++)
       {
	scanf("%d",&a[i]);
	if(a[i]>55)
	aa++;
	else if(a[i]<55)
	ba++;
	else
	ae++;
       }
     printf("No. OF AVG STUDENTS ARE:%d\n",ae);
     printf("No. OF ABOVE AVERAGE STUDENTS:%d\n",aa);
     printf("No. OF BELOW AVERAGE STUDENTS ARE:%d",ba);
    getch();
   }
