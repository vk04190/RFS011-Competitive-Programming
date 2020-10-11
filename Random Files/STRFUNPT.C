/*PROGRAM TO APPLY ALL STRING FUN~S USING POINTERS@ PRASAD.G.V.L
													02211A0540
													CSE*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char st1[20],st2[20],st3[40];
	int n,a;
   int stlen(char *r);
   int stcomp(char *p,char *q);
   void stcpy(char *p,char *q);
   void stcat(char *p,char *q,char *r);
   clrscr();
   printf("enter ur text1\n");
   gets(st1);
   printf("enter ur tewxt2\n");
   gets(st2);
   printf("before copying:your \n string1:%s\n string2:%s\n",
												st1,st2);
	  stcpy( st2,st1);
   printf(" after copying:\n string2:%s\n",st2);
	printf(" now comparing ur modified str1,str2:\n");
	n=stcomp(st2,st1);
	if(n==0)
	printf("equal strings\n");
	else
	printf("not equal strings\n");
	  stcat(st1,st2,st3);
   a= stlen(st3);
	 printf("finally length after appending:%d",a);
   getch();
   }
	int	stlen(char *r)
	{
		int l=0;
		while(*r!='\0')
		{
			++l;
			++r;
		}
		return(l);
  }
	int stcomp(char *p,char *q)
	{
	   while(*p!='\0'&&*q!='\0')
	   {
			if(*p==*q)
			return(0);
			else
			return(*p-*q);
			p++;
			q++;
	  }
   }
		void stcpy(char *p,char *q)
		{
			 while(*p!='\0')
			 {
				*p=*q;
				p++;q++;
			 }
			 *p='\0';
	   }
		void stcat(char *p,char *q,char *r)
		{
			int i;
			for(i=0;i<20;i++)
			   *(r+i)=*(p+i);
			for(i=20;i<40;i++)
				*(r+i)=*(q+i);
			printf("UR final string:");
			for(i=0;i<40;i++,r++)
			printf("%c",*r);
		}
