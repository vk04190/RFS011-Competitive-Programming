	/*PROGRAM TO COUNT VOWELS & CHARACTERS IN A FILE
													naresh.g
													01211a0529
													cse*/
#include<stdio.h>
#include<conio.h>
	void main()
	{
		char c;FILE *f;
		int aa=0,ee=0,ii=0,oo=0,uu=0;
		int nl=0,bs=0,ts=0,al=0,sp=0;
		clrscr();
		  f=fopen("raju.dat","w");
		  while((c=getchar())!=EOF)
			putc(c,f);
			fclose(f);
			f=fopen("raju.dat","r");
			if(f==NULL)
	{
		printf("file error\n");
		exit();
	}
	else
	{
		while((c=getc(f))!=EOF)
		{
				if(c=='a'||c=='A')aa++;
			else if(c=='e'||c=='E')ee++;
			else if(c=='i'||c=='I')ii++;
			 else if(c=='o'||c=='O')oo++;
			 else if(c=='u'||c=='U')uu++;
		}
		fclose(f);
	}
	printf("num of A~s=%d,E~s=%d,I~s=%d,O~s=%d,U~s=%d\n",
										aa,ee,ii,oo,uu);
		f=fopen("raju.dat","r");
		if(f==NULL)
		{
		printf("file error\n");
			exit();
		}
		else
		{
			while((c=getc(f))!=EOF)
			{
				if(c=='\n')nl++;
				else if(c==' ')bs++;
			   //	else if(c=='	 ')ts++;
				else if(c>'a'&& c>'z'||c>'A'&& c>'Z')al++;
				else
					  sp++;
			 }
		}

		printf("num of newlines=%d,blanks=%d,tabs=%d,alpha~s=%d,sp.char=%d",
											nl,bs,ts,al,sp);
					   getch();
	}




