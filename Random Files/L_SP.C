	/*PROGRAM TO FIND SMALLEST&LARGEST OF ARRAY USING PTRS
													PRASAD.G.V.L
													02211A0540 CSE*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,*p,n,lar,sml;
	void l_s(int *,int,int *,int *);
	clrscr();
	printf("enter UR range\n");
	scanf("%d",&n);
	printf("ENTER UR ELEMENTS NOW\n");
	for(i=0;i<=n;i++)
	scanf("%d",&a[i]);
	l_s(a,n,&lar,&sml);
	printf("large=%d,small=%d",lar,sml);
	getch();
 }
	void l_s(int *p,int c,int *l,int *s)
	{
		int i;
		*l=*p;
		*s=*p;
		for(i=1;i<c;i++)
		{
			if(*p>*l)
			*l=*p;
			if(*p<*s)
			*s=*p;
			p++;
		 }
	}