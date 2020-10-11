//prog to display the current time in seven segment display


#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

int hr,min,sec=0;
void get(int *a,int *b, int hrs);
void display_hr_a(int m);
void display_hr_b(int m);
void display_min_a(int m);
void display_min_b(int m);
void display_sec_a(int m);
void display_sec_b(int m);

main()
{



struct time t;
//struct time *p= &t;



 int hrs, mins, secs=0,a=0,b=0;
  int i;
  char ch[4]="AM";
  clrscr();
  gettime( &t);

  hr=t.ti_hour;
  min=t.ti_min;
  sec=t.ti_sec;

  goto hs;  //to check if hrs falls in am or pm

  while(!kbhit())
	  {
	again:
		clrscr();
		   hrs=hr;
		   mins=min;
		   secs=sec;
		   get(&a,&b,hrs);
		   display_hr_a(a);
		   display_hr_b(b);
		   gotoxy(39,17);
		   printf("%c",4);
		   gotoxy(39,21);
		   printf("%c",4);
		   get(&a,&b,mins);
		   display_min_a(a);
		   display_min_b(b);
		   gotoxy(24,17);
		   printf("%c",4);
		   gotoxy(24,21);
		   printf("%c",4);
		   get(&a,&b,secs);
		   display_sec_a(a);
		   display_sec_b(b);

		 gotoxy(55,21);
		printf("%s%c\b",ch,32);
		sleep(1);
		textcolor(20);
		sec++;

			if(sec==60)
			   {
				  min++;
				  sec=0;
				  if(min==60)
						{
						  hr++;
						  min=0;
		   hs:			  if((hr>=0 && hr<12 ))
						  {
						   if(min!=0)
								  {
								   strcpy(ch,"AM");

									goto again;
								  }
						   else
								  {
									min=sec=0;
									strcpy(ch,"AM");
									goto again;
								  }
							   }
						else if((hr>=12 && hr<=23))
								  {
								   if(min!=0)
									  {
									  printf("\n%d",min);
									   strcpy(ch,"PM");
									   printf("\n%d",min);
									   goto again;
									  }
								   else
									  {
										min=sec=0;
										strcpy(ch,"PM");
										goto again;
									  }


								  }
						 else if( hr==24)
								  {
								  hr=min=sec=0;
								  strcpy(ch,"AM");
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

  void get(int *a,int *b, int hrs)
  {


   if(hrs>9)
   {
	  *b=hrs%10;
	  *a=hrs/10;
   }
   else
	 {
	  *a=0;
	  *b=hrs;
	 }
   }



	void display_hr_a(int m)
	 {
	  switch(m)
	  {
		case 0:

		gotoxy(10,16);
		cprintf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(10,17);
		cprintf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(10,18);
		cprintf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(10,19);
		cprintf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(10,20);
		cprintf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(10,21);
		cprintf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(10,22);
		cprintf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 1:
		gotoxy(10,16);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(10,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(10,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(10,19);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(10,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(10,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(10,22);
		printf("%c%c%c%c%c",32,32,32,32,32);
		break;


		case 2:
		gotoxy(10,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(10,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(10,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(10,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(10,20);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(10,21);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(10,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;







	   }

	  }




	  void display_hr_b(int m)
	 {
	  switch(m)
	  {

		case 0:
		gotoxy(17,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(17,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(17,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(17,19);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(17,20);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(17,21);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(17,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 1:
		gotoxy(17,16);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(17,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,19);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(17,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,22);
		printf("%c%c%c%c%c",32,32,32,32,32);
		break;


		case 2:
		gotoxy(17,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(17,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(17,20);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(17,21);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(17,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;



		case 3:
		gotoxy(17,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(17,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(17,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,22);
		printf("%c%c%c%c%c",32,219,219,219,32);

		break;


		case 4:
		gotoxy(17,16);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(17,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(17,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(17,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(17,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,22);
		printf("%c%c%c%c%c",32,32,32,32,32);
		break;


		case 5:
		gotoxy(17,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(17,17);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(17,18);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(17,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(17,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 6:
		gotoxy(17,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(17,17);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(17,18);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(17,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(17,20);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(17,21);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(17,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 7:
		gotoxy(17,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(17,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,19);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(17,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,22);
		printf("%c%c%c%c%c",32,32,32,32,32);
		break;


		case 8:
		gotoxy(17,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(17,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(17,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(17,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(17,20);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(17,21);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(17,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 9:
		gotoxy(17,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(17,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(17,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(17,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(17,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(17,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;
	   }

	  }



	  void display_min_a(int m)
	 {
	   switch(m)
	  {

		case 0:
		gotoxy(26,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(26,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(26,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(26,19);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(26,20);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(26,21);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(26,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 1:
		gotoxy(26,16);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(26,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,19);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(26,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,22);
		printf("%c%c%c%c%c",32,32,32,32,32);
		break;


		case 2:
		gotoxy(26,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(26,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(26,20);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(26,21);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(26,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;



		case 3:
		gotoxy(26,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(26,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(26,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,22);
		printf("%c%c%c%c%c",32,219,219,219,32);

		break;


		case 4:
		gotoxy(26,16);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(26,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(26,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(26,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(26,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,22);
		printf("%c%c%c%c%c",32,32,32,32,32);
		break;


		case 5:
		gotoxy(26,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(26,17);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(26,18);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(26,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(26,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 6:
		gotoxy(26,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(26,17);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(26,18);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(26,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(26,20);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(26,21);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(26,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 7:
		gotoxy(26,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(26,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,19);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(26,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,22);
		printf("%c%c%c%c%c",32,32,32,32,32);
		break;


		case 8:
		gotoxy(26,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(26,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(26,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(26,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(26,20);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(26,21);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(26,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 9:
		gotoxy(26,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(26,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(26,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(26,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(26,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(26,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;
	   }

	  }


	  void display_min_b(int m)
	 {
	   switch(m)
	  {

		case 0:
		gotoxy(32,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(32,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(32,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(32,19);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(32,20);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(32,21);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(32,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 1:
		gotoxy(32,16);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(32,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,19);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(32,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,22);
		printf("%c%c%c%c%c",32,32,32,32,32);
		break;


		case 2:
		gotoxy(32,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(32,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(32,20);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(32,21);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(32,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;



		case 3:
		gotoxy(32,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(32,32);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(32,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,22);
		printf("%c%c%c%c%c",32,219,219,219,32);

		break;


		case 4:
		gotoxy(32,16);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(32,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(32,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(32,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(32,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,22);
		printf("%c%c%c%c%c",32,32,32,32,32);
		break;


		case 5:
		gotoxy(32,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(32,17);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(32,18);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(32,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(32,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 6:
		gotoxy(32,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(32,17);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(32,18);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(32,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(32,20);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(32,21);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(32,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 7:
		gotoxy(32,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(32,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,19);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(32,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,22);
		printf("%c%c%c%c%c",32,32,32,32,32);
		break;


		case 8:
		gotoxy(32,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(32,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(32,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(32,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(32,20);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(32,21);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(32,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 9:
		gotoxy(32,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(32,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(32,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(32,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(32,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(32,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;
	   }


	  }


	  void display_sec_a(int m)
	 {

	   switch(m)
	  {

		case 0:
		gotoxy(41,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(41,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(41,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(41,19);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(41,20);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(41,21);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(41,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 1:
		gotoxy(41,16);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(41,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,19);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(41,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,22);
		printf("%c%c%c%c%c",32,32,32,32,32);
		break;


		case 2:
		gotoxy(41,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(41,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(41,20);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(41,21);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(41,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;



		case 3:
		gotoxy(41,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(41,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(41,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,22);
		printf("%c%c%c%c%c",32,219,219,219,32);

		break;


		case 4:
		gotoxy(41,16);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(41,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(41,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(41,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(41,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,22);
		printf("%c%c%c%c%c",32,32,32,32,32);
		break;


		case 5:
		gotoxy(41,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(41,17);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(41,18);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(41,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(41,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 6:
		gotoxy(41,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(41,17);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(41,18);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(41,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(41,20);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(41,21);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(41,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 7:
		gotoxy(41,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(41,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,19);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(41,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,22);
		printf("%c%c%c%c%c",32,32,32,32,32);
		break;


		case 8:
		gotoxy(41,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(41,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(41,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(41,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(41,20);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(41,21);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(41,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 9:
		gotoxy(41,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(41,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(41,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(41,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(41,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(41,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;
	   }

	  }


	  void display_sec_b(int m)
	 {

	 switch(m)
	  {

		case 0:
		gotoxy(48,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(48,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(48,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(48,19);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(48,20);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(48,21);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(48,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 1:
		gotoxy(48,16);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(48,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,19);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(48,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,22);
		printf("%c%c%c%c%c",32,32,32,32,32);
		break;


		case 2:
		gotoxy(48,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(48,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(48,20);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(48,21);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(48,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;



		case 3:
		gotoxy(48,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(48,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(48,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,22);
		printf("%c%c%c%c%c",32,219,219,219,32);

		break;


		case 4:
		gotoxy(48,16);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(48,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(48,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(48,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(48,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,22);
		printf("%c%c%c%c%c",32,32,32,32,32);
		break;


		case 5:
		gotoxy(48,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(48,17);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(48,18);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(48,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(48,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 6:
		gotoxy(48,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(48,17);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(48,18);
		printf("%c%c%c%c%c",219,32,32,32,32);
		gotoxy(48,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(48,20);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(48,21);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(48,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 7:
		gotoxy(48,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(48,17);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,18);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,19);
		printf("%c%c%c%c%c",32,32,32,32,32);
		gotoxy(48,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,22);
		printf("%c%c%c%c%c",32,32,32,32,32);
		break;


		case 8:
		gotoxy(48,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(48,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(48,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(48,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(48,20);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(48,21);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(48,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;


		case 9:
		gotoxy(48,16);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(48,17);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(48,18);
		printf("%c%c%c%c%c",219,32,32,32,219);
		gotoxy(48,19);
		printf("%c%c%c%c%c",32,219,219,219,32);
		gotoxy(48,20);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,21);
		printf("%c%c%c%c%c",32,32,32,32,219);
		gotoxy(48,22);
		printf("%c%c%c%c%c",32,219,219,219,32);
		break;
	   }


	  }