		/*TO MULTIPLY TWO MATRICES AND STORE THE RESULT*/
				   /*A.sandeep*/
				   /*02211A0560*/
				   /*CSE*/
  #include<stdio.h>
  #include<conio.h>
  #include<dos.h>
   void main()
   {
    int a[10][10],b[10][10],c[10][10],i,j,k,x,y,u,v;
    clrscr();
    printf("Enter the order of the matrix a[x][y]:");
    scanf("%d%d",&x,&y);
    printf("Enter the order of matrix B[u][v]:");
    scanf("%d%d",&u,&v);
    if(y==u)
     {
      printf("Enter the elements into matrix A:\n");
	for(i=0;i<x;i++)
	   {
	    for(j=0;j<y;j++)
	    {
	    scanf("%d",&a[i][j]);
	    }
	   }
	printf("\nEnter the elements into matrix B\n");
	for(i=0;i<u;i++)
	  {
	   for(j=0;j<v;j++)
	     {
	      scanf("%d",&b[i][j]);
	     }
	   }
	for(i=0;i<x;i++)
	for(j=0;j<y;j++)
	c[i][j]=0;
	for(i=0;i<x;i++)
	for(j=0;j<y;j++)
	for(k=0;k<v;k++)

		c[i][j]=c[i][j]+a[i][k]*b[k][j];
	printf("THE RESULTANT MATRIX IS:\n\t\t");
	for(i=0;i<x;i++)
		{
		printf("\t");
		for(j=0;j<v;j++)
		{
		printf("%d\t",c[i][j]);
		}
		printf("\n\t\t");
		}
      }
       else
       {
       clrscr();
       textbackground(GREEN);
       textcolor(RED+BLINK);
       cprintf("\n\n\n\n\n\t\tMATRIX MULTIPLICATION IS NOT POSSIBLE");
       }
       getch();
    }































