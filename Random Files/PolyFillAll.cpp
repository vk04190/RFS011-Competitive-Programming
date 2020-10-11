
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <dos.h>




void InitGraphics();
void InitMouse();
void GetCur(int*,int*);
void LineFill(int,int,int,int);
void Menu();
int FillPattern[8][8];
int FillType,UseMouse;




class EdgeNode
{
  public:
  int ymin,ymax;
  float x1,x2,x,m;
  EdgeNode* next;
};

class EdgeList
{
  private:
    EdgeNode *head, *curr;
    int num;

  public:
    EdgeList();
    EdgeNode *temp;
    void Rew();
    void Add(EdgeNode*);
    int MoveToTemp(int);
};

class ActiveEdgeList
{
  private:
    int num;
    int NumEdges;
    EdgeNode *head, *curr;
    void Sort();

  public:
    ActiveEdgeList();
    void Add(EdgeNode*);
    void Refresh(int);
};

class Polygon
{
  private:
    int NumVert,xmin,xmax,ymin,ymax,backcol,forecol,fillcol;
    int VertList[1001][2];
    int IsVertex(int,int);
    void GetVert();
    void CreateEdgeList();
    EdgeList li;
    ActiveEdgeList ael;

  public:
    Polygon();
    Polygon(int);
    int IsInPolyWN(int,int);
    int IsInPolyEO(int,int);
    void Draw();
    void SetFillPattern();
    void FillScanLine();
    void FloodFill(int,int);
    void BoundaryFill(int,int);
};




EdgeList::EdgeList()
{
  num=0;
  head=curr=NULL;
}

void EdgeList::Rew()
{
  curr=head;
}

void EdgeList::Add(EdgeNode* node)
{
  if(head==NULL)
  {
    head=node;
    node->next=NULL;
    curr=head;
  }
  else
  {
    while(curr->next!=NULL) curr=curr->next;
    curr->next=node;
    node->next=NULL;
  }
  num++;
}

int EdgeList::MoveToTemp(int y)
{
  if(curr->ymin==y)
  {
    temp=curr;
    head=curr->next;
    curr=head;
    num--;
    return 1;
  }
  while(1)
  {
    if(curr->next==NULL || curr==NULL) return 0;

    if(curr->next->ymin==y)
    {
      temp=curr->next;
      curr->next=temp->next;
      num--;
      return 1;
    }
    curr=curr->next;
  }
}




ActiveEdgeList::ActiveEdgeList()
{
  num=0;
  head=curr=NULL;
}

void ActiveEdgeList::Sort()
{
  EdgeNode* temp;
  int tmp;
  int i,j;
  float ftmp;
  curr=head;
  temp=curr->next;
  while(curr->next!=NULL)
  {
    while(temp!=NULL)
    {
      if(curr->x > temp->x)
      {
	tmp=curr->ymin;
	curr->ymin=temp->ymin;
	temp->ymin=tmp;

	tmp=curr->ymax;
	curr->ymax=temp->ymax;
	temp->ymax=tmp;

	ftmp=curr->x;
	curr->x=temp->x;
	temp->x=ftmp;

	ftmp=curr->m;
	curr->m=temp->m;
	temp->m=ftmp;

      }
      temp=temp->next;
    }
    curr=curr->next;
    temp=curr->next;
  }
}

void ActiveEdgeList::Add(EdgeNode* node)
{
  if(head==NULL)
  {
    head=node;
    head->next=NULL;
    curr=head;
  }
  else
  {
    while(curr->next!=NULL) curr=curr->next;
    curr->next=node;
    node->next=NULL;
  }
  num++;
}

void ActiveEdgeList::Refresh(int y)
{
  int i;
  curr=head;

  while(curr!=NULL)
  {
    curr->x=curr->x+curr->m;
    curr=curr->next;
  }

  curr=head;
  EdgeNode *temp=head;
  while(1)
  {
    if(temp->ymax==y)
    {
      head=temp->next;
      delete(temp);
      temp=head;
      num--;
    }
    else break;
  }

  curr=head;
  temp=curr->next;

  while(curr->next!=NULL)
  {
    if(temp->ymax==y)
    {
      curr->next=temp->next;
      delete(temp);
      num--;
      temp=curr->next;
      continue;
    }
    curr=curr->next;
    temp=curr->next;
  }

  Sort();
  curr=head;
  while(curr->next !=NULL && curr!=NULL)
  {
    if(FillType==4) LineFill(curr->x,y,curr->next->x,y);
    else line(curr->x,y,curr->next->x,y);
    curr=curr->next->next;
  }
  curr=head;
}




Polygon::Polygon()
{
  cout<<"\n\tEnter number of vertices in polygon: ";
  cin >> NumVert;
  xmin=ymin=1000;
  xmax=ymax=0;
  backcol=BLACK;
  forecol=WHITE;
  fillcol=YELLOW;
  GetVert();
}

Polygon::Polygon(int num)
{
  NumVert=num;
  xmin=ymin=1000;
  xmax=ymax=0;
  backcol=BLACK;
  forecol=WHITE;
  fillcol=YELLOW;
  GetVert();
}

int Polygon::IsVertex(int x,int y)
{
  int i;

  if(VertList[0][0]==x && VertList[0][1]==y)
  {
    if((VertList[NumVert-1][1] <= y && VertList[1][1] <= y) || (VertList[NumVert-1][1] >= y && VertList[1][1] >= y))
      return 1;
    else return 0;
  }
  if(VertList[NumVert-1][0]==x && VertList[NumVert-1][1]==y)
  {
    if((VertList[NumVert-2][1] <= y && VertList[0][1] <= y) || (VertList[NumVert-2][1] >= y && VertList[0][1] >= y))
      return 1;
    else return 0;
  }

  for(i=1;i<NumVert-1;i++)
  {
    if(VertList[i][0]==x && VertList[i][1]==y)
    {
      if((VertList[i-1][1] <= y && VertList[i+1][1] <= y) || (VertList[i-1][1] >= y && VertList[i+1][1] >= y))
	return 1;
      else return 0;
    }
  }
  return 0;
}

void Polygon::GetVert()
{
  int i,temp;
  for(i=0;i<NumVert;i++)
  {
    cout << "\n\tEnter coords of " << i+1 << " vertex: ";
    if(UseMouse) GetCur(&VertList[i][0],&VertList[i][1]);
    else scanf("%d %d",&VertList[i][0],&VertList[i][1]);


    xmin = VertList[i][0] < xmin ? VertList[i][0] : xmin;
    ymin = VertList[i][1] < ymin ? VertList[i][1] : ymin;
    xmax = VertList[i][0] > xmax ? VertList[i][0] : xmax;
    ymax = VertList[i][1] > ymax ? VertList[i][1] : ymax;
  }
  VertList[i][0]=VertList[0][0];
  VertList[i][1]=VertList[0][1];
}

void Polygon::CreateEdgeList()
{
  int i;
  int x1,y1,x2,y2,temp;

  EdgeNode *al;
  for(i=0;i<NumVert-1;i++)
  {
    x1=VertList[i][0];
    y1=VertList[i][1];
    x2=VertList[i+1][0];
    y2=VertList[i+1][1];

    if(y1==y2) continue;

    al=new(EdgeNode);
    if(y1>y2)
    {
      temp=x1;
      x1=x2;
      x2=temp;

      temp=y1;
      y1=y2;
      y2=temp;
    }

    al->x =x1;
    al->ymin=y1;
    al->ymax=y2;
    al->m=(float)(x2-x1)/(float)(y2-y1);
    li.Add(al);
  }

  x1=VertList[i][0];
  y1=VertList[i][1];
  x2=VertList[0][0];
  y2=VertList[0][1];

  if(y1!=y2)
  {
    al=new(EdgeNode);

    if(y1>y2)
    {
      temp=x1;
      x1=x2;
      x2=temp;

      temp=y1;
      y1=y2;
      y2=temp;
    }

    al->x =x1;
    al->ymin=y1;
    al->ymax=y2;
    al->m=(float)(x2-x1)/(float)(y2-y1);
    li.Add(al);
  }
}

int Polygon::IsInPolyWN(int x,int y)
{
  int i,x1,y1,x2,y2,x0;
  int ty;
  int sum=0;
  float m,c;

  for(i=0;i<NumVert;i++)
  {
    x1=VertList[i][0];
    x2=VertList[i+1][0];
    y1=VertList[i][1];
    y2=VertList[i+1][1];

    if(x1>x && x2>x) continue;

    if( (x1<x && x2<x) && ((y1>=y&&y2<=y)||(y1<=y&&y2>=y)) )
    {
      if(y2>y)
	sum++;
      else if(y2<y)
	sum--;
      else if(y2==y)
      {
	if(y1>y)
	  sum--;
	else if(y1<y)
	  sum++;
      }
      continue;
    }

    if( !( (y1>=y&&y2<=y)||(y1<=y&&y2>=y)) ) continue;

    m=(float)(y2-y1)/(float)(x2-x1);
    c=y1-m*x1;
    x0=(float)(y-c)/m;
    if(x0<x)
    {
      if(y2>y)
	sum++;
      else if(y2<y)
	sum--;
      else if(y2==y)
      {
	if(y1>y)
	  sum--;
	else if(y1<y)
	  sum++;
      }
    }
  }
  return sum;
}

int Polygon::IsInPolyEO(int x,int y)
{
  int count=0;
  int x1,y1;
  int flag=0;
  x1=xmin-1;
  y1=y;

  if(x<xmin || y<ymin) return(0);

  for(x1=xmin-1;x1<x;x1++)
  {
    if(!IsVertex(x1,y1))
    {
      if(flag==0 && getpixel(x1,y1)==WHITE)
	flag=1;
      else if(flag==1 && getpixel(x1,y1)==BLACK)
      {
	flag=0;
	count++;
      }
      else
      if(flag==2 && getpixel(x1,y1)==BLACK) flag=0;
    }
    else
    {
      flag=2;
    }
  }
  return((count)%2);
}

void Polygon::Draw()
{
  int i;
  setcolor(forecol);
  for(i=0;i<NumVert-1;i++)
    line(VertList[i][0],VertList[i][1],VertList[i+1][0],VertList[i+1][1]);

  line(VertList[i][0],VertList[i][1],VertList[0][0],VertList[0][1]);
}

void Polygon::SetFillPattern()
{
  int i,j;
  int col;
  int FillPatern[8][8]= {{1,1,1,1,1,1,1,1},
			 {1,0,0,0,1,0,0,0},
			 {1,0,0,0,1,0,0,0},
			 {1,0,0,0,1,0,0,0},
			 {1,1,1,1,1,1,1,1},
			 {1,0,0,0,1,0,0,0},
			 {1,0,0,0,1,0,0,0},
			 {1,0,0,0,1,0,0,0}};

  for(i=0;i<8;i++)
  for(j=0;j<8;j++)
    FillPattern[i][j]=FillPatern[i][j]*fillcol;

}

void Polygon::FillScanLine()
{
  int y;
  CreateEdgeList();
  setcolor(fillcol);
  for(y=ymin;y<ymax;y++)
  {
    li.Rew();
    while(li.MoveToTemp(y)) ael.Add(li.temp);
    ael.Refresh(y);
  }

}

void Polygon::FloodFill(int x,int y)
{
  if(getpixel(x,y) == backcol && getpixel(x,y) != fillcol)
  {
    putpixel(x,y,fillcol);
    FloodFill(x+1,y);
    FloodFill(x-1,y);
    FloodFill(x,y+1);
    FloodFill(x,y-1);
  }
}

void Polygon::BoundaryFill(int x,int y)
{
  if(getpixel(x,y) != forecol && getpixel(x,y) != fillcol)
  {
    putpixel(x,y,fillcol);
    BoundaryFill(x+1,y);
    BoundaryFill(x-1,y);
    BoundaryFill(x,y+1);
    BoundaryFill(x,y-1);
  }
}




void InitGraphics()
{
  int gd=DETECT,gm,errorcode;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
  errorcode=graphresult();
  if(errorcode!=0)
  {
    cout << "\nGraphics error: " << grapherrormsg(errorcode);
    getch();
    exit(1);
  }
}

void InitMouse()
{
  _AX=00;
  geninterrupt(0x33);
}

void GetCur(int* xcur,int* ycur)
{

  _AX=01;
  geninterrupt(0x33);

  while(1)
  {
    _AX=03;
    geninterrupt(0x33);
    if(_BX&1)
    {
      *xcur=_CX;
      *ycur=_DX;
      delay(250);
      break;
    }
  }
  _AX=02;
  geninterrupt(0x33);
}

void LineFill(int x1,int y1,int x2,int y2)
{
  int i,j,col;
  for(i=x1;i<=x2;i++)
  {
    col=FillPattern[y1%8][i%8];
    putpixel(i,y1,col);
  }
}

void Menu()
{
  int opt,x,y;
  Polygon *p;

  do
  {
    clrscr();
    cleardevice();
    cout << "\tMenu-Polygons\n\n\t1.\tCheck if point is inside or outside polygon\n\t2.\tPolygon Filling\n\t3.\tExit\n\n\tYour Choice: ";
    cin >> opt;
    if(opt==3) break;
    if(opt==1 || opt==2) p=new Polygon;
    if(opt==1)
    {
      clrscr();
      cleardevice();
      p->Draw();
      cout<< "\n\tEnter coords of pt.: ";
      if(UseMouse) GetCur(&x,&y);
      else scanf("%d %d",&x,&y);
      cout << "\n\tWhich Method\n\n1.\tEven-Odd Method\n2.\tWinding Number Method\n\n\tYour Choice: ";
      cin >> opt;
      p->Draw();
      putpixel(x,y,YELLOW);
      if(opt==1)
      {

	if(p->IsInPolyEO(x,y)) cout << "\n\tPt is INSIDE";
	else cout << "\n\tPt is OUTSIDE";
      }
      else if(opt==2)
      {
	if(p->IsInPolyWN(x,y))cout << "\n\tPt is INSIDE";
	else cout << "\n\tPt is OUTSIDE";
      }
      getch();
      delete p;
    }
    else if(opt==2)
    {
      cout << "\n\tWhich Method\n\n1.\tScanline Algorithm\n2.\tFlood Fill\n3.\tBoundary Fill\n4.\tPattern Fill\n\n\tYour Choice: ";
      cin >> opt;
      FillType=opt;
      if(opt==1)
      {
	clrscr();
	cleardevice();
	p->FillScanLine();
	p->Draw();
	getch();
	delete p;
      }
      else if(opt==2)
      {
	clrscr();
	cleardevice();
	p->Draw();
	cout << "\nEnter seed point coords: ";
	if(UseMouse) GetCur(&x,&y);
	else scanf("%d %d",&x,&y);
	cleardevice();
	p->Draw();
	p->FloodFill(x,y);
	getch();
	delete p;
      }
      else if(opt==3)
      {
	clrscr();
	cleardevice();
	p->Draw();
	cout << "\nEnter seed point coords: ";
	if(UseMouse) GetCur(&x,&y);
	else scanf("%d %d",&x,&y);
	cleardevice();
	p->Draw();
	p->BoundaryFill(x,y);
	getch();
	delete p;
      }
      else if(opt==4)
      {
	cleardevice();
	p->SetFillPattern();
	p->FillScanLine();
	p->Draw();
	getch();
	delete p;
      }
    }
  }while(1);
}




void main()
{
  InitGraphics();
  InitMouse();
  UseMouse=1;
  Menu();
}