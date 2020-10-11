#include <stdio.h>
#include <conio.h>

int bsearch(int l, int r, int e);
int arr[10]={11,22,33,44,55,66,77,88,99,100};
void main(void)
{
	int inp;
	clrscr();
	printf("Enter a number to search: ");
	scanf("%d",&inp);
	printf("The result is : %d",bsearch(0,10,inp));
	getch();

}

int bsearch(int l, int r, int e)
{
	if(l<r)
	{
		int m=(l+r)/2;

		if(arr[m]==e)
			return m;
		else if(arr[m]>e)
			return bsearch(l,m-1,e);
		else
			return bsearch(m+1,r,e);
	}
	else
		return -1;
}