#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Matrix
{
	int Rows,Cols;
	int *Data;

	int initialize(int rows,int cols)
	{
		Rows=rows;
		Cols=cols;
		Data=(int *) malloc(Rows*Cols*2);

		for(int i=0;i<Rows;i++)
			for(int j=0;j<Cols;j++)
			Data[i,j]=0;
	}

	Matrix Add(Matrix t)
	{
		int op1,op2;
		int i,j,m,n;

		if(Rows<t.Rows)
			m=t.Rows;
		else
			m=Rows;

		if(Cols<t.Cols)
			n=t.Cols;
		else
			n=Cols;


		Matrix Result;
		Result.initialize(m,n);

		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				op1=op2=0.0;

				if((i<Rows)&&(j<Cols))
					op1=getval(i,j);

				if((i<t.Rows)&&(j<t.Cols))
					op2=t.getval(i,j);

				Result.addval(i,j,op1+op2);
			}

		return Result;
	}
	void addval(int i, int j, int val)
	{
		*(Data+i*Cols+j) = val;
	}

	int getval(int i, int j)
	{
		return *(Data+i*Cols+j);
	}
}

main()
{
	clrscr();

	int a,b;
	Matrix m1,m2,m3;
	m1.initialize(2,2);
	m2.initialize(2,2);
	m3.initialize(2,2);
/*	m1.Data[0,0]=1;
	m1.Data[0,1]=2;
   //	m1.Data[0,2]=
	m1.Data[1,0]=3;
	m1.Data[1,1]=4;
	m2.Data[0,0]=5;
	m2.Data[0,1]=6;
	m2.Data[1,0]=7;
	m2.Data[1,1]=8;
	*/
	m1.addval(0,0,1);
	m1.addval(0,1,2);
	m1.addval(1,0,3);
	m1.addval(1,1,4);
	m2.addval(0,0,5);
	m2.addval(0,1,6);
	m2.addval(1,0,7);
	m2.addval(1,1,8);
	m3=m1.Add(m2);


	for(a=0;a<m3.Rows;a++)
	{
		for(b=0;b<m3.Cols;b++)
		{
			printf("%d \t",m3.getval(a,b));
		}
	printf("\n");
	}

	getche();
}
