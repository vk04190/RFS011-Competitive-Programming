#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

int get_poly(float p[][3]);
void draw_poly(float p[][3],int n,int col);
void multiply(float p[][3],float scale[][3],float nw[][3],int n);
void scale(float p[][3],float SX,float SY,int n,float temp[][3]);
void trans(float p[][3],int x1,int y1,int x2,int y2,int n,float temp[][3]);
void rota(float p[][3],int n,int angle,float temp[][3]);
void shear(float p[][3],int n,float SHX,float SHY,float temp[][3]);
void reflection(float p[][3],int n,float temp[][3],int l);
void translate(float p[][3],float temp[][3],int n);
void scaling(float p[][3],float temp[][3],int n);
void rotation(float p[][3],float temp[][3],int n);
void shearing(float p[][3],float temp[][3],int n);
void reflect(float p[][3],float temp[][3],int n);

void axes();
int submenu();
int menu();

int xorg,yorg;


void main()
{
  int gd=DETECT,gm,n,x1,y1,x2,y2,angle,clk,c,a,b,m,i,j,ch=0;
  float p[10][3],SX,SY,SHX,SHY,temp[10][3],y;
  initgraph(&gd,&gm,"e:\\tc\\bgi");
  xorg=320;
  yorg=240;
  n=get_poly(p);
  draw_poly(p,n,15);
  setcolor(WHITE);
  while(1)
  {
    getch();
    cleardevice();
    closegraph();
    clrscr();
    initgraph(&gd,&gm,"e:\\tc\\bgi");

    switch(menu())
    {

      case 1:
	translate(p,temp,n);
	cleardevice();
	closegraph();
	clrscr();
	initgraph(&gd,&gm,"e:\\tc\\bgi");
	axes();
	draw_poly(p,n,15);
	draw_poly(temp,n,14);
	break;

      case 2:
	scaling(p,temp,n);
	cleardevice();
	closegraph();
	clrscr();
	initgraph(&gd,&gm,"e:\\tc\\bgi");
	axes();
	draw_poly(p,n,15);
	draw_poly(temp,n,14);
	break;

      case 3:
	rotation(p,temp,n);
	cleardevice();
	closegraph();
	clrscr();
	initgraph(&gd,&gm,"e:\\tc\\bgi");
	axes();
	draw_poly(p,n,15);
	draw_poly(temp,n,14);
	break;

      case 4:
	shearing(p,temp,n);
	cleardevice();
	closegraph();
	clrscr();
	initgraph(&gd,&gm,"e:\\tc\\bgi");
	axes();
	draw_poly(p,n,15);
	draw_poly(temp,n,14);
	break;

      case 5:
	reflect(p,temp,n);
	cleardevice();
	closegraph();
	clrscr();
	initgraph(&gd,&gm,"e:\\tc\\bgi");
	axes();
	draw_poly(p,n,15);
	draw_poly(temp,n,14);
	break;

      case 7:
	exit(0);
    }
  }
}


int menu()
{
  int ch;
  printf("\n\n\n\t\t\tMENU");
  printf("\n\n1.TRANSLATION \n2.SCALING \n3.ROTATION \n"
	"4.SHEAR \n5.REFLECTION \n6.MULTITRANSFORMATIONS \n7.EXIT");
  printf("\n\nEnter your choice : ");
  scanf("%d",&ch);
  return ch;
}


int submenu()
{
  int ch;
  printf("\n\n1.ALONG X AXIS \n2.ALONG Y AXIS \n 3.ALONG BOTH AXES");
  printf("\n\nEnter ur choice:");
  scanf("%d",&ch);
  return ch;
}


int ownmenu()
{
  int ch;
  printf("\n\n\n\t\t\tMENU");
  printf("\n\n1.TRANSLATION \n2.SCALING \n3.ROTATION \n4.SHEAR \n"
	  "5.REFLECTION \n6.EXIT TO PREVIOUS MENU");
  printf("\n\nEnter your choice : ");
  scanf("%d",&ch);
  return ch;
}


int get_poly(float p[][3])
{
  int n,i;
  printf("\n\nEnter the no of edges:");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    printf("\n\nCoordinates %d :-",i+1);
    scanf("%f",&p[i][0]);
    scanf("%f",&p[i][1]);
    p[i][2]=1;
  }

  p[i][0]=p[0][0];
  p[i][1]=p[0][1];
  p[i][2]=1;

  return n;
}


void draw_poly(float p[][3],int n,int col)
{
  int i;

  for(i=0;i<n;i++)
  {
    setcolor(col);
    line(p[i][0]+xorg,yorg-p[i][1],p[i+1][0]+xorg,yorg-p[i+1][1]);
  }

}


void scale(float p[][3],float SX,float SY,int n,float temp[][3])
{
  int i,j;
  float scale[3][3];
  float nw[10][3];

  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      scale[i][j]=0;

  scale[0][0]=SX;
  scale[1][1]=SY;
  scale[2][2]=1;

  multiply(p,scale,nw,n);

  for(i=0;i<=n;i++)
    for(j=0;j<3;j++)
      temp[i][j]=nw[i][j];
}


void multiply(float p[][3],float scale[][3],float nw[][3],int n)
{
  int i,j,k;

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      nw[i][j]=0;
      for(k=0;k<3;k++)
      {
	nw[i][j]+=p[i][k]*scale[k][j];
      }
    }
  }

  nw[i][0]=nw[0][0];
  nw[i][1]=nw[0][1];
  nw[i][2]=1;
}


void trans(float p[][3],int x1,int y1,int x2,int y2,int n,float temp[][3])
{
  float trans[3][3],nw[10][3];
  int TX=x2-x1;
  int TY=y2-y1;
  int i,j;

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(i==j)
	trans[i][j]=1;
      else
	trans[i][j]=0;
    }
  }

  trans[2][0]=TX;
  trans[2][1]=TY;

  multiply(p,trans,nw,n);

  for(i=0;i<=n;i++)
    for(j=0;j<3;j++)
      temp[i][j]=nw[i][j];
}


void rota(float p[][3],int n,int angle,float temp[][3])
{
  int i,j;
  float rot[3][3],nw[10][3];

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(i==j)
	rot[i][j]=1;
      else
	rot[i][j]=0;
    }
  }

  rot[0][0]=cos(M_PI/180*angle);
  rot[0][1]=sin(M_PI/180*angle);
  rot[1][0]=-sin(M_PI/180*angle);
  rot[1][1]=cos(M_PI/180*angle);

  multiply(p,rot,nw,n);

  for(i=0;i<=n;i++)
    for(j=0;j<3;j++)
      temp[i][j]=nw[i][j];
}


void shear(float p[][3],int n,float SHX,float SHY,float temp[][3])
{
  float shear[3][3],nw[10][3];
  int i,j;

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(i==j)
	shear[i][j]=1;
      else
	shear[i][j]=0;
    }
  }

  shear[1][0]=SHX;
  shear[0][1]=SHY;

  multiply(p,shear,nw,n);

  for(i=0;i<=n;i++)
    for(j=0;j<3;j++)
      temp[i][j]=nw[i][j];
}


void reflection(float p[][3],int n,float temp[][3],int l)
{
  float ref[3][3],nw[10][3];
  int i,j;

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(i==j)
	ref[i][j]=1;
      else
	ref[i][j]=0;
    }
  }

  if(l==2)
    ref[0][0]=-1;

  else if(l==3)
  {
    ref[0][0]=-1;
    ref[1][1]=-1;
  }

  else if(l==1)
    ref[1][1]=-1;

  else
  {
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
	  ref[i][j]=0;
      }
    }

    if (l==4)
    {
      ref[0][1]=1;
      ref[1][0]=1;
      ref[2][2]=1;
    }

    else if(l==5)
    {
      ref[0][1]=-1;
      ref[1][0]=-1;
      ref[2][2]=1;
    }
  }

  multiply(p,ref,nw,n);

  for(i=0;i<=n;i++)
    for(j=0;j<3;j++)
      temp[i][j]=nw[i][j];
}


void axes()
{
  int i;

  line(xorg,0,xorg,480);
  line(0,yorg,640,yorg);
  setcolor(YELLOW);

  for(i=0;i<640;i=i+10)
  {
    if(i!=xorg)
      line(i,238,i,242);
  }

  for(i=0;i<480;i=i+10)
  {
    if(i!=yorg)
      line(318,i,322,i);
  }
}


void translate(float p[][3],float temp[][3],int n)
{
  int c,x1,x2,y1,y2;
  c=submenu();

  if(c==1)
  {
    printf("\n\nEnter x coordinate from - to : ");
    scanf("%d %d",&x1,&x2);
    trans(p,x1,0,x2,0,n,temp);
  }

  else if(c==2)
  {
    printf("\n\nEnter y coordinate from - to : ");
    scanf("%d %d",&y1,&y2);
    trans(p,0,y1,0,y2,n,temp);
  }

  else if(c==3)
  {
    printf("\n\nEnter  coordinate from : ");
    scanf("%d %d",&x1,&y1);
    printf("\n\nEnter  coordinate to : ");
    scanf("%d %d",&x2,&y2);
    trans(p,x1,y1,x2,y2,n,temp);
  }
}


void scaling(float p[][3],float temp[][3],int n)
{
  int c,a,b;
  float SX,SY;
  c=submenu();

  if(c==1)
  {
    printf("\n\nEnter any fixed point :");
    scanf("%d %d",&a,&b);
    printf("\n\nEnter the scaling factor in x drection : ");
    scanf("%f",&SX);
    trans(p,a,b,0,0,n,temp);
    scale(temp,SX,1,n,temp);
    trans(temp,0,0,a,b,n,temp);
  }

  else if(c==2)
  {
    printf("\n\nEnter any fixed point :");
    scanf("%d %d",&a,&b);
    printf("\n\nEnter the scaling factor in y drection : ");
    scanf("%f",&SY);
    trans(p,a,b,0,0,n,temp);
    scale(temp,1,SY,n,temp);
    trans(temp,0,0,a,b,n,temp);
    draw_poly(temp,n,14);
    draw_poly(temp,n,0);
  }

  else if(c==3)
  {
    printf("\n\nEnter any fixed point :");
    scanf("%d %d",&a,&b);
    printf("\n\nEnter the scaling factor in x drection : ");
    scanf("%f",&SX);
    printf("\n\nEnter the scaling factor in y drection : ");
    scanf("%f",&SY);
    trans(p,a,b,0,0,n,temp);
    scale(temp,SX,SY,n,temp);
    trans(temp,0,0,a,b,n,temp);
  }
}


void rotation(float p[][3],float temp[][3],int n)
{
  int i,c,a,b,angle;

  printf("\n\nEnter any fixed point :");
  scanf("%d %d",&a,&b);
  printf("\n\nEnter the angle of rotation : ");
  scanf("%d",&angle);
  printf("\n\nEnter ur choice (clockwise/anti)(0/1):");
  scanf("%d",&c);

  trans(p,a,b,0,0,n,temp);
  rota(temp,n,(-angle),temp);
  rota(temp,n,i,temp);
  trans(temp,0,0,a,b,n,temp);
}


void shearing(float p[][3],float temp[][3],int n)
{
  int c,a,b;
  float SHX,SHY;
  c=submenu();

  if(c==1)
  {
    printf("\n\nEnter any fixed point : ");
    scanf("%d %d",&a,&b);
    printf("\n\nEnter shear factor in x direction : ");
    scanf("%f",&SHX);
    trans(p,a,b,0,0,n,temp);
    shear(temp,n,SHX,0,temp);
    trans(temp,0,0,a,b,n,temp);
  }

  else if(c==2)
  {
    printf("\n\nEnter any fixed point : ");
    scanf("%d %d",&a,&b);
    printf("\n\nEnter shear factor in y direction : ");
    scanf("%f",&SHY);
    trans(p,a,b,0,0,n,temp);
    shear(temp,n,0,SHY,temp);
    trans(temp,0,0,a,b,n,temp);
  }

  else if(c==3)
  {
    printf("\n\nEnter any fixed point : ");
    scanf("%d %d",&a,&b);
    printf("\n\nEnter shear factor in x direction : ");
    scanf("%f",&SHX);
    printf("\n\nEnter shear factor in y direction : ");
    scanf("%f",&SHY);
    trans(p,a,b,0,0,n,temp);
    shear(temp,n,SHX,SHY,temp);
    trans(temp,0,0,a,b,n,temp);
  }
}


void reflect(float p[][3],float temp[][3],int n)
{
  int c;
  float m,y,angle;

  printf("\n\n1.ABOUT X AXIS \n2.ABOUT Y AXIS \n 3.ABOUT ORIGIN \n"
	  "4.ABOUT X=Y \n5.ABOUT X=-Y \n6.SOME OTHER LINE");
  printf("\n\nEnter ur choice:");
  scanf("%d",&c);
  if(c<6)
    reflection(p,n,temp,c);

  else if(c==6)
  {
    printf("\n\nEnter slope of line : ");
    scanf("%f",&m);
    printf("\n\nEnter Y intercept:");
    scanf("%d",&y);
    angle=atan(m);
    trans(p,0,m,0,0,n,temp);
    rota(temp,(-angle),n,temp);
    reflection(temp,n,temp,0);
    rota(temp,angle,n,temp);
    trans(temp,0,0,0,m,n,temp);
  }
}