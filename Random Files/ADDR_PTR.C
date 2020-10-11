#include<stdio.h>
#include<conio.h>
void main()
    {
     int *j;
     int a[5]={1,2,3,4,5};
     int i=0;
     clrscr();
     j=&a[0];
     while(i<5)
	 {
	  printf("element=%d\t",*j);
	  printf("address=%u\n",j);
	  i++;
	  j++;
	 }
    getch();
    }
