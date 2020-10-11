#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#define MAXC 320
#define MAXR 200
#define RED 2
#define BLACK 0
void drawball(int,int,unsigned char);
void putpt(int,int,unsigned char);

void main(void)
	{
		int x=10,y=10,dx=4,dy=4;
		while(kbhit()==0)
		{
		x+=dx; y+=dy;
		if(x<10 || x>MAXC-20) dx *=-1;
		if(y<10 || y>MAXR-20) dy *=-1;
		drawball(x,y,RED);
		drawball(x,y,BLACK);
	}

	void drawball(int col,int row,unsigned char color)
		{
		unsigned int mask;
		int x,y dotpat;

		static int ball[16] =
		{
			OxO7EO,Ox1FF8,Ox3FFC,Ox7FFE,
			Ox7FFE,OxFFFF,OxFFFF,OxFFFF,
			OxFFFF,OxFFFF,OxFFFF,Ox7FFE,
			Ox7FFE,Ox3FFC,Ox1FF8,OxO7EO};
		 for(y=0;y<16;y++)
		 {
			dotpat=ball[y];
			mask=Ox8000;
			for(x=0; x<16; x++)
			{
			if(mask & dotpat)
			putpt(cl+x, rowy, color);
			mask >>= 1;
			}
			}

			}
#define BYTES 40
#define BANK 8192-BYTES
void putpt(int col,int row,unsigned char color)
{
int addr,j,btpos;
int mask=OxFF3f;
unsigned char temp;
unsigned char far *farptr;

farptr = (char far *) OxB8000000;
adr=row*BYTES+(col>>2);
if(row & 1)
addr+=BANK;
color <<=6;
bitpos=col & Ox03;
for(j=0; j<bitpos; j++)
{
mask >>=2;
color >>=2;
}
}
temp=*(farptr+addr) &(char) mask;
*(farptr+addr)=temp | color;
}