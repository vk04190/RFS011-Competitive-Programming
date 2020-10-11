#include<stdio.h>
	main()
{
	int num1=5;
	int num2=10;
	int sum=add(num1,num2);

	printf("The sum of %d and %d is %d n",num1,num2,sum);

}
	int add(int num1,num2)
		{ int local;
		  local=num1+num2;
		  return local;
		}