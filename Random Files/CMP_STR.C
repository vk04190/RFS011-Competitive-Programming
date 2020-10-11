	/*TO CHECK WHETHER TWO STRINGS ARE EQUAL OR NOT*/
						/*A.SANDEEP*/
						/*02211A0560*/
						/*C.S.E.*/
  #include<stdio.h>
  #include<conio.h>
  #include<string.h>
   void main()
   {
    char name1[10];
    char name2[10];
    clrscr();
    textcolor(GREEN);
    cprintf("Enter name1:");
    gets(name1);
    cprintf("\nEnter name2:");
    gets(name2);
    textcolor(YELLOW);
    if(strcmp(name1,name2)==0)
	cprintf("\n\tTWO STRINGS ARE EQUAL");
    else
	cprintf("\n\tTHE TWO STRINGS ARE NOT EQUAL");
    getch();
   }


