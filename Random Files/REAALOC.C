		     /*USING REALLOC*/
  #include<stdio.h>
  #include<conio.h>
  #include<stdlib.h>
  #include<string.h>

  #define NULL 0

  main()
   {
    char *buffer;
    clrscr();
    if((buffer=(char *)malloc(10))==NULL)
      {
       printf("MALLOC FAILED");
       exit(0);
      }
    printf("BUFFER OF SIZE %d CREATED\n",sizeof(buffer));
    strcpy(buffer,"INDIA");
    printf("\nbuffer contains %s\n",buffer);
    if((buffer=(char *)realloc(buffer,25))==NULL)
       {
	printf("REALLOC FAILED");
       exit(0);
      }
    printf("BUFFER SIZE MODIFIED");
    printf("\nBUFFER STILL CONTAINS %s\n",buffer);
    strcpy(buffer,"SANDEEP");
    printf("BUFFER NOW CONTAINS %s\n",buffer);
    free(buffer);
    getch();
  }


