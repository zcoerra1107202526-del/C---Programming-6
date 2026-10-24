
#include<stdio.h>

int countObstacles(int d[])
{
    int i, count = 0;

    for(i = 0; i < 5; i++)
    {
        if(d[i] <= 20)
        {
            count++;
        }
    }

    return count;
}

void main()
{
    int distance[5], i;

    clrscr();

    printf("Enter 5 distance readings in cm:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &distance[i]);
    }

    printf("\nObstacle Detections = %d",
           countObstacles(distance));

    getch();
}
