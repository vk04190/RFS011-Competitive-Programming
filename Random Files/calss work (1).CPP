/* Practical 2: Writing a Program that reads and prints the data using
escape sequence (asking the name, age, height and gender of student using
scanf and printf statement). */

#include<conio.h>
#include<stdio.h>

void main(void)
{
  char gender, name[25];
  int age;
  float height;

  clrscr();
  printf("\nEnter Your Gender(M/F): ");
  scanf("%c", &gender);
  printf("\nEnter Your Name: ");
  scanf("%s", name);
  printf("\nEnter Your Age (in years): ");
  scanf("%d", &age);
  printf("\nEnter Your Height (in ft.): ");
  scanf("%f", &height);

  clrscr();
  printf("\n\tName:         %s", name);
  printf("\n\tAge:          %d", age);
  printf("\n\tHeight:       %0.2f", height);
  printf("\n\tGender:       %c", gender);

  getch();
}
