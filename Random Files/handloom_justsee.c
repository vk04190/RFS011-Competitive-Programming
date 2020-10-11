/****************************************************************************
     PROGRAM TO PRINT NET AMOUNT TO BE PAID BY THE CUSTOMER IN ACCORDANCE
		     TO THE PURCHASES AT THE SHOWROOM
****************************************************************************/

#include<stdio.h>						/*/NAME:M PRASHANTH     */
#include<conio.h>						/*/ROLL NO:02211A0437 */
void main()							/*/BRANCH:E C E     */
{
float namt,ndamt=0;
int x;
clrscr();
printf("\nenter the net purchase amount");
scanf("%f",&namt);
printf("\nenter 1 to find mill cloth net amount after discount");
printf("\nenter 2 to find handloom cloth net amount after discount");
scanf("\n%d",&x);
switch(x)
{
case 1:if(namt<=100)
       ndamt=namt;
       else
       if(namt>=101&&namt<=200)
       ndamt=namt*95/100;
       else
       if(namt>=201&&namt<=300)
       ndamt=namt*92.5/100;
       else
       ndamt=namt*90/100;
       break;
case 2:if(namt<=100)
       ndamt=namt*95/100;
       else
       if(namt>=101&&namt<=200)
       ndamt=namt*92.5/100;
       else
       if(namt>=201&&namt<=300)
       ndamt=namt*90/100;
       else
       ndamt=namt*85/100;
       break;
}
printf("\nthe net amount after discount is %f",ndamt);
getch();
}