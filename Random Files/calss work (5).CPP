/* Practical 5(b): Writing a program which uses 'while' loop and nested
while loop, (use 'for' loop and continue the process in 'while' loop
satisfying this condition).

Write a program to calculate average marks of a student using for and
nested while loop. */

#include<stdio.h>
#include<conio.h>

void main(void)
{
  clrscr();
  int n, count;
  float marks, average, sum = 0;

// initialise and read in a value for n
  printf("How many Subjects? ");
  scanf("%d", &n);
  printf("\n");

// read marks
  for(count =1; count <= n; count++)
      {
	printf("Marks in Subject %d = ", count);
	scanf("%f", &marks);
	while(marks < 0 || marks > 100)
	    {
	      printf("Invalid marks, try again: ");
	      scanf("%f", &marks);
	    }
	sum += marks;
      }

// calculate the average and print the answer
  average = sum/n;
  printf("\nThe average marks are = %f", average);

  getch();
}
