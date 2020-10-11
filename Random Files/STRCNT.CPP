# include <conio.h>
# include <stdio.h>

void main(void)
{
	int scount(char *a);
	char name[50];
	int result;

	clrscr();

	printf("Enter your name :");
	gets(name);
	result=scount(name);
	printf("The length is %d",result);

	getch();

}

int scount(char *a)
{
	int b=0;

	while(a[b]!=0)
	{
		b++;

		if(b>100)
		break;
	}
	return(b);

}