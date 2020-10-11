#include<stdio.h>
#include<conio.h>
#define NUM 80

char english[NUM],piglatin[NUM];
int count=0,words=1;

void initialize();
int noofwords();
void display();
void piggie();
void displaypiggie();

int main()
   {
		clrscr();
		initialize();
//   display();
//   words=noofwords();
//   printf("\n\n%d",words);
		piggie();
		displaypiggie();
		getch();
		return 0;
  }

void initialize()
	{
		  printf("Enter a sentence in english");
		  scanf(" %[^\n]",english);
	}

int noofwords()
   {
		for(count=0;count<NUM || english[count]!='\0';count++)
		   {
				if(english[count]==' ')
				  words++;
		   }
		return words;
   }

void display()
	{
		 puts(english);
	}

void piggie()
	{
		int c,i;
		static int sum=0,wordcount=0;
		char temp,m[NUM];
		static int cnt=0,cnt1=0;
	   //	printf("\n%d",count);
		words=noofwords();
		printf("\nNo. of words: %d",words);
		while(english[cnt]!='.')
			 {
				c=0;
				m[NUM]="\0";
				temp=english[cnt1];
				if(english[cnt1]!=' '||english[cnt1]=='.')
					 {
						 m[c++]=english[++cnt1];
//						 printf("\n%c",m[c]);
					 }

				cnt1++;
				m[c]=temp;
				m[++c]='a';
				m[++c]=' ';
				printf("\n%s",m);
				printf("\n\n%d",c);
				for(i=0;i<c;i++)
				   {
					  sum=sum+i;
					  piglatin[sum]=m[i];
				   }
//			 puts(m);
//			 printf("\n");
//			 puts(piglatin);
//			 printf("\n");*/
			 cnt++;
		  }
	   }


	  void  displaypiggie()
	   {
//		 puts(piglatin);
	   }