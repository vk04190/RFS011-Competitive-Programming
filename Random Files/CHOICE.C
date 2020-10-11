		/*PROGRAM TO REQUEST THE USER 	@	PRASAD G.V.L.
										   02211A0540
										   CSE*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	FILE *f;
	int k;char st[20],c;
	float pf,hra,da,net;
	clrscr();
	printf("EXCUSE ME! MAY I HELP U\n");
  //	f=fopen("employ.dat","w");
	printf("R U interested in filling up:(y/n)\n");
	c=getch();
	while(c=='y')
	{
	  //	if(c=='y')
		f=fopen("employ.dat","w");
	{
		printf("enter ur id data\n");
		printf("enter employee name\n");
		gets(st);
		printf("enter salary:\n");
		scanf("%d",&k);
		fprintf(f,"%s  %d ",st,k);
	 }
		fclose(f);
		f=fopen("employ.dat","r");
		if(f==NULL)
			{
				printf("file error\n");
				exit(1);
			}
		else
		{
			while(fscanf(f,"%s  %d",st,&k)>0)
			{
				pf=k*(.1);
				da=k*(.55);hra=k*(.15);
				net=pf+da+hra+k;
			}
			printf("name:%s\n salary:%d\n netsalary:%f\n",st,k,net);
			printf("DO U WANT TO CONTINUE:(y/n)");
			fflush(stdin);
			c=getch();
		}
}
	if(c=='n')
	  printf("\nTHANK U\n");
			getch();
   }