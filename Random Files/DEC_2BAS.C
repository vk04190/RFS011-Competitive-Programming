		/*TO CONVERT ANY DECIMAL NO. TO ANY BASE*/
							/*A.SANDEEP*/
							/*02211A0560*/

  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  int no,r,j,i=0,base;
  int a[10];
  clrscr();
  printf("Enter the number and base:");
  scanf("%d%d",&no,&base);
	while(no!=0)
	{
	r=no%base;
	a[i]=r;
	no=no/base;
	i++;
	}
  for(j=i;j>0;j--)
	{
	if(a[j]<=9)
	printf("%d",a[j]);
	if(a[j]==10)
	printf("A");
	if(a[j]==11)
	printf("B");
	}
  getch();
  }