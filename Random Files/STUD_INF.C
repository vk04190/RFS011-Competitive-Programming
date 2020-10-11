#include<stdio.h>
#include<conio.h>
struct student
{
 char sname[20];
 int marks;
 struct data
    {
     int day;
     int month;
     int year;
    }dob;
 char addr[25];
};
 void main()
 {
 int n,i;
  struct student stud_info;
  printf("Enter how many student details u want to enter:");
  scanf("%d",&n);
  printf("Enter student details:\n");
   for(i=1;i<n;i++)
   {
   printf("ENter the student name:");
  scanf("%s",stud_info.sname);
  printf("ENter the marks:");
  scanf("%d",&stud_info.marks);
  printf("Enter the day:");
  scanf("%d",&stud_info.dob.day);
  printf("Enter the month:");
  scanf("%d",&stud_info.dob.month);
  printf("Enter the year:");
  scanf("%d",&stud_info.dob.year);
  printf("Enter the address:");
  scanf("%s",stud_info.addr);
  printf("\n\n");
 }
  clrscr();
    printf("THE DETAILS OF THE STUDENT ARE:\n");
  for(i=1;i<n;i++)
  {
  printf("%s\n%d\n%d\n",stud_info.sname,stud_info.marks,stud_info.dob.day);
  printf("%d\n%d\n%s",stud_info.dob.month,stud_info.dob.year,stud_info.addr);
  getch();
  }

  }










