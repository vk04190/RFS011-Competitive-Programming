#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<dos.h>

class Kite
{
	int vertex[5][5];
	int prev_ver[5][5];
	int rad;
public:
	Kite()
	{
		vertex[0][0]=300;
		vertex[0][1]=100;
		vertex[1][0]=250;
		vertex[1][1]=150;
		vertex[2][0]=300;
		vertex[2][1]=200;
		vertex[3][0]=350;
		vertex[3][1]=150;
		vertex[4][0]=300;
		vertex[4][1]=100;
		setcolor(2);

		rad=50;
		draw_kite(vertex,rad);

	}
	void draw_kite(int a[5][5],int rad);
	void move_kite();
	void draw_tail();
	void erase_tail();
};


void Kite::draw_kite(int vertex[5][5],int rad)
{
	int flag=1;
	int i;
	for(i=0;i<5;i++)
	{
		if(i==0)
		{
			moveto(vertex[i][0],vertex[i][1]);
		}
		else
			lineto(vertex[i][0],vertex[i][1]);
	}
	moveto(vertex[0][0],vertex[0][1]);
	lineto(vertex[2][0],vertex[2][1]);
	moveto(vertex[1][0],vertex[1][1]);
	lineto(vertex[3][0],vertex[3][1]);
	moveto(vertex[2][0],vertex[2][1]);
	//arc(vertex[2][0]+41,vertex[2][1]+24,150,210,rad);
	//arc(vertex[2][0]-44,vertex[2][1]+74,330,30,rad);
	flag=getcolor();
	if(flag!=0)
	draw_tail();
	else erase_tail();
}


void Kite::draw_tail()
{
	int startx=vertex[2][0];
	int starty=vertex[2][1];
	int i,j;
	static int count=0;

	if(count<10)
	{
	for(i=0;i<5;i++)
	{
		putpixel(startx,starty++,2);
		putpixel(startx+1,starty++,2);
		putpixel(startx+1,starty++,2);
		putpixel(startx+1,starty++,2);
		putpixel(startx+2,starty++,2);
		putpixel(startx+2,starty++,2);
		putpixel(startx+2,starty++,2);
		putpixel(startx+3,starty++,2);
		putpixel(startx+3,starty++,2);
		putpixel(startx+3,starty++,2);
		putpixel(startx+4,starty++,2);
		putpixel(startx+4,starty++,2);
		putpixel(startx+4,starty++,2);
		putpixel(startx+3,starty++,2);
		putpixel(startx+3,starty++,2);
		putpixel(startx+3,starty++,2);
		putpixel(startx+2,starty++,2);
		putpixel(startx+2,starty++,2);
		putpixel(startx+2,starty++,2);
		putpixel(startx+1,starty++,2);
		putpixel(startx+1,starty++,2);
		putpixel(startx+1,starty++,2);
		putpixel(startx+1,starty++,2);

	}
	count++;
	}

	else
	{
	for(i=0;i<5;i++)
	{
		putpixel(startx,starty++,2);
		putpixel(startx-1,starty++,2);
		putpixel(startx-2,starty++,2);
		putpixel(startx-3,starty++,2);
		putpixel(startx-4,starty++,2);
		putpixel(startx-4,starty++,2);
		putpixel(startx-4,starty++,2);
		putpixel(startx-3,starty++,2);
		putpixel(startx-3,starty++,2);
		putpixel(startx-4,starty++,2);
		putpixel(startx-4,starty++,2);
		putpixel(startx-4,starty++,2);
		putpixel(startx-5,starty++,2);
		putpixel(startx-4,starty++,2);
		putpixel(startx-5,starty++,2);
		putpixel(startx-3,starty++,2);
		putpixel(startx-2,starty++,2);
		putpixel(startx-2,starty++,2);
		putpixel(startx-2,starty++,2);
		putpixel(startx-2,starty++,2);
		putpixel(startx-1,starty++,2);
		putpixel(startx-1,starty++,2);
		putpixel(startx-1,starty++,2);
	}
	count++;
	if(count==20)
	count=0;

	}

}

void Kite::erase_tail()
{
	int startx=prev_ver[2][0];
	int starty=prev_ver[2][1];
	int i,j;
	static int count=0;
	if(count<10)
	{
	for(i=0;i<10;i++)
	{
		putpixel(startx,starty++,0);
		putpixel(startx+1,starty++,0);
		putpixel(startx+1,starty++,0);
		putpixel(startx+1,starty++,0);
		putpixel(startx+2,starty++,0);
		putpixel(startx+2,starty++,0);
		putpixel(startx+2,starty++,0);
		putpixel(startx+3,starty++,0);
		putpixel(startx+3,starty++,0);
		putpixel(startx+3,starty++,0);
		putpixel(startx+4,starty++,0);
		putpixel(startx+4,starty++,0);
		putpixel(startx+4,starty++,0);
		putpixel(startx+3,starty++,0);
		putpixel(startx+3,starty++,0);
		putpixel(startx+3,starty++,0);
		putpixel(startx+2,starty++,0);
		putpixel(startx+2,starty++,0);
		putpixel(startx+2,starty++,0);
		putpixel(startx+1,starty++,0);
		putpixel(startx+1,starty++,0);
		putpixel(startx+1,starty++,0);
		putpixel(startx+1,starty++,0);
	}
	count++;
	}
	else
	{
	for(i=0;i<5;i++)
	{
		putpixel(startx,starty++,0);
		putpixel(startx-1,starty++,0);
		putpixel(startx-2,starty++,0);
		putpixel(startx-3,starty++,0);
		putpixel(startx-4,starty++,0);
		putpixel(startx-4,starty++,0);
		putpixel(startx-4,starty++,0);
		putpixel(startx-3,starty++,0);
		putpixel(startx-3,starty++,0);
		putpixel(startx-4,starty++,0);
		putpixel(startx-4,starty++,0);
		putpixel(startx-4,starty++,0);
		putpixel(startx-5,starty++,0);
		putpixel(startx-4,starty++,0);
		putpixel(startx-5,starty++,0);
		putpixel(startx-3,starty++,0);
		putpixel(startx-2,starty++,0);
		putpixel(startx-2,starty++,0);
		putpixel(startx-2,starty++,0);
		putpixel(startx-2,starty++,0);
		putpixel(startx-1,starty++,0);
		putpixel(startx-1,starty++,0);
		putpixel(startx-1,starty++,0);
	}

	count++;
	if(count==20)
		count=0;
	}



}





void Kite::move_kite()
{
	int i,j;

	for(j=0;j<100;j++)
	{
		for(i=0;i<5;i++)
		{
		prev_ver[i][0]=vertex[i][0];
		prev_ver[i][1]=vertex[i][1];
		rad=rad;
		}
		for(i=0;i<5;i++)
		{
		vertex[i][0]+=2;
		vertex[i][1]+=1;
		}

		setcolor(2);
		draw_kite(vertex,rad);

		setcolor(BLACK);
		draw_kite(prev_ver,rad);

		setcolor(2);
		moveto(vertex[1][0],vertex[1][1]);
		lineto(vertex[3][0],vertex[3][1]);
		delay(50);
	}

	for(j=0;j<100;j++)
	{
		for(i=0;i<5;i++)
		{
		prev_ver[i][0]=vertex[i][0];
		prev_ver[i][1]=vertex[i][1];
		}

		for(i=0;i<5;i++)
		{
		vertex[i][0]-=3;
		vertex[i][1]-=1;
		}
		setcolor(2);
		draw_kite(vertex,rad);
		setcolor(BLACK);
		draw_kite(prev_ver,rad);
		setcolor(2);
		moveto(vertex[1][0],vertex[1][1]);
		lineto(vertex[3][0],vertex[3][1]);
		delay(50);
	}


}



int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"d:\\tc\\bgi");
	Kite k;
	k.move_kite();
	getch();
	return 0;
}