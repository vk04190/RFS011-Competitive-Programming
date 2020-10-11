#include <stdio.h>
#include <conio.h>

int tower(int n, int A, int B, int C);
int count=0;
void main(void)
{
	int p;
	clrscr();

	printf("\nResult: %d\nCount: %d",tower(3,1,2,3),count);
	getch();

}

int tower(int n, int A, int B, int C)
{
	count++;
	if(n==1)
		printf("Moving Disk 1 from %d to %d",A,C);
	else
	{
		return tower(n-1,A,C,B);
		printf("Moving Disk %d from %d to %d",n,A,C);
		return tower(n-1,B,A,C);
	}
}