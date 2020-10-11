		/*TO CHECK WHETHER PALLINDROME OR NOT*/

						    /*Sandeep*/
						    /*02211A0560*/

	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int n,sum=0,t,temp;
	clrscr();
	printf("Enter any no.");
	scanf("%d",&n);
	temp=n;
	while(n>0)
		{
		t=n%10;
		sum=sum*10+t;
		n=n/10;
		}
	printf("%d\t",sum);
	if(sum==temp)
	printf("The no. is pallindrome");
	else
	printf("The no. is not a pallindrome");
	getch();
	}