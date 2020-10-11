# include <conio.h>
# include <stdio.h>

void main(void)
{
	char name[50];
	int r;

	clrscr();

	printf("Enter your name :");
	gets(name);

	for(r=0;r<10;r++)
	{
		printf("\n%d",name[r]);
	}

	getch();

}
