#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int *p,i;
	p=(int *)malloc(10*sizeof(int));
  printf(" enter 10 num\n");
  for(i=0;i<10;i++)
  scanf("%d",(p+i));
  for(i=0;i<10;i++)
  printf("%d\t",*(p+i));
  getch();
}