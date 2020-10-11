#include<stdio.h>
#include<conio.h>

struct student
     {
      int rollno;
      char name[10];
      char classs[10];
      char sec[5];
      int fees;
      char grade[5];
     };
void main()
     {
      struct student data;
      clrscr();
      printf("Enter u'r data\n");
      printf("Enter u'r rollno:");
      scanf("%d",&data.rollno);
      printf("Enter the fees:");
      scanf("%d",&data.fees);
      printf("Enter u'r name");
      scanf("%s",data.name);
      printf("Enetr u'r class:");
      scanf("%s",data.classs);
      printf("Enter u'r sec:");
      scanf("%s",data.sec);
      printf("ENter the grade:");
      scanf("%s",data.grade);
      printf("\n\tTHE DETAILS OF THE STUDENT ARE\n");
      printf("%d\n%d\n",data.rollno,data.fees);
      printf("%s\n%s\n%s\n%s",data.name,data.classs,data.sec,data.grade);
      getch();
     }