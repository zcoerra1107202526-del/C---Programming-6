#include<stdio.h>


void checkCharging(int battery[])
{
    int i, charging = 0;

    printf("\nROBOT CHARGING STATUS\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nRobot %d: ", i + 1);

        if(battery[i] < 30)
        {
            printf("Charging Required");
            charging++;
        }
        else if(battery[i] < 80)
        {
            printf("Battery Normal");
        }
        else
        {
            printf("Battery Full");
        }
    }

    printf("\n\nRobots Requiring Charge = %d", charging);
}

void main()
{
    int battery[5], i;

    clrscr();

    printf("ROBOT CHARGING STATION\n");
    printf("Enter battery levels of 5 robots:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &battery[i]);
    }

    checkCharging(battery);

    getch();
}
