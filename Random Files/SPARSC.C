/**********************************************************************
			PROGRAM TO CREATE SPARCE MATRIX
**************************************************************************/
#include<stdio.h>						/*NAME:M PRASHANTH     */
#include<conio.h>						/*ROLL NO:02211A0437 */
void main()							/*BRANCH:ECE   */
{
 int a[10][10],s[101][3],i,j,r,c,x;
 clrscr();
 printf("Enter the number of rows and columns of the matrix");
 scanf("%d%d",&r,&c);
 printf("Enter the elements of the matrix");
 for(i=0;i<r;i++)
 for(j=0;j<c;j++)
 scanf("%d",&a[i][j]);
 printf("The entered matrix is:\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++) printf("%d ",a[i][j]);
  printf("\n");
 }
 printf("The Sparsc notation of entered matrix is:\n");
 x=1;
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   if(a[i][j]!=0)
   {
    s[x][0]=i;
    s[x][1]=j;
    s[x][2]=a[i][j];
    x++;
   }
  }
 }
 s[0][0]=r;
 s[0][1]=c;
 s[0][2]=x-1;
 for(i=0;i<x;i++)
 {
  for(j=0;j<3;j++)
  printf("%d  ",s[i][j]);
  printf("\n");
 }
 getch();
}