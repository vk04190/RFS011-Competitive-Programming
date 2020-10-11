#include <conio.h>
#include <stdio.h>
#include <string.h>

char s[]="a searching example";
char p[]="";
int bforce(int m,int n);

void main(void)
{
	int m,n,x;
	clrscr();

	printf("Enter a string to search: ");
	gets(p);
	n=strlen(s);
	m=strlen(p);
	x=bforce(m,n);
	printf("%d",x);

	getch();
}

int bforce(int m,int n)
{
	int i,j;

	i=j=0;

	while((i<n)&&(j<m))
	{
		if(s[i]==p[j])
		{
			j++;i++;
		}
		else
		{
			i=i-j+1;j=0;
		}

	}
			if(j==m)
				return i-j;
			else
				return -1;
}