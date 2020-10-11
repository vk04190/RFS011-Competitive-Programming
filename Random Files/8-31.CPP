/* program 8-31.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int i, j, num;

  printf("Enter the number: ");
  scanf("%d", &num);
  for(i = 2; i <= num; i++)
     {
       for(j = 2; j < i; j++)
	  {
	   if(i%j==0)
	   break;
	  }
      if(i==j)
      printf("%d\t", i);
     }

  getch();
}
