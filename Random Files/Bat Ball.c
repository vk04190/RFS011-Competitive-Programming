#include<conio.h>
#include<alloc.h>
#include<graphics.h>

#define BSPEED  2  //The speed of the ball
#define CBSPEED 2  //The speed with which comp's bat moves
#define PBSPEED 3  //The speed with which your bat moves
#define LEFT   75  //Value returned by getkey when left key is pressed
#define RIGHT  77
#define ESC     1

typedef struct BALL
 {
  int x,y,dx,dy;
 }BALL;  //structure to store various attribs of the ball

BALL Ball;
int px,cx; //the position of the bats
char *bat,*ball; //address where the images will be stored

void main()
 {
  void init_game();
  void get_bit();
  void draw_screen();
  void move_ball();
  void move_aibat();
  char getkey();
  char ch;
  init_game();       //initialize the graphics mode
  get_bit();         //store the required images in memory
  while(ch!=ESC)     //a loop which stops when esc key is pressed
   {
    draw_screen();   //draw the screen
    ch=getkey();     //check which key is being pressed
    if(ch==LEFT)
     {
      px-=PBSPEED;   //move the bat to left
      if(px<200) px=200;  //limit how far it can be moved left
     }
    if(ch==RIGHT)
     {
      px+=PBSPEED;   //move the bat to right
      if(px>440) px=440;  //limit how far it can be moved right
     }
    move_ball();     //move the ball
    move_aibat();    //move the computers bat
    delay(2);        //very bad idea where speed is concerned
    nosound();       //but it is required for sounds
   }
 }

void init_game()
 {
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
 }

void get_bit()
 {
  int l1,l2;
  bar(10,0,110,15);  //the bat is actually a filled rectangle
  fillellipse(15,31,10,10); //the ball is a filled ellipse
  l1=imagesize(0,0,112,15); //check how much memory is needed
  l2=imagesize(0,0,30,30);  //to store the images
  bat=malloc(l1);           //allocate the required amount of
  ball=malloc(l2);          //memory(VERY IMPORTANT)
  getimage(4,0,116,15,bat); //store the images in memory
  getimage(0,16,30,46,ball);
  cleardevice();            //clear the screen
 }

void draw_screen()      //draw the images at specified position
 {
  putimage(cx-56,0,bat,COPY_PUT);
  putimage(px-56,465,bat,COPY_PUT);
  putimage(Ball.x-15,Ball.y-15,ball,COPY_PUT);
  line(150,0,150,480);  //draw the bounding lines
  line(490,0,490,480);
 }

void reset()  //initialize all the required variables
 {
  sound(200); //produces sound of 200hz freq.
  Ball.x=320; //the x position of ball
  Ball.y=240; //the y position of ball
  Ball.dx=Ball.dy=1; //the direction vectors
  px=cx=320;
  cleardevice();
  draw_screen();
  delay(250);   //stops all job for 250 milliseconds
  nosound();    //stop the sound
  getch();
 }

void move_ball()
 {
  Ball.x+=Ball.dx*BSPEED; //move the ball in specified direction
  Ball.y+=Ball.dy*BSPEED; //at BSPEED
  if(Ball.x>=480)         //if ball is hit by the wall change its
   {                      //directions
    Ball.x=480;
    Ball.dx*=-1;
    sound(500);
   }
  if(Ball.x<=165)
   {
    Ball.x=165;
    Ball.dx*=-1;
    sound(500);
   }
  if(Ball.y>=455)         //check whether the ball is hit by the
   {                      //bat or not
    if((Ball.x>px-65)&&(Ball.x<px+65))//if yes change the direction
     {
      Ball.y=455;
      Ball.dy*=-1;
      sound(500);
     }
    else
     reset();    //else reset the game
   }
  if(Ball.y<=25)
   {
    if((Ball.x>cx-65)&&(Ball.x<cx+65))
     {
      Ball.y=25;
      Ball.dy*=-1;
      sound(500);
     }
    else
     reset();
   }
 }

void move_aibat()
 {
  if(Ball.dy<0) //check whether the ball is going towards
   {		//computers bat
    if(Ball.dx<0) //move the bat in the direction of the ball
     {
      cx-=CBSPEED;                    //if the bat moves to much to
      if(cx+65<Ball.x) cx+=2*CBSPEED; //the left, move it right
      if(cx<200) cx=200; //set a limit
     }
    else
     {
      cx+=CBSPEED;
      if(cx-65>Ball.x) cx-=2*CBSPEED;
      if(cx>440) cx=440;
     }
   }
 }

char getkey()
 {
  char ch;
  ch=inportb(0x60);//read the value of the key pressed from the
  if(kbhit())      //keyboard buffer if a key is pressed
   getch();        //use getch so as to remove it from buffer
  return ch;
 }
