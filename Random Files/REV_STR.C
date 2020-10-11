			/*TO REVERSE A GIVEN STRING*/
						/*A.SANDEEP*/
						/*02211A0560*/
						/*C.S.E.*/
  #include<stdio.h>
  #include<conio.h>
  #include<string.h>
   void main()
    {
    char word[100];
    clrscr();
    printf("Enter a word or sentence:");
    gets(word);
    strrev(word);
    textcolor(YELLOW+BLINK);
    cprintf("\n%s",word);
    getch();
    }
