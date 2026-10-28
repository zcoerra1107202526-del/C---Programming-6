
#include<stdio.h>
#include<string.h>

void analyzePath(char direction[][10])
{
    int i;
    int up = 0, down = 0;
    int left = 0, right = 0;

    for(i = 0; i < 5; i++)
    {
        if(strcmp(direction[i], "UP") == 0)
        {
            up++;
        }
        else if(strcmp(direction[i], "DOWN") == 0)
        {
            down++;
        }
        else if(strcmp(direction[i], "LEFT") == 0)
        {
            left++;
        }
        else if(strcmp(direction[i], "RIGHT") == 0)
        {
            right++;
        }
    }

    printf("\nROBOT PATH ANALYSIS\n");
    printf("UP Movements = %d", up);
    printf("\nDOWN Movements = %d", down);
    printf("\nLEFT Movements = %d", left);
    printf("\nRIGHT Movements = %d", right);
}

void main()
{
    char direction[5][10];
    int i;

    clrscr();

    printf("AUTONOMOUS ROBOT PATH ANALYZER\n");
    printf("Enter 5 directions (UP/DOWN/LEFT/RIGHT):\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%9s", direction[i]);
    }

    analyzePath(direction);

    getch();
}
