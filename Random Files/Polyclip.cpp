#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <graphics.h>
#include <dos.h>

void GetCur(int*,int*);

class Polygon
{
  private:
    int VertList[1000][3];
    int numvert;

  public:
    Polygon();
    void Draw();
    void Clip(int,int,int,int);
};

Polygon::Polygon()
{
  cout << "\nEnter number of vertices: ";
  cin >> numvert;
  int x,y;

  for(int i=0;i<numvert;i++)
  {
//    scanf("%d %d",&x,&y);
    GetCur(&x,&y);
    VertList[i][0]=x;
    VertList[i][1]=y;
  }
  VertList[i][0]=VertList[0][0];
  VertList[i][1]=VertList[0][1];
}

void Polygon::Draw()
{
  for(int i=0;i<numvert;i++)
  {
    line(VertList[i][0],VertList[i][1],VertList[i+1][0],VertList[i+1][1]);
  }
}

void Polygon::Clip(int l,int t,int r,int b)
{
  float m,c;
  int NewList[1000][3]={0},count=0;

  //------------------left clip-----------------------

  for(int i=0;i<=numvert;i++)  //check duplicate entry for first vertex also
			       //(see input function -> Polygon::Polygon)
    VertList[i][2]= ( (VertList[i][0] < l) ? 0 : 1);

  for(i=0;i<numvert;i++)
  {
    if(VertList[i][2] == 1 && VertList[i+1][2] == 0)
    {
      NewList[count][0]=VertList[i][0];
      NewList[count][1]=VertList[i][1];
      count++;
      m=(float)(VertList[i+1][1]-VertList[i][1])/(VertList[i+1][0]-VertList[i][0]);
      c=VertList[i][1]-m*VertList[i][0];
      NewList[count][0]=l;
      NewList[count][1]=m*l+c;
      count++;

    }
    else if(VertList[i][2] == 0 && VertList[i+1][2] == 1)
    {
      m=(float)(VertList[i+1][1]-VertList[i][1])/(VertList[i+1][0]-VertList[i][0]);
      c=VertList[i][1]-m*VertList[i][0];
      NewList[count][0]=l;	//Vertlist[i+1][2] ==1 will be moved in the
				// new list in the next iteration
      NewList[count][1]=m*l+c;
      count++;

    }
    else if(VertList[i][2] == 1)
    {
      NewList[count][0]=VertList[i][0];
      NewList[count][1]=VertList[i][1];
      count++;
    }

  }
  numvert=count;           //now new list becomes original list
			   //(Updating the vertices list)
  for(i=0;i<count;i++)
  {
    VertList[i][0]=NewList[i][0];
    VertList[i][1]=NewList[i][1];
  }
  VertList[i][0]=VertList[0][0];          //set last entry as first entry
  VertList[i][1]=VertList[0][1];

  //setcolor(YELLOW);
  //Draw();
  //getch();


  //------------------top clip-----------------------
  count=0;

  for(i=0;i<=numvert;i++)
    VertList[i][2]= ( (VertList[i][1] < t) ? 0 : 1);

  for(i=0;i<numvert;i++)
  {
    if(VertList[i][2] == 1 && VertList[i+1][2] == 0)
    {
      NewList[count][0]=VertList[i][0];
      NewList[count][1]=VertList[i][1];
      count++;
      if(VertList[i+1][0]==VertList[i][0])
      {
	NewList[count][0]=VertList[i][0];
      }
      else
      {
	m=(float)(VertList[i+1][1]-VertList[i][1])/(VertList[i+1][0]-VertList[i][0]);
	c=VertList[i][1]-m*VertList[i][0];
	NewList[count][0]=(t-c)/m;
      }
      NewList[count][1]=t;
      count++;
    }
    else if(VertList[i][2] == 0 && VertList[i+1][2] == 1)
    {
      if(VertList[i+1][0]==VertList[i][0])
      {
	NewList[count][0]=VertList[i][0];
      }
      else
      {
	m=(float)(VertList[i+1][1]-VertList[i][1])/(VertList[i+1][0]-VertList[i][0]);
	c=VertList[i][1]-m*VertList[i][0];
	NewList[count][0]=(t-c)/m;
      }
      NewList[count][1]=t;
      count++;
    }
    else if(VertList[i][2] == 1)
    {
      NewList[count][0]=VertList[i][0];
      NewList[count][1]=VertList[i][1];
      count++;
    }

  }
  numvert=count;
  for(i=0;i<count;i++)
  {
    VertList[i][0]=NewList[i][0];
    VertList[i][1]=NewList[i][1];
  }
  VertList[i][0]=VertList[0][0];
  VertList[i][1]=VertList[0][1];

  count=0;
  //setcolor(BLUE);
  //Draw();
  //getch();
  //------------------right clip-----------------------

  for(i=0;i<=numvert;i++)
    VertList[i][2]= ( (VertList[i][0] > r) ? 0 : 1);

  for(i=0;i<numvert;i++)
  {
    if(VertList[i][2] == 1 && VertList[i+1][2] == 0)
    {
      NewList[count][0]=VertList[i][0];
      NewList[count][1]=VertList[i][1];
      count++;
      m=(float)(VertList[i+1][1]-VertList[i][1])/(VertList[i+1][0]-VertList[i][0]);
      c=VertList[i][1]-m*VertList[i][0];
      NewList[count][0]=r;
      NewList[count][1]=m*r+c;
      count++;

    }
    else if(VertList[i][2] == 0 && VertList[i+1][2] == 1)
    {
      m=(float)(VertList[i+1][1]-VertList[i][1])/(VertList[i+1][0]-VertList[i][0]);
      c=VertList[i][1]-m*VertList[i][0];
      NewList[count][0]=r;
      NewList[count][1]=m*r+c;
      count++;

    }
    else if(VertList[i][2] == 1)
    {
      NewList[count][0]=VertList[i][0];
      NewList[count][1]=VertList[i][1];
      count++;
    }

  }
  numvert=count;
  for(i=0;i<count;i++)
  {
    VertList[i][0]=NewList[i][0];
    VertList[i][1]=NewList[i][1];
  }
  VertList[i][0]=VertList[0][0];
  VertList[i][1]=VertList[0][1];

  //setcolor(RED);
  //Draw();
  //getch();

  //------------------bottom clip-----------------------
  count=0;

  for(i=0;i<=numvert;i++)
    VertList[i][2]= ( (VertList[i][1] > b) ? 0 : 1);

  for(i=0;i<numvert;i++)
  {
    if(VertList[i][2] == 1 && VertList[i+1][2] == 0)
    {
      NewList[count][0]=VertList[i][0];
      NewList[count][1]=VertList[i][1];
      count++;
      if(VertList[i+1][0]==VertList[i][0])     //vertical line
      {
	NewList[count][0]=VertList[i][0];
      }
      else
      {
	m=(float)(VertList[i+1][1]-VertList[i][1])/(VertList[i+1][0]-VertList[i][0]);
	c=VertList[i][1]-m*VertList[i][0];
	NewList[count][0]=(b-c)/m;
      }
      NewList[count][1]=b;
      count++;
    }
    else if(VertList[i][2] == 0 && VertList[i+1][2] == 1)
    {
      if(VertList[i+1][0]==VertList[i][0])    //vertical line
      {
	NewList[count][0]=VertList[i][0];
      }
      else
      {
	m=(float)(VertList[i+1][1]-VertList[i][1])/(VertList[i+1][0]-VertList[i][0]);
	c=VertList[i][1]-m*VertList[i][0];
	NewList[count][0]=(b-c)/m;
      }
      NewList[count][1]=b;
      count++;
    }
    else if(VertList[i][2] == 1)
    {
      NewList[count][0]=VertList[i][0];
      NewList[count][1]=VertList[i][1];
      count++;
    }

  }
  numvert=count;
  for(i=0;i<count;i++)
  {
    VertList[i][0]=NewList[i][0];
    VertList[i][1]=NewList[i][1];
  }
  VertList[i][0]=VertList[0][0];
  VertList[i][1]=VertList[0][1];
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
      delay(5);
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
  rectangle(100,100,400,400);
  Polygon p1;
  p1.Draw();
  getch();

  cleardevice();
  rectangle(100,100,400,400);

  setcolor(BLUE);

  p1.Clip(100,100,400,400);
  p1.Draw();
  getch();
  getch();
}