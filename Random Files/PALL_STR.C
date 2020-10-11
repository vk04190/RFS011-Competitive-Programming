      /*TO CHECK WHETHER THE GIVEN STRING IS PALLINDROME OR NOT*/
						  /*A.SANDEEP*/
						  /*02211A0560*/
						  /*C.S.E.*/

  #include<stdio.h>
  #include<string.h>
   void main()
    {
    char name1[10];
    char name2[10];
    clrscr();
    printf("Enter the string:\n");
    gets(name1);
    strcpy(name2,name1);
    strrev(name2);
    if(strcmp(name1,name2)==0)
       printf("It is a pallindrome");
    else
       printf("Not a pallindrome");
    getch();
    }