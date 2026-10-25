
#include<stdio.h>

int scanObstacles(int distance[])
{
    int i, count = 0;

    for(i = 0; i < 5; i++)
    {
        if(distance[i] <= 15)
        {
            count++;
        }
    }

    return count;
}

void main()
{
    int distance[5], i, count;

    clrscr();

    printf("SMART ROBOT OBSTACLE SCANNER\n");
    printf("Enter 5 distance readings in cm:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &distance[i]);
    }

    count = scanObstacles(distance);

    printf("\nObstacles detected: %d", count);

    if(count >= 3)
    {
        printf("\nWarning: Obstacle-Rich Path!");
    }
    else if(count > 0)
    {
        printf("\nCaution: Obstacles Present!");
    }
    else
    {
        printf("\nPath appears clear.");
    }

    getch();
}
