 #include<stdio.h>
 #include<conio.h>

 struct employee_details
      {
       char ename[10];
       char dep[10],des[10];
       int eno,salary;
      };
 void main()
      {
       struct employee_details employee[5];
       int i;
       clrscr();
       for(i=0;i<2;i++)
	   {
	    printf("ENter employee name:");
	    scanf("%s",employee[i].ename);
	    printf("Enter the department:");
	    scanf("%s",employee[i].dep);
	    printf("Enter the designation:");
	    scanf("%s",employee[i].des);
	    printf("Enter employee no:");
	    scanf("%d",&employee[i].eno);
	    printf("Enter the salary:");
	    scanf("%d",&employee[i].salary);
	    printf("\n");
	   }
       for(i=0;i<2;i++)
	  {
	   printf("\n\DETAILS OF EMPLOYEE %d IS:\n",i+1);
	   printf("%s\n",employee[i].ename);
	   printf("%s\n",employee[i].dep);
	   printf("%s\n",employee[i].des);
	   printf("%d\n",employee[i].eno);
	   printf("%d\n",employee[i].salary);
	  }
	 getch();
       }