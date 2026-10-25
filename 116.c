
#include<stdio.h>

void checkBattery(int battery)
{
    if(battery >= 70)
    {
        printf("\nBattery Status: Excellent");
    }
    else if(battery >= 40)
    {
        printf("\nBattery Status: Normal");
    }
    else if(battery >= 20)
    {
        printf("\nBattery Status: Low");
    }
    else
    {
        printf("\nBattery Status: Critical");
    }
}

void main()
{
    int battery;

    clrscr();

    printf("ROBOT BATTERY MONITOR\n");
    printf("Enter battery percentage: ");
    scanf("%d", &battery);

    if(battery >= 0 && battery <= 100)
    {
        checkBattery(battery);
    }
    else
    {
        printf("\nInvalid Battery Percentage!");
    }

    getch();
}
