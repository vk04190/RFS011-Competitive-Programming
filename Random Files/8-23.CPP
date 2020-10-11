/* program 8-23.cpp */
#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int n, count;
  float x, average, sum;
  char repeat;

// initialise and read in a value for n
  do
  {
   printf("How many numbers? ");
   scanf("%d", &n);
   sum = 0;
   count = 1;

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
   printf("\n\nDo you wish to continue y/n: ");
   repeat = getche();
   printf("\n\n");
  }
  while(repeat == 'y' || repeat == 'Y');
}

