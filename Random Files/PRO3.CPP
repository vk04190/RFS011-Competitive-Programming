#include<conio.h>
#include<stdio.h>
void main(void)
{
float eng,urdu,math,ph,ch,total;
float per;
clrscr();
printf("MARK SHEET");
printf("\n Enter the marks of English = ");
scanf("%f", &eng);
printf("\n Enter the marks of Urdu = ");
scanf("%f", &urdu);
printf("\n Enter the marks of Math = ");
scanf("%f", &math);
printf("\n Enter the marks of Physics = ");
scanf("%f", &ph);
printf("\n Enter the marks of Chemistry = ");
scanf("%f", &ch);
clrscr();
printf("\n marks of English = %1.2f",eng);
printf("\n marks of Urdu = %1.2f",urdu);
printf("\n marks of Math = %1.2f",math);
printf("\n marks of Physics = %1.2f",ph);
printf("\n marks of Chemistry = %1.2f",ch);
total= eng+urdu+math+ph+ch;
printf("\nYour total Marks are = %1.2f",total);
per=total/500*100;
printf("\nYour Percentage = %1.2f",per);
getch();
}

