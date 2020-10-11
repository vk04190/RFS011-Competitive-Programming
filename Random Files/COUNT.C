#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
   {
    char *t[20];
    int nov=0,noc=0,nos=0,i=1;
    printf("Enter the text:\n");
    gets(t);
    while(*t!='\0')
	 {
	   if(*t=='a'||*t=='e'||*t=='i'||*t=='o'||*t=='u')
	   nov++;
	   else
	   if((*t>='a'&&*t<='z')||(*t>='A'&&*t<='Z'))
	   noc++;
	   else
	   nos++;
	 }
    printf("No. of vowels=%d\n",nov);
    printf("No. of consonants=%d\n",noc);
    printf("No. of special characters=%d\n",nos);
    getch();
   }