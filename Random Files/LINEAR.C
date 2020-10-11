
/* purpose of this program is to write a program on */    /*RAVINDRA P*/
                                                                                   /*02211A0558*/
                                                                                         /*CSE*/   
# include <stdio.h>
# define SIZE 10
void main()
{
  int a[SIZE],n,i,s,flag=0;
  clrscr();
  printf("enter the values\n");
  scanf("%d",&n);
  printf("enter %d values\n",n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("Enter the searching element\n");
  scanf("%d",&s);
  for(i=0;i<n;i++)
  {
     if(a[i]==s)
     {
        printf("Element is found at the %d position",i);
        flag=1;
        break;
     }
  }
  if(flag==0)
    printf("Not found");
  getch();
}