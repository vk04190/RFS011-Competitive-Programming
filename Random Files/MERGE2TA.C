 purpose of this program is to sort the given 2soted arrays /*RAVINDRA P*/
                                                                                       /*02211A0558*/
                                                                                      /*CSE*/   
                                                     
# include <stdio.h>
void main()
{
  int a[10],b[10],c[20],as,bs,i,j,k;
  clrscr();
  printf("enter the size of the first table\n");
  scanf("%d",&as);
  printf("enter %d values\n",as);
  for(i=0;i<as;i++)
     scanf("%d",&a[i]);
  printf("enter the size of the second table\n");
  scanf("%d",&bs);
  printf("enter %d values\n",bs);
  for(j=0;j<bs;j++)
     scanf("%d",&b[j]);
  i=0,j=0,k=0;
  while(i<as &&j<bs)
  {
    if(a[i]<b[j])
      {
        c[k]=a[i];
        i++;
        k++;
      }
      else
      {
        c[k]=b[j];
        k++;
        j++;
      }
  }
    if(i<as)
    {
      while(i<as)
      {
        c[k]=a[i];
        k++;
        i++;
      }
    }
   else
   {
       while(j<bs)
       {
         c[k]=b[j];
         k++;
         j++;
       }
    }
  printf("the merge table is\n");
     for(i=0;i<as+bs;i++)
        printf("%d\t",c[i]);

     getch();
}


