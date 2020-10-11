/* program 6-18.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  float height = 2500.35;
  double depth = 3.12e5;

  clrscr();
  printf("%%f		height 	is %f\n", 	height);
  printf("%%.2f		height 	is %.2f\n", 	height);
  printf("%%9.2f	height 	is %9.2f\n", 	height);
  printf("%%-9.2f	height 	is %-9.2f\n", 	height);
  printf("%%09.2f	height 	is %09.2f\n", 	height);
  printf("%%14.0f	height 	is %14.0f\n", 	height);
  printf("%%-14.0f	height 	is %-14.0f\n", 	height);
  printf("%%#14.0f	height 	is %#14.0f\n", 	height);
  printf("%%e		height 	is %e\n", 	height);
  printf("%%.3e		height 	is %.3e\n", 	height);
  printf("%%f		depth	is %f\n", 	depth);
  printf("%%E		depth	is %E\n", 	depth);

  getch();
}