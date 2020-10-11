
#include<stdio.h>
void hello2();
char* display();
char str[80];
char *str1=str;
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
	getch();
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
			delay(100);
		 }

	 }
}

char* display()
{
  while(*str1!='\0')
   {
	str1++;
	space++;
	break;
   }
   return ;
}

main()
{

	clrscr();
	printf("Enter a string");
	fflush(stdin);
	scanf("%[^\n]",str);
	hello2();
	getch();
	return 0;
}

