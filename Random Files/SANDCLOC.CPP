
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
void empty();
struct edge                          //Structure to store the edges
{
	 int x1,x2,y1,y2,flag;
};
int p1 = 101,p2 = 301,p3,p4,yy1;     //global variables

void main()
{
	 int gm,i,j,k,n;
	 int gd=DETECT,x[10],y[10],x1[10],y1[10];
	 int ymax1 = 0,ymin1 = 480,ymax2 = 0,ymin2 = 480,yy,temp;
	 struct edge ed1[10],ed2[10],temped1,temped2;
	 float dx,dy,m[10],x_int[10],inter_x[10];
	 initgraph(&gd,&gm,"c:\\tc\\bgi");
	 x[0]=100,y[0]=100;       //assigning values to the
	 x[1]=300,y[1]=100;       //boundry co-ordinates
	 x[2]=200,y[2]=200;	 // of the sand clock

	 x1[0]=200,y1[0]=200;
	 x1[1]=100,y1[1]=300;
	 x1[2]=300,y1[2]=300;
	 setcolor(9);
	 outtextxy(165,40,"SAND CLOCK");
	 setcolor(BROWN);
	 rectangle(100,75,300,100);
	 rectangle(100,300,300,325);

while(!kbhit())
{       p1 = 101;p2 = 301;
	for(i=0;i<3;i++)            //finding ymax1
	 {
	   if(y[i]>ymax1)
	   ymax1=y[i];
	   if(y[i]<ymin1)
	   ymin1=y[i];
	   ed1[i].x1=x[i];
	   ed1[i].y1=y[i];
	 }
	 for(i=0;i<2;i++)            //storing boundry co-ordinates
	 {			    //forming a closed polugon
	   ed1[i].x2=ed1[i+1].x1;
	   ed1[i].y2=ed1[i+1].y1;
	   ed1[i].flag=0;
	 }
	 ed1[i].x2=ed1[0].x1;
	 ed1[i].y2=ed1[0].y1;
	 ed1[i].flag=0;
	 for(i=0;i<3;i++)
	 {                          //finding ymax2
	   if(y1[i]>ymax2)
	   ymax2=y1[i];
	   if(y1[i]<ymin2)
	   ymin2=y1[i];
	   ed2[i].x1=x1[i];
	   ed2[i].y1=y1[i];
	 }
	 for(i=0;i<2;i++)             //storing boundry co-ordinates
	 {			     //forming a closed polugon
	   ed2[i].x2=ed2[i+1].x1;
	   ed2[i].y2=ed2[i+1].y1;
	   ed2[i].flag=0;
	 }
	 ed2[i].x2=ed2[0].x1;
	 ed2[i].y2=ed2[0].y1;
	 ed2[i].flag=0;
	 for(i=0;i<3;i++)
	 {
	   if(ed2[i].y1<ed2[i].y2)       //Storing the ed2ges such that y1>y2
	   {
	      temp=ed2[i].x1;
	      ed2[i].x1=ed2[i].x2;
	      ed2[i].x2=temp;
	      temp=ed2[i].y1;
	      ed2[i].y1=ed2[i].y2;
	      ed2[i].y2=temp;
	    }
	 }
	 for(i=0;i<3;i++)
	 {
	    if(ed1[i].y1<ed1[i].y2)       //Storing the ed1ges such that y1>y2
	    {
	      temp=ed1[i].x1;
	      ed1[i].x1=ed1[i].x2;
	      ed1[i].x2=temp;
	      temp=ed1[i].y1;
	      ed1[i].y1=ed1[i].y2;
	      ed1[i].y2=temp;
	    }
	 }
	setcolor(BROWN);
	for(i=0;i<3;i++)            //Plotting the polgon1
	{
	   line(ed1[i].x1,ed1[i].y1,ed1[i].x2,ed1[i].y2);
	}
	for(i=0;i<3;i++)            //Plotting the polgon2
	{
	   line(ed2[i].x1,ed2[i].y1,ed2[i].x2,ed2[i].y2);
	}

	for(i=0;i<2;i++)         //Arranging the ed1ges in descending order
	{                        //order of y1 coordinate
	  for(j=0;j<2;j++)
	  {
	     if(ed1[j].y1<ed1[j+1].y1)
	     {
		temped1=ed1[j];
		ed1[j]=ed1[j+1];
		ed1[j+1]=temped1;
	      }
	      if(ed1[j].y1==ed1[j+1].y1)
	       {
		  if(ed1[j].y2<ed1[j+1].y2)
		  {
		      temped1=ed1[j];
		      ed1[j]=ed1[j+1];
		      ed1[j+1]=temped1;
		   }
		  if(ed1[j].y2==ed1[j+1].y2)
		  {
		     if(ed1[j].x1<ed1[j+1].x1)
		     {
		       temped1=ed1[j];
		       ed1[j]=ed1[j+1];
		       ed1[j+1]=temped1;
		      }
		   }
	       }
	   }
	}
	for(i=0;i<3;i++)
	{
	   dx=ed1[i].x2-ed1[i].x1;
	   dy=ed1[i].y2-ed1[i].y1;
	   if(dy==0)
	   {
	     m[i]=0;
	   }
	   else
	   {
	    m[i]=dx/dy;              //Calculating slope of each ed1ge
	   }
	  inter_x[i]=ed1[i].x1;
	}
//poly1
	 yy=ymax1;
	 while(yy>=ymin1)
	 {
	   for(i=0;i<3;i++)
	   {
	     if(yy>ed1[i].y2&&yy<=ed1[i].y1)
	     {
		ed1[i].flag=1;                //Storing the active ed1ges
	     }
	     else

		ed1[i].flag=0;
	   }
	   j=0;
	  for(i=0;i<3;i++)
	  {
	     if(ed1[i].flag==1)
	     {
		if(yy==ed1[i].y1)    //If the Scan line Passes thro'a vertex
		{
		   if(ed1[i+1].y2<yy || ed1[i-1].y2<yy || ed1[i+1].y2>yy)
		   {
			x_int[j]=ed1[i].x1;       // Only One x-intersection
			j++;
		   }
		   if(ed1[i].y2>yy || ed1[i+1].y1>yy )
		   {
			  x_int[j]=ed1[i].x1;     //Two x-intersections
			  j++;
			  x_int[j]=ed1[i].x1;
			  j++;
		   }
		   if(ed1[i].y2<yy || ed1[i-1].y1>yy)
		   {
			  x_int[j]=ed1[i].x1;     //Two x-intersections
			  j++;
			  x_int[j]=ed1[i].x1;
			  j++;
		   }
		}
		else
		{
		  x_int[j]=inter_x[i]+(-m[i]);
		  inter_x[i]=x_int[j];
		  j++;
		}
	     }
	  }

	  for(i=0;i<j;i++)              //Sorting the x-intersections
	  {
	    for(k=0;k<j-1;k++)
	    {
	       if(x_int[k]>x_int[k+1])
		{
		  temp=x_int[k];
		  x_int[k]=x_int[k+1];
		  x_int[k+1]=temp;
		}
	    }
	  }
	 for(i=0;i<j;i+=2)               //Filling the polygon
	 {
	   line(x_int[i],yy,x_int[i+1],yy);
	 }
	 yy--;
	}

/*******************************************************************************/
//poly 2
	 setcolor(BROWN);
	 for(i=0;i<2;i++)         //Arranging the ed2ges in descending order
	 {                          //order of y1 coordinate
	   for(j=0;j<2;j++)
	   {
	      if(ed2[j].y1<ed2[j+1].y1)
	      {
		  temped2=ed2[j];
		  ed2[j]=ed2[j+1];
		  ed2[j+1]=temped2;
	       }
	       if(ed2[j].y1==ed2[j+1].y1)
	       {
		  if(ed2[j].y2<ed2[j+1].y2)
		  {
		      temped2=ed2[j];
		      ed2[j]=ed2[j+1];
		      ed2[j+1]=temped2;
		   }
		  if(ed2[j].y2==ed2[j+1].y2)
		  {
		     if(ed2[j].x1<ed2[j+1].x1)
		     {
		       temped2=ed2[j];
		       ed2[j]=ed2[j+1];
		       ed2[j+1]=temped2;
		      }
		   }
	       }
	   }
	}


	for(i=0;i<3;i++)
	 {
	   dx=ed2[i].x2-ed2[i].x1;
	   dy=ed2[i].y2-ed2[i].y1;
	   if(dy==0)
	   {
	     m[i]=0;
	   }
	   else
	   {
	     m[i]=dx/dy;              //Calculating slope of each ed2ge
	   }
	   inter_x[i]=ed2[i].x1;
	 }

	 yy=ymax2;
	 yy1=ymin1+1;
	 while(yy>=ymin2)
	 {
	   for(i=0;i<3;i++)
	   {
	     if(yy>ed2[i].y2&&yy<=ed2[i].y1)
	     {
	       ed2[i].flag=1;                //Storing the active ed2ges
	     }
	     else
	       ed2[i].flag=0;
	    }
	  j=0;
	  for(i=0;i<3;i++)
	  {
	     if(ed2[i].flag==1)
	     {
		if(yy==ed2[i].y1)    //If the Scan line Passes thro'a vertex
		{

		   if(ed2[i+1].y2<yy || ed2[i-1].y2<yy || ed2[i+1].y2>yy)
		   {
			x_int[j]=ed2[i].x1;       // Only One x-intersection
			j++;
		   }
		   if(ed2[i].y2>yy || ed2[i+1].y1>yy )
		   {
			  x_int[j]=ed2[i].x1;     //Two x-intersections
			  j++;
			  x_int[j]=ed2[i].x1;
			  j++;
		   }
		   if(ed2[i].y2<yy || ed2[i-1].y1>yy)
		   {
			  x_int[j]=ed2[i].x1;     //Two x-intersections
			  j++;
			  x_int[j]=ed2[i].x1;
			  j++;
		   }
		}
		else
		{
		  x_int[j]=inter_x[i]+(-m[i]);
		  inter_x[i]=x_int[j];
		  j++;
		}
	     }
	  }

  for(i=0;i<j;i++)              //Sorting the x-intersections
  {
    for(k=0;k<j-1;k++)
    {
       if(x_int[k]>x_int[k+1])
	{
	  temp=x_int[k];
	  x_int[k]=x_int[k+1];
	  x_int[k+1]=temp;
	}
    }
  }


 for(i=0;i<j;i+=2)               //Filling the polygon
 {

   line(x_int[i],yy,x_int[i+1],yy);
   empty();

				//function empty() to fill upper
 }                              //polygon with black colour simultaneously
 setcolor(BROWN);
 yy--;
 yy1++;
 delay(200);                    //delay to watch actual filing process
 }
}
 getch();
 closegraph();
}

void empty()
{
  int i;
  setcolor(BLACK);
  p4 = p2-1;
  line(p1,yy1,p4,yy1);
  for(i=0;i<100;i++)
  {
   putpixel(200,200+i,BROWN);
  }
  p1=p1+1;
  p2=p2-1;
}
