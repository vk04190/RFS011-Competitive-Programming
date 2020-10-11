#include <conio.h>
#include <stdio.h>
#include <string.h>

char msg[] = "this is a test";
char buf[20];
FILE *stream;
char s[]="a searching example";
char p[]="";
int bforce(int m,int n);
int ofile();

void main(void)
{
	int m,n,x;
	clrscr();

//	printf("Enter a string to search: ");
//	gets(p);
	ofile();
	n=strlen(buf);
	m=strlen(p);
	x=bforce(m,n);
	printf("%d",x);

	getch();
}

int bforce(int m,int n)
{
	int i,j;

	i=j=0;

	while((i<n)&&(j<m))
	{
		if(s[i]==p[j])
		{
			j++;i++;
		}
		else
		{
			i=i-j+1;j=0;
		}

	}
			if(j==m)
				return i-j;
			else
				return -1;
}

int ofile()
{
	if ((stream = fopen("z:\test.txt", "w+"))== NULL)
	{
	   fprintf(stderr, "Cannot open output file.\n");
	   return 1;
	}

/* write some data to the file */
//	fwrite(msg, strlen(msg)+1, 1, stream);

/* seek to the beginning of the file */
	fseek(stream, SEEK_SET, 0);

/* read the data and display it */
	fread(buf, strlen(msg)+1, 1, stream);
	printf("%s\n", buf);

	fclose(stream);
	return 0;
}