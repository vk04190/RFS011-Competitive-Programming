#include<stdio.h>
#include<conio.h>
	void main()
	{
		int j,num,base,a[10],r,i=0;
		clrscr();
		printf("ENTER UR NUM &REQUIRED BASE\n");
		scanf("%d %d",&num,&base);
		i-0;
		while(num!=0)
	 {
		r=num%base;
		a[i]=r;
		num=num/base;
		i++;
	 }
	 i--;
	 for(j=i;j>=0;j--)
	 {
			if(a[j]<=9)
		printf("%d",a[j]);
			else if(a[j]==10)
		printf("A");
			else if(a[j]==11)
		printf("B");
			else if(a[j]==12)
		printf("C");
			else if(a[j]==13)
		printf("D");
			else if(a[j]==14)
		printf("E");
			else if(a[j]==15)
		printf("F");
			else if(a[j]==16)
		printf("G");
	 }
			 getch();
 }