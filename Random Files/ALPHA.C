	 /*PROGRAM TO ARRANGE NAMES AND PHONE NUM~S	 												NAME:TEJO CHANDRA										      ROLL NO:02211A0540
								BRANCH:CSIT*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct alpha
{
	char name[20];
	int ph;
};
	void main()
	{
	struct alpha a[10];
	char temp[20];
	int i,j,tempph,n;
	clrscr();
	printf("enter how much UR choice\n");
	scanf("%d",&n);
	printf("ENTER UR SURVEY~S NAMES\n");
	printf("______________\n");
	for(i=0;i<n;i++)
	{
	printf("enter ur %d name,no",i+1);
	scanf("%s  %d",a[i].name,&a[i].ph);
	}
	for(j=0;j<n;j++)
	{
	for(i=0;i<n-1;i++)

	{
	 if(strcmp(a[i].name,a[i+1].name)>0)
		 {
		 strcpy(temp,a[i].name);
		 strcpy(a[i].name,a[i+1].name);
		 strcpy(a[i+1].name,temp);
		 tempph=a[i].ph;
		 a[i].ph=a[i+1].ph;
		 a[i+1].ph=tempph;
		 }
	 }
 }
 printf("YOUR ALPHA BETICAL ORDER\n");
 printf("__________________________\n");

	 for(i=0;i<n;i++)
	 printf("%s   %d\n",a[i].name,a[i].ph);
		getch();
 }
