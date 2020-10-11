/* ==============  Program Description  ============= */
/*   program name : ch24_2.c                          */
/*   draw a interesting picture using line()          */
/* ================================================== */
#include  <graphics.h>
#include  <math.h>
#include <conio.h>

void main(void)
{
    int   driver = DETECT,mode;
    int   x[20],y[20];
    int   x_center = 320, y_center = 240, rad = 80;
    int   i,j;

    initgraph(&driver,&mode,"c:\\tc\\bgi");
    for ( i = 0; i < 12; i++ )
    {
       x[i] =  x_center + rad *  cos(36*i*3.125/180);
       y[i] =  y_center + rad *  sin(36*i*3.125/180);
    }
    for ( i = 0; i < 12; i++ )
       for ( j = 0; j < 12; j++ )
	  line(x[i],y[i],x[j],y[j]);
    getch();           /* press any key return to TEXT mode */
    closegraph();
}