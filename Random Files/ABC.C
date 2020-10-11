                     /*PROGRAM TO SURVEY EMPLOYEES' DETAILS
									    NAME:G.TEJO CHANDRA
									    ROLL NO:02211A1250
									    BRANCH:CSIT*/

#include<stdio.h>
#include<conio.h>

struct detail
{
	int emp_no;
	int salary;
	char name[20];
	char dept[20];
	char design[15];
};

void main()
{
	int i,no;
	struct detail survey[10];
	clrscr();
	printf("Please enter the no. of employees:");
	scanf("%d",&no);
	for(i=0;i<no;i++)
		{
			printf("Enter %d employee's details:\n",i+1);
			printf("Name:");
			scanf("%s",survey[i].name);
			printf("Employee no.:");
			scanf("%d",&survey[i].emp_no);
			printf("Departmaent:");
			scanf("%s",survey[i].dept);
			printf("Designation:");
			scanf("%s",survey[i].design);
			printf("Salary:");
			scanf("%d",survey[i].salary);
		}
	for(i=0;i<no;i++)
		{
			clrscr();
			printf("Details of employee no. %d:",i+1);
			printf("\nName:%s",survey[i].name);
			printf("\nEmployee no.:%d",survey[i].emp_no);
			printf("\nDepartment:%s",survey[i].dept);
			printf("\nDesignation:%s",survey[i].design);
			printf("\nSalary:%d",survey[i].salary);
			getch();
		}
}
