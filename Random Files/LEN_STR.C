	#include<stdio.h>
	#include<conio.h>
	#include<string.h>
void main()
 {
	int a=1,i=0;
	char sent[80];
	clrscr();
	puts("Enter a sentence:");
	gets(sent);
	for(i=0;sent[i];i++)
	{
	if(sent[i]==' ')
				{
				 a++;
				}
	}
	printf("the number of words in the given sentence is %d",a );
	getch();
	}
