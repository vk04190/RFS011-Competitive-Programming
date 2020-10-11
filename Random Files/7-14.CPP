/* program 7-14.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  float percent;

  printf("Input percentage of marks: ");
  scanf("%f", &percent);

  if(percent >= 80)
     printf("Your grade is A-1\n");
  else if (percent >= 70)
     printf("Your grade is A\n");
  else if (percent >= 60)
     printf("Your grade is B\n");
  else if (percent >= 50)
     printf("Your grade is C\n");
  else if (percent >= 40)
     printf("Your grade is D\n");
  else if (percent >= 33)
     printf("Your grade is E\n");
  else
     printf("Your grade is F\n");

  getch();
}
