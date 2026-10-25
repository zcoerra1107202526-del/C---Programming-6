
#include<stdio.h>
#include<string.h>

void robotMove(char command[])
{
    if(strcmp(command, "PICK") == 0)
    {
        printf("\nRobot Arm: Picking Object");
    }
    else if(strcmp(command, "PLACE") == 0)
    {
        printf("\nRobot Arm: Placing Object");
    }
    else if(strcmp(command, "ROTATE") == 0)
    {
        printf("\nRobot Arm: Rotating");
    }
    else if(strcmp(command, "STOP") == 0)
    {
        printf("\nRobot Arm: Movement Stopped");
    }
    else
    {
        printf("\nInvalid Command!");
    }
}

void main()
{
    char command[20];

    clrscr();

    printf("ROBOTIC ARM SIMULATOR\n");
    printf("Commands: PICK, PLACE, ROTATE, STOP\n");
    printf("Enter command: ");

    scanf("%19s", command);

    robotMove(command);

    getch();
}
