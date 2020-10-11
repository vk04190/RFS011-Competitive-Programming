	/*TO PRINT SUM AND AVERAGE OF 10 NUMBERS USING ARRAYS*/
							/*A.SANDEEP*/
							/*02211A0560*/

  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  int a[10],i,sum=0;
  float avg;
  printf("\nEnter 10no.s:");
  for(i=0;i<10;i++)
  {
  scanf("%d",&a[i]);
  sum=sum+a[i];
  }
  avg=sum/10;
  printf("sum=%d\tavg=%d",sum,avg);
  getch();
  }
