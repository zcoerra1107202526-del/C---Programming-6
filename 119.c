#include<stdio.h>

void checkSlots(int slots[])
{
    int i, available = 0;

    printf("\nParking Slot Status:\n");

    for(i = 0; i < 5; i++)
    {
        if(slots[i] == 0)
        {
            printf("Slot %d: Available\n", i + 1);
            available++;
        }
        else
        {
            printf("Slot %d: Occupied\n", i + 1);
        }
    }

    printf("\nAvailable Slots = %d", available);
}

void main()
{
    int slots[5], i;

    clrscr();

    printf("SMART ROBOT PARKING SYSTEM\n");
    printf("Enter 0 for Empty, 1 for Occupied\n");

    for(i = 0; i < 5; i++)
    {
        printf("Slot %d: ", i + 1);
        scanf("%d", &slots[i]);
    }

    checkSlots(slots);

    getch();
}
