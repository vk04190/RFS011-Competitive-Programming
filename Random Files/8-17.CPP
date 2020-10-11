/* program 8-17.cpp */
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
  while(count <= n)
    {
      printf("X = ");
      scanf("%f", &x);
      sum += x;
      ++count;
    }

// calculate the average and print the answer
  average = sum/n;
  printf("\nThe average is %f", average);

  getch();
  }

