#include <stdio.h>
void main()
{
    int i, battery;

    clrscr();

    printf("ROBOT BATTERY MONITOR\n");
    printf("---------------------\n");

    for(i = 1; i <= 4; i++)
    {
        printf("\nEnter battery level for robot %d (0-100): ", i);
        scanf("%d", &battery);

        if(battery < 0 || battery > 100)
            printf("Invalid battery reading\n");
        else if(battery <= 20)
            printf("Robot %d: LOW BATTERY\n", i);
        else if(battery <= 50)
            printf("Robot %d: MEDIUM BATTERY\n", i);
        else
            printf("Robot %d: BATTERY NORMAL\n", i);
    }

    printf("\nBattery monitoring completed.");
    getch();
}
