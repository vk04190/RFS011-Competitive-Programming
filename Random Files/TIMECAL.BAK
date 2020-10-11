#include<stdio.h>
#include<conio.h>
#include<dos.h>


main()
{
  int hr, min, sec=0,i;
  char ch[3]="am";
  clrscr();

  hours:
		 printf("\nEnter the hours of the day\n");
		 scanf("%d",&hr);
		 if(hr>24)
		 {
		   printf("\nI hope u know there are 24 hours in a day");
		   goto hours;
		 }
	minutes:
			printf("\nEnter the minutes of the hour\n");
			scanf("%d",&min);
		   if(min>60)
		  {
			printf("\nI hope you know there are 60 minutes in an hour");
			goto minutes;
		  }

  goto hrs;

  while(!kbhit())
	  {
	again:
		clrscr();
		for(i=0;i<22;i++)
		   printf("\n");
		for(i=0;i<4;i++)
		   printf("\t");
		printf("%d:%d:%d",hr,min,sec);
		printf("%s\b%c\b",ch,32);
		sleep(1);
		sec++;

			if(sec==60)
			   {
				  min++;
				  sec=0;
				  if(min==60)
						{
						  hr++;
						  min=0;
		   hrs:			  if((hr>=0 && hr<12 ))
						  {
						   if(min!=0)
								  {
								   strcpy(ch,"am");

									goto again;
								  }
						   else
								  {
									min=sec=0;
									strcpy(ch,"am");
									goto again;
								  }
							   }
						else if((hr>=12 && hr<=23))
								  {
								   if(min!=0)
									  {
									  printf("\n%d",min);
									   strcpy(ch,"pm");
									   printf("\n%d",min);
									   goto again;
									  }
								   else
									  {
										min=sec=0;
										strcpy(ch,"pm");
										goto again;
									  }


								  }
						 else if( hr==24)
								  {
								  hr=min=sec=0;
								  strcpy(ch,"am");
								  goto again;

								  }
					  goto again;
					 }
				goto again;
			  }

	  }

  getch();
  return 0;
}

