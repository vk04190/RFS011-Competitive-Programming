#include<stdio.h>
void hello2();
void hello3();
char* display();
char str[80];
char *str1=str;
char str2[80];
char s;
static int space;

char hello()
{
   static int len=0;
   while(*(str+len)!='\0')
   {
		s=*(str+len);
		len++;
		break;
   }
   return s;
}

void hello2()
{
	int i,x,y,j;
	for(x=1;x<=strlen(str);x++)
	{
		i=0;
		s=hello();
		display();

		for(y=1;y<26;y++,i++)
		{
			clrscr();
			for(x=0;x<space;x++)
			  printf(" ");

			puts(str1);
			gotoxy(x,y+i);
			printf("%c",s);
			hello3();
			delay(50);
		 }

	}
}

void hello3()
{
   strcpy(str2,s);
   gotoxy(25,0);
   puts(str2);
   str2++;
 //  *str2='\0' ;
   return ;
}

char* display()
{
  while(*str1!='\0')
   {
	if(s==' ')
	{
	  hello();
	  space++;
	  str1++;
	}
	else if(s=='\t')
	{
	  hello();
	  space=space+8;
	  str1++;
	}
	str1++;
	space++;
	break;
   }
   return ;
}

main()
{
	clrscr();
	str2="";
	printf("Enter a string\n");
	fflush(stdin);
	scanf("%[^\n]",str);
	hello2();
	getch();
	return 0;
}

