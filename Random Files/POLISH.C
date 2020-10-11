#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

  char s[10],p[10];
  char q[10]; int i,j=0,k=0;
	void main()
	{
		int n,l;
		char x;
		int pol(char);
		clrscr();
		printf("enter ur expression:(INFIX)\n");
		gets(q);
		l=strlen(q);
		s[j++]='(';
	   for(i=0;i<l+1;i++)
	   {
			if((q[i]>='a'&&q[i]<'z')||(q[i]>='A'&&q[i]<'Z'))      /*operand*/
			   p[k++]=q[i];
		   if(q[i]=='(')
			   s[j++]=')';

			if((q[i]=='-')||(q[i]=='+')||(q[i]=='*')||(q[i]=='/')) /*operator*/
			{
			  n=j-1;

				if((s[n]=='-')||(s[n]=='+')||(s[n]=='*')||(s[n] =='/'))
				{
					if((pol(q[i])<=pol(s[n]))&&(i>=2))
					{
						p[k++]=s[n];
						s[n]=q[i];
					}
			   }
		   else
			 s[j++]=q[i];
		}
			   if(q[i]==')')
		   {
			  j--;
			 do
		   {
			p[k++]=s[j];
			j--;
			break;
		   }
		 while(s[j]!='(');
		 x=s[j];
	  }
	}
	 p[k]='\0';
	 printf("the postfix expession :\n");
	 puts(p);
	 getch();
  }
		 int pol(char x)
	  {
		if((x=='-')||('+'))
		return(1);
		if((x=='/')||(x=='*'))
		return(2);
	  }



