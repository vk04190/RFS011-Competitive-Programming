/*		LARGEST&SMALLEST OF ARRAY @ 				PRASAD.G.V.L:
																					02211A0540		*/

#include<stdio.h>
#include<conio.h>
void main(){
int a[10];
int i,large,small;
clrscr();
///printf("enter the num\n");
//scanf("%d",&n);
for(i=0;i<10;i++)
{
	 printf("enter a[%d]value\n",i);
	 scanf("%d",&a[i]);
}
	 large=a[0];
	 small=a[0];

	 for(i=1;i<10;i++)
	 {
			if(a[i]<small)
					small=a[i];
			if(a[i]>large)
					large=a[i];
	 }
	 printf("large=%d,small=%d",large,small);
	 getch();
	 }
