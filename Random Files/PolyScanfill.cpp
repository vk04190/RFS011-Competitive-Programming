#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <iostream.h>
#include <math.h>
#include <dos.h>

void GetCur(int*,int*);

class Polygon
{
  private:
    int EdgeList[1000][4];
    int numvert;
    int ymin,ymax;
  public:
    Polygon();
    void Draw();
    void ScanFill();
};

Polygon::Polygon()
{
  cout << "\nEnter number of vertices: ";
  cin >> numvert;
  int x,y;
  ymin=480;
  ymax=0;

  for(int i=0;i<numvert;i++)
  {
//    scanf("%d %d",&x,&y);
    GetCur(&x,&y);
    EdgeList[i][0]=x;
    EdgeList[i][1]=y;
    ymin= (y<ymin)? y : ymin;  //This is for scan line to be drawn from
			       //from ymin to ymax of the polygon
    ymax= (y>ymax)? y : ymax;
  }

  for(i=0;i<numvert-1;i++)
  {
    EdgeList[i][2]=EdgeList[i+1][0];  //Storing (x1,y1) (x2,y2) in [][4] array
    EdgeList[i][3]=EdgeList[i+1][1];
  }
  EdgeList[i][2]=EdgeList[0][0];
  EdgeList[i][3]=EdgeList[0][1];      //Assigning last vertex to first
}

void Polygon::Draw()
{
  for(int i=0;i<numvert;i++)
  {
    line(EdgeList[i][0],EdgeList[i][1],EdgeList[i][2],EdgeList[i][3]);
  }
}

void Polygon::ScanFill()
{
  int temp,j,x,y;
  int drawcount;
  int TempList[1000][4],numedges=0;  //numedges taken to account for the
				     //horizontal lines
  float draw_arr[1000],arr_int[1000],m[1000];

  for(int i=0;i<numvert;i++)
  {
    if(EdgeList[i][1]==EdgeList[i][3]) continue;  //Horizontal line
    if(EdgeList[i][1]<EdgeList[i][3])
    {
      TempList[numedges][0]=EdgeList[i][0];
      TempList[numedges][1]=EdgeList[i][1];     //If (y1<y2) move to
						//TempList[]][]
      TempList[numedges][2]=EdgeList[i][2];
      TempList[numedges][3]=EdgeList[i][3];
    }
    else
    {
      TempList[numedges][0]=EdgeList[i][2];
      TempList[numedges][1]=EdgeList[i][3];     //Swap coz (y1<y2) always
      TempList[numedges][2]=EdgeList[i][0];
      TempList[numedges][3]=EdgeList[i][1];
    }
    numedges++;
  }


  for(i=0;i<numedges;i++)  //calc 1/m for each edge
  {
    if(TempList[i][1]==TempList[i][3]) continue; //horizontal
    m[i]=(float)(TempList[i][2]-TempList[i][0])/(TempList[i][3]-TempList[i][1]);
    //since calculating 1/m
  }

  for(y=ymin;y<=ymax;y++) //Loop for drawing scan line
  {
    drawcount=0;     //Gives the number of intersections of scan line
    for(i=0;i<numedges;i++)
    {

      if(y==TempList[i][1])              //first condition (ymin)
      {
	arr_int[i]=TempList[i][0];  //Moved only x co-ordinates coz y co-ordinate
				     // of scan line is constant for drawing once
	draw_arr[drawcount]=arr_int[i];//Moved into new array since sorting of
					//vertices needed later. Cannot disturb arr_int[]
	drawcount++;
      }

      if(y > TempList[i][1] && y < TempList[i][3])
      {					//Between ymin and ymax
	arr_int[i]+=m[i];            //Adding m[i] to calculate the next point
	draw_arr[drawcount]=arr_int[i];
	drawcount++;
      }

    }
    for(i=0;i<drawcount-1;i++)       //If (drawcount-1) not there then,
    {				     //it might give garbage value from the
      for(j=i+1;j<drawcount;j++)     //position j=i(i.e.drawcount,i.e.last)+1
      {
	if(draw_arr[i]>draw_arr[j])
	{
	  temp=draw_arr[i];
	  draw_arr[i]=draw_arr[j];
	  draw_arr[j]=temp;
	}
      }
    }
    for(i=0;i<drawcount;i+=2)
    {
      line(draw_arr[i],y,draw_arr[i+1],y);
    }
  }
}

void InitMouse()
{
  _AX=0;                      //initialize mouse pointer
  geninterrupt(0x33);
}

void GetCur(int* x,int*y)
{
  _AX=1;                      //show pointer
  geninterrupt(0x33);

  while(1)
  {
    _AX=3;
    geninterrupt(0x33);       //get position
    if(_BX&1)
    {
      *x=_CX;
      *y=_DX;
      delay(500);
      break;
    }
  }
  _AX=2;
  geninterrupt(0x33);         //hide pointer
}



int main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"");
  InitMouse();
  Polygon p1;
  p1.Draw();
  p1.ScanFill();
  getch();
}