   /*	program to creat a hidden file @ 	prasad g.v.l
											02211a0540
											cse*/

#include<stdio.h>
#include<conio.h>
#include"large.h"
	void main()
	{
		int a[10],i,n;
		void sort(int *,int);
		clrscr();
		printf("enter n values\n");
		scanf("%d",&n);
		printf("enter ur elements now:");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		sort(a,n);
		printf("here ur result\n");
		getch();
   }
