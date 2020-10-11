#include<stdio.h>
#include<conio.h>
	void main()
	{
		int *p,t,i,a[25],j,n;
		clrscr();
		printf("Enter ur choice num values");
		scanf("%d",&n);
		printf("enter ur elements now\n");
		i=0;
		while(i<n)
		{
			scanf("%d",&a[i]);
			i++;
		}
		p=a;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if ( *(a+j) < *(a+j+1))
				{
				 t=*(a+j);
				 *(a+j)=*(a+j+1);
				 *(a+j+1)=t;
				 }

			 }
			 printf("%d ",*(a+i));
	 }
/*			printf("UR MODIFIED ORDER\n");
			printf("------------------\n");
			for(i=0;i<n;i++)
			{
				printf("UR a[%d] value is %d\n",i+1,*(a+i));
			}*/
			getch();
}
