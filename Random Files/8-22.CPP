/* program 8-22.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int n, count = 1;
  float x, average, sum = 0;

// initialise and read in a value for n
  printf("How many numbers? ");
  scanf("%d", &n);

// read in the numbers
  do
    {
      printf("X = ");
      scanf("%f", &x);
      sum += x;
      ++count;
    }
  while(count <= n);

// calculate the average and print the answer
  average = sum/n;
  printf("\nThe average is %f", average);

  getch();
  }

