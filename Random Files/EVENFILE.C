	/*PROGRAM TO SEPERATE EVEN 7 ODD NUM~S IN FILE @
													 PRASAD.G.V.L
													 02211A0540
														CSE*/

#include<stdio.h>
#include<conio.h>
	void main()
	{
		FILE *f,*fe,*fo;int x,i;
		clrscr();
		f=fopen("data.dat","w");
		printf("enter 10 nums:\n");
		for(i=0;i<10;i++)
		{
			scanf("%d",&x);
			putw(x,f);
		}
			fclose(f);
			fe=fopen("even.dat","w");
			fo=fopen("odd.dat","w");
			f=fopen("data.dat","r");
			while((x=getw(f))!=EOF)
			{
				if(x%2==0)
				putw(x,fe);
				else
				putw(x,fo);
			}
			fclose(f);fclose(fe);fclose(fo);
			   fe=fopen("even.dat","r");
			   fo=fopen("odd.dat","r");
			   if(fe==NULL&&fo==NULL)
			   {
			   printf("file error\n");
				exit(1);
			   }
				else
				{
					printf("contents of even file\n");
					while((x=getw(fe))!=EOF)
					printf("%d\t",x);
					printf("\ncontents of odd file\n");
					while((x=getw(fo))!=EOF)
					printf("%d\t",x);
			   }
			fclose(f);fclose(fe);fclose(fo);
			getch();
	}


