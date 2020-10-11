/*PROGRAM TO ACCESS THE ADDRESS OF VARIABLES	@	PRASAD.G.V.L
																								02211A0540
																								CSE*/

#include<stdio.h>
#include<conio.h>
	void main()
	{
		int x,*xx;
		float f,*ff;
		char c,*cc;
		clrscr();
		xx=&x;
		ff=&f;cc=&c;
		printf("enter the value of x,f,c\n");
		scanf("%d %f %c",&x,&f,&c);
		printf("the int value iz %d& its address iz %u\n",x,xx);
		printf("the float value iz %f & its address iz %u\n",f,ff);
		printf("the char value iz %c & its address is %u \n",c,cc);
		getch();
	}