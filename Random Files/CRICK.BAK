#include<stdio.h>
#include<conio.h>
#define TEAM 3
#define PLAYER 11
#define SIZE 20

char** get_team_names(char** );
char** team_mem_alloc(char** );
char*** player_mem_alloc(char*** );
char*** get_player_names(char*** ,char** );
void display_team_n_player_names(char** ,char*** );
char** sort_team(char**);
char*** sort_player(char***);
void dealloc_player_mem(char*** s);
void dealloc_team_mem(char** q);

main()
{
	char ***s=NULL,**q=NULL;
	clrscr();
	q=team_mem_alloc(q);
	s=player_mem_alloc(s);
	q=get_team_names(q);
	q=sort_team(q);
	s=get_player_names(s,q);
	s=sort_player(s);

	display_team_n_player_names(q,s);
	dealloc_team_mem(q);
	dealloc_player_mem(s);

	getch();
	return 0;
}

void dealloc_team_mem(char** q)
{
	int i;
	for(i=0;i<TEAM;i++)
		free(q[i]);
	free(q);
	q=NULL;
}

void dealloc_player_mem(char*** s)
{
	int i,j;
	for(i=0;i<TEAM;i++)
	{
		for(j=0;j<PLAYER;j++)
		{
			free(s[i][j]);
		}
	}
	free(s);
	s=NULL;
}

char*** sort_player(char*** s)
{
	int i,j,k;
	char*temp;
	for(i=0;i<TEAM;i++)
	{
		for(j=0;j<PLAYER-1;j++)
		{
			for(k=j+1;k<PLAYER;k++)
			{
			   if(strcmp(s[i][j],s[i][k])>0)
			   {
					temp=s[i][j];
					s[i][j]=s[i][k];
					s[i][k]=temp;
			   }
			}
		}
	}
	return s;
}

char** sort_team(char** q)
{
	int i,j;
	char* temp;
	for(i=0;i<TEAM-1;i++)
	{
		for(j=i+1;j<TEAM;j++)
		{
			if(strcmp(q[i],q[j])>0)
			{
				temp=q[i];
				q[i]=q[j];
				q[j]=temp;
			}
		}
	}
	return q;
}



void display_team_n_player_names(char** q,char*** s)
{
	int i,j;
	for(i=0;i<TEAM;i++)
	{
		clrscr();
		printf("\nfor team %s\t",q[i]);
		for(j=0;j<PLAYER;j++)
		{
			printf("\n\n\n");
			printf("%s",s[i][j]);
		}
		getch();
	}
}




char*** get_player_names(char*** s,char** q)
{
	int i,j;
	for(i=0;i<TEAM;i++)
	{
		clrscr();
		printf("\n\n\nEnter %d players for team %s\t",PLAYER,q[i]);
		for(j=0;j<PLAYER;j++)
		{
			printf("\n\nEnter the %d player name\t",j+1);
			fflush(stdin);
			scanf("%[^\n]s",s[i][j]);
		}
	}
	return s;
}


char** get_team_names(char** q)
{
	int i;
	printf("Enter the team names\n\n");
	for(i=0;i<TEAM;i++)
	{
		printf("Enter the team %d name",i+1);
		fflush(stdin);
		scanf("%[^\n]s",q[i]);
	}
	return q;
}


char*** player_mem_alloc(char*** s)
{
		int i,j;
		s=(char***)malloc(sizeof(char**)*TEAM);
		for(i=0;i<TEAM;i++)
			s[i]=(char**)malloc(sizeof(char*)*PLAYER);
		for(i=0;i<TEAM;i++)
		{
			for(j=0;j<PLAYER;j++)
			{
				s[i][j]=(char*)malloc(sizeof(char)*SIZE);
			}
		}
		return s;
}

char** team_mem_alloc(char** q)
{
	int i;
	q=(char**)malloc(TEAM*sizeof(char*));

	for(i=0;i<TEAM;i++)
		q[i]=(char*)malloc(sizeof(char)*SIZE);
	return q;
}