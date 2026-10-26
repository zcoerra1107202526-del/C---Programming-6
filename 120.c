#include<stdio.h>


void controlSpeed(int speed)
{
    if(speed == 0)
    {
        printf("\nRobot Status: Stopped");
    }
    else if(speed <= 30)
    {
        printf("\nRobot Status: Slow Movement");
    }
    else if(speed <= 70)
    {
        printf("\nRobot Status: Normal Movement");
    }
    else
    {
        printf("\nRobot Status: Fast Movement");
    }
}

void main()
{
    int speed, i;

    clrscr();

    printf("ROBOT SPEED CONTROLLER\n");

    for(i = 1; i <= 3; i++)
    {
        printf("\nEnter speed (0-100): ");
        scanf("%d", &speed);

        if(speed >= 0 && speed <= 100)
        {
            controlSpeed(speed);
        }
        else
        {
            printf("Invalid speed!");
        }
    }

    getch();
}
