#include<stdio.h>
#include<string.h>

void moveRobot(char direction[])
{
    if(strcmp(direction, "UP") == 0)
    {
        printf("\nRobot Moving UP");
    }
    else if(strcmp(direction, "DOWN") == 0)
    {
        printf("\nRobot Moving DOWN");
    }
    else if(strcmp(direction, "LEFT") == 0)
    {
        printf("\nRobot Moving LEFT");
    }
    else if(strcmp(direction, "RIGHT") == 0)
    {
        printf("\nRobot Moving RIGHT");
    }
    else
    {
        printf("\nInvalid Direction!");
    }
}

void main()
{
    char direction[10];
    int i;

    clrscr();

    printf("ROBOT MAZE SIMULATOR\n");
    printf("Commands: UP DOWN LEFT RIGHT\n");

    for(i = 1; i <= 3; i++)
    {
        printf("\nEnter Direction: ");
        scanf("%9s", direction);

        moveRobot(direction);
    }

    getch();
}
