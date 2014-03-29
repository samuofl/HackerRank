//Challenge and rules found at https://www.hackerrank.com/challenges/saveprincess
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void displayPathtoPrincess(int n, char grid[n][n]);

int main(void) {
    int m;
    scanf("%d", &m);
    char grid[m][m];
    char line[m];

    for(int i=0; i<m; i++) {
        scanf("%s", line);
        strncpy(grid[i], line, m);
    }
    displayPathtoPrincess(m,grid);
    return 0;
}

void displayPathtoPrincess(int n, char grid[n][n])
{
	unsigned int i;
  	unsigned int j;

  	const char bot = 'm';
  	const char princess = 'p';

  	struct posxy{
      unsigned int x;
      unsigned int y;
    };

 	struct posxy PrincessPosition;
  	struct posxy BotPosition;


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(grid[i][j] == bot)
            {
                BotPosition.x = j;
                BotPosition.y = i;
            }
            else if(grid[i][j] == princess)
            {
                PrincessPosition.x = j;
                PrincessPosition.y = i;
            }
        }
    }

    //Move robot towards princess in x axis
    while(BotPosition.x != PrincessPosition.x)
    {
        if(BotPosition.x < PrincessPosition.x)
        {
            printf("RIGHT\n");
            BotPosition.x++;
        }
        else
        {
            printf("LEFT\n");
            BotPosition.x--;
        }
    }

    while(BotPosition.y != PrincessPosition.y)
    {
        if(BotPosition.y < PrincessPosition.y)
        {
            printf("DOWN\n");
            BotPosition.y++;
        }
        else
        {
            printf("UP\n");
            BotPosition.y--;
        }
    }
}

