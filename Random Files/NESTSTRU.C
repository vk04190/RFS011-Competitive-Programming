/*PROGRAM TO SURVEY STUDENTS' DETAILS
					PRASAD G.V.L
					02211A0540
					CSE*/


#include<conio.h>
#include<stdio.h>
struct student
{
	char name[20];
	int marks;
	struct date
	{
		int day;
		int month;
		int year;
	}dob;
	char ad[25];
};
void main()
{
	int i,no;
	struct student inf[10];
	clrscr();
	printf("Enter the no. of students:");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
	printf("Enter %d student's details:\n",i+1);
	printf("--------------------------\n");
	printf("Name:");
	scanf("%s",inf[i].name);
	printf("Marks:");
	scanf("%d",&inf[i].marks);
	printf("Date of birth:");
	scanf("%d\t%d\t%d",&inf[i].dob.day,&inf[i].dob.month,&inf[i].dob.year);
	printf("Address:");
	scanf("%s",inf[i].ad);
	clrscr();
	}
	for(i=0;i<no;i++)
	{
	printf("%d student's details:\n",i+1);
	printf("--------------------\n");
	printf("Name:");
	printf("%s",inf[i].name);
	printf("\nMarks:");
	printf("%d",inf[i].marks);
	printf("\nDate of birth:");
	printf("%d-%d-%d",inf[i].dob.day,inf[i].dob.month,inf[i].dob.year);
	printf("\nAddress:");
	printf("%s",inf[i].ad);
	getch();
	clrscr();
	}
}