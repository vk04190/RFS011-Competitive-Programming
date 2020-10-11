
/*     PROGRAM : 2-D TRANSFORMATIONS OF POLYGON INCLUDING TRANSFORMATION,
		 SCALING,ROTATION,REFLECTION & SHEARING		*/

  #include <graphics.h>
  #include <stdio.h>
  #include <conio.h>
  #include <math.h>
  #include <dos.h>
  #include <stdlib.h>

  #define MAX 10
  #define Line(x1,y1,x2,y2) line(midx+x1,midy-y1,midx+x2,midy-y2)

  void print_axes();
  void init_mode();
  int midx,midy,maxx,maxy;
  float R[MAX][3];

  void main()
  {
     void multiply(float a[][3],float b[][3],float R[][3],int n);
     void draw_poly(float V[][3],int n);
     void trans_poly(float V[][3],int n);
     void scale_poly(float V[][3],int n);
     void reflect_poly(float V[][3],int n);
     void rotate_poly(float V[][3],int n);
     void shear_poly(float V[][3],int n);
     char menu();
     float V[MAX][3];
     int n,i,done=0;
     clrscr();
     printf("\n\t __________ 2-D TRANSFORMATIONS __________\n\n");
     printf("\n Enter the number of vertices of the polygon : ");
     scanf("%d",&n);
     printf("\n Enter the co-ords of the vertices as follows =>\n");
     for(i=0; i<n; i++)
     {
	printf(" Enter the co-ords of %c(x%d,y%d) : ",i+65,i+1,i+1);
	scanf("%f %f",&V[i][0],&V[i][1]);
     }
     for(i=0; i<n; i++)
	 V[i][2] = 1;
     while(!done)
     {
       switch(menu())
       {
	 case '1' : trans_poly(V,n);
		    break;

	 case '2' : scale_poly(V,n);
		    break;

	 case '3' : reflect_poly(V,n);
		    break;

	 case '4' : rotate_poly(V,n);
		    break;

	 case '5' : shear_poly(V,n);
		    break;

	 case '6' : done = 1;
		    printf("\n HAVE A NICE DAY ... \n GOOD BYE ......");
		    getch();
		    break;

	 default  : break;
       }
     }
  }



  /* Function to display menu
     Returns user's choice */

  char menu()
  {
    clrscr();
    printf("\n\t __________ 2-D TRANSFORMATIONS __________\n");
    printf("\n\t           _______ MENU _______\n");
    printf("\n [1] TRANSLATION OF A POLYGON\
	    \n [2] SCALING OF A POLYGON\
	    \n [3] REFLECTION OF A POLYGON\
	    \n [4] ROTATION OF A POLYGON\
	    \n [5] SHEARING OF A POLYGON\
	    \n [6] QUIT\
	    \n\n ENTER YOUR CHOICE : ");
    return getche();
  }



  /* Function to draw a polygon given the vertex list
     Returns nothing */

  void draw_poly(float V[MAX][3],int n)
  {
     int i;
     for(i=0; i<n-1; i++)
     {
	Line(V[i][0],V[i][1],V[i+1][0],V[i+1][1]);
     }
     Line(V[i][0],V[i][1],V[0][0],V[0][1]);
  }



  /* Function to multiply two matrices
     Returns nothing */

  void multiply(float a[][3],float b[][3],float R[][3],int n)
  {
     int i,j,k;
     for(i=0; i<n; i++)
       for(j=0; j<3; j++)
       {
	 R[i][j] = 0;
	 for(k=0; k<3; k++)
	   R[i][j] += a[i][k] * b[k][j];
       }
  }



 /* Function to translate a polygon about origin
    Returns nothing */

  void trans_poly(float V[MAX][3],int n)
  {
    float T[3][3];
    int tx,ty;
    printf("\n\n Enter the translation in x-direcn : ");
    scanf("%d",&tx);
    printf(" Enter the translation in y-direcn : ");
    scanf("%d",&ty);

    T[0][1] = T[0][2] = T[1][0] = T[2][1] = 0;
    T[0][0] = T[1][1] = T[2][2] = 1;
    T[2][0] = tx;
    T[2][1] = ty;

    init_mode();
    print_axes();
    setcolor(GREEN);
    outtextxy(50,50,"TRANSLATION OF A POLYGON");
    outtextxy(50,53,"________________________");
    setcolor(15);    draw_poly(V,n);                // original polygon
    multiply(V,T,R,n);
    setcolor(12);    draw_poly(R,n);                // translated polygon
    getch();
    closegraph();
  }



 /* Function to scale a polygon about one of the vertices
    Returns nothing */

  void scale_poly(float V[MAX][3],int n)
  {
    float S[3][3],sx,sy;
    printf("\n\n Enter the scaling in x-direcn : ");
    scanf("%f",&sx);
    printf(" Enter the scaling in y-direcn : ");
    scanf("%f",&sy);

    S[0][1] = S[0][2] = S[1][0] = S[1][2] = 0;
    S[0][0] = sx;   S[1][1] = sy;   S[2][2] = 1;
    S[2][0] = V[0][0]*(1-sx);	//Scaling about the 1st vertex entered
    S[2][1] = V[0][1]*(1-sy);

    init_mode();
    print_axes();
    setcolor(GREEN);
    outtextxy(50,50,"SCALING OF A POLYGON");
    outtextxy(50,53,"____________________");
    setcolor(15);    draw_poly(V,n);              // original polygon
    multiply(V,S,R,n);
    setcolor(12);    draw_poly(R,n);              // scaled polygon
    getch();
    closegraph();
  }



 /* Function to reflect a polygon about different lines
    Returns nothing */

  void reflect_poly(float V[MAX][3],int n)
  {
     int ch;

     float R_y[3][3] = {{-1,0,0},{0,1,0},{0,0,1}};
     float R_x[3][3] = {{1,0,0},{0,-1,0},{0,0,1}};	//Predefined
     float R_O[3][3] = {{-1,0,0},{0,-1,0},{0,0,1}};
     float R_yx[3][3] = {{0,1,0},{1,0,0},{0,0,1}};
     float R_y_x[3][3] = {{0,-1,0,},{-1,0,0},{0,0,1}};

     clrscr();
     printf("\n\t __________ REFLECTION OF A POLYGON __________\n");
     printf("\n\t        ________ SUBMENU ________\n");
     printf("\n [1] REFLECTION OF POLYGON ABOUT X-AXIS\
	     \n [2] REFLECTION OF POLYGON ABOUT Y-AXIS\
	     \n [3] REFLECTION OF POLYGON ABOUT ORIGIN\
	     \n [4] REFLECTION OF POLYGON ABOUT THE LINE Y = X\
	     \n [5] REFLECTION OF POLYGON ABOUT THE LINE Y = -X\
	     \n [6] BACK TO MAIN MENU\
	     \n\n ENTER YOUR CHOICE : ");
     scanf("%d",&ch);
     init_mode();
     print_axes();
     switch(ch)
     {
	  case 1 : setcolor(GREEN);
		   outtextxy(50,50,"REFLECTION ABOUT X-AXIS");
		   outtextxy(50,53,"_______________________");
		   setcolor(15);   draw_poly(V,n);
		   multiply(V,R_x,R,n);
		   setcolor(12);   draw_poly(R,n);
		   getch();
		   break;

	  case 2 : setcolor(GREEN);
		   outtextxy(50,50,"REFLECTION ABOUT Y-AXIS");
		   outtextxy(50,53,"_______________________");
		   setcolor(15);    draw_poly(V,n);
		   multiply(V,R_y,R,n);
		   setcolor(12);    draw_poly(R,n);
		   getch();
		   break;

	  case 3 : setcolor(GREEN);
		   outtextxy(50,50,"REFLECTION ABOUT ORIGIN");
		   outtextxy(50,53,"_______________________");
		   setcolor(15);    draw_poly(V,n);
		   multiply(V,R_O,R,n);
		   setcolor(12);    draw_poly(R,n);
		   getch();
		   break;

	  case 4 : setcolor(8); line(470,90,170,390);
		   setcolor(GREEN);
		   outtextxy(50,50,"REFLECTION ABOUT Y = X");
		   outtextxy(50,53,"______________________");
		   setcolor(15);    draw_poly(V,n);
		   multiply(V,R_yx,R,n);
		   setcolor(12);    draw_poly(R,n);
		   getch();
		   break;

	  case 5 : setcolor(8); line(170,90,470,390);
		   setcolor(GREEN);
		   outtextxy(50,50,"REFLECTION ABOUT Y = -X");
		   outtextxy(50,53,"_______________________");
		   setcolor(15);    draw_poly(V,n);
		   multiply(V,R_y_x,R,n);
		   setcolor(12);    draw_poly(R,n);
		   getch();
		   break;
     }
     closegraph();
  }



 /* Function to rotate a polygon about one of the vertices
    Returns nothing */

  void rotate_poly(float V[MAX][3],int n)
  {
     float ROT[3][3],x;
     printf("\n\n The polygon will be rotated about the first vertex entered");
     printf("\n Enter the angle by which the poly is to be rotated : ");
     scanf("%f",&x);
     x = (x * M_PI)/180;

   /* Rotation matrix is formed following three steps-
      1] Translate to origin
      2] Rotate about origin
      3] Retranslate to the point */

     ROT[0][0] = ROT[1][1] = cos(x);
     ROT[0][1] = sin(x);  ROT[1][0] = -sin(x);
     ROT[2][0] = V[0][0]*(1-cos(x)) + V[0][1]*sin(x) ;
     ROT[2][1] = V[0][1]*(1-cos(x)) - V[0][0]*sin(x) ;  //Multiplication of
     ROT[2][2] = 1;					// matrices evaluates to this


     init_mode();
     print_axes();
     setcolor(GREEN);
     outtextxy(50,50,"ROTATION OF A POLYGON");
     outtextxy(50,53,"_____________________");
     setcolor(15);   draw_poly(V,n);              // original polygon
     multiply(V,ROT,R,n);
     setcolor(12);   draw_poly(R,n);              // rotated polygon
     setcolor(3);
     outtextxy(midx+V[0][0]+3,midy-V[0][1]+3,"POINT OF ROTATION");
     getch();
     closegraph();
  }



 /* Function to rotate a polygon about one of the vertices
    Returns nothing */

  void shear_poly(float V[][3],int n)
  {
     int ch,i,j,shx,shy;
     float SH[3][3];
     for(i=0; i<3; i++)
	for(j=0; j<3; j++)
	{
	   if(i == j)
	      SH[i][j] = 1;
	   else
	      SH[i][j] = 0;
	}

     clrscr();
     printf("\n\t __________ SHEARING OF A POLYGON __________\n");
     printf("\n\t         _______ SUBMENU ________\n");
     printf("\n [1] SHEARING IN X-DIRECTION\
	     \n [2] SHEARING IN Y-DIRECTION\
	     \n [3] BACK TO MAIN MENU\
	     \n\n ENTER YOUR CHOICE : ");
     scanf("%d",&ch);
     switch(ch)
     {
	case 1 : printf("\n Enter the value of shearing factor shx = ");
		 scanf("%d",&shx);
		 SH[1][0] = shx;
		 SH[2][0] = -1*shx*V[0][1];
		 init_mode();
		 print_axes();
		 setcolor(GREEN);
		 outtextxy(50,50,"SHEARING OF POLYGON IN X-DIRECN");
		 outtextxy(50,53,"_______________________________");
		 setcolor(15);   draw_poly(V,n);
		 multiply(V,SH,R,n);
		 setcolor(12);   draw_poly(R,n);
		 getch();
		 break;

	case 2 : printf("\n Enter the value of shearing factor shy = ");
		 scanf("%d",&shy);
		 SH[0][1] = shy;
		 SH[2][1] = -1*V[0][0]*shy;
		 init_mode();
		 print_axes();
		 setcolor(GREEN);
		 outtextxy(50,50,"SHEARING OF POLYGON IN Y-DIRECN");
		 outtextxy(50,53,"_______________________________");
		 setcolor(15);    draw_poly(V,n);
		 multiply(V,SH,R,n);
		 setcolor(12);    draw_poly(R,n);
		 getch();
		 break;
     }
     closegraph();
  }



  /* Function to print the co-ordinate axes
     Returns nothing */

  void print_axes()
  {
     int i,count;
     char msg[10];
     maxx = getmaxx()+1;
     maxy = getmaxy()+1;
     midx = maxx/2;
     midy = maxy/2;
     setcolor(8);
     rectangle(0,0,maxx-1,maxy-1);
     line(midx,0,midx,maxy);
     line(0,midy,maxx,midy);
     count = -6;
     for(i=20;i<640;i+=50)
     {
	line(i,midy-2,i,midy+2);
	sprintf(msg,"%d",count*50);
	outtextxy(i-5,midy+5,msg);
	count++;
     }
     count = 4;
     for(i=40;i<480;i+=50)
     {
	line(midx-2,i,midx+2,i);
	sprintf(msg,"%d",count*50);
	outtextxy(midx+5,i-5,msg);
	count--;
     }
  }


  /* Function to initialise the graphics mode
     Returns nothing */

  void init_mode()
  {
     int gdriver = VGA, gmode = VGAHI, errorcode;
     initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
     errorcode = graphresult();
     if (errorcode != grOk)
     {
       printf("\n Graphics error: %s\n", grapherrormsg(errorcode));
       printf(" Press any key to halt ...");
       getch();
       exit(1);
     }
  }
