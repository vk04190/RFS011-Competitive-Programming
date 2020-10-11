/*PROGRAM TO CALCULATE NUM OF EVEN &ODD  @  PRASAD.G.V.L
																						02211A0540*
																						CSE*/
#include<stdio.h>
#include<conio.h>
void main(){
int i,n,sum1=0,sum2 =0,j=0,k=0,a;
  clrscr();
  printf("enter the range\n");
  scanf("%d",&n);
	for(i=1;i<=n;i++)
{
		a=i%2;
	if(a==0)
	{
		j++;
		sum1=sum1+i;
	}
 else
 {
		k++;
		sum2=sum2+i;
	}
}
	printf("numof even numbersis %d\n and sum  is %d\n",j,sum1);
	printf("num of odd num is %d\n,sum is %d\n",k,sum2);
			 getch();
	}