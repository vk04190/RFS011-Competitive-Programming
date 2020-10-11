//** SORTING OF STRINGS USING POINTERS **//
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>
main()
{
char *p[10],*temp;
int n,i,j;
static char a[10][10];
temp=(char *)malloc(10*10);
p[10]=(char *)malloc(10*10);
printf("\n enter no: of strings \n");
scanf("%d",&n);
for(i=0;i<n;i++)
	printf("\n enter string no: %d \n",i+1);
	scanf("%s",a[i]);
	p[i]=a[i];
	}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
	if(*p[i]>*p[j])
	{
	temp=p[i];
	p[i]=p[j];
	p[j]=temp;
	}
}
}
printf("\n sorted strings are: \n";
for(i=0;i<n;i++)
printf("%s \n",p[i]);
return;
}