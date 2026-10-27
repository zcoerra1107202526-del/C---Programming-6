#include<stdio.h>


void elevator(int floor)
{
    int i;

    if(floor < 0 || floor > 10)
    {
        printf("\nInvalid Floor!");
    }
    else
    {
        printf("\nElevator Moving...\n");

        for(i = 0; i <= floor; i++)
        {
            printf("Floor %d\n", i);
        }

        printf("Elevator Reached Floor %d", floor);
    }
}

void main()
{
    int floor;

    clrscr();

    printf("SMART ELEVATOR SYSTEM\n");
    printf("Enter destination floor (0-10): ");
    scanf("%d", &floor);

    elevator(floor);

    getch();
}
