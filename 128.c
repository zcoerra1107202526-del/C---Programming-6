
#include<stdio.h>
#include<string.h>

void trafficSignal(char signal[])
{
    if(strcmp(signal, "RED") == 0)
    {
        printf("\nSTOP! Vehicles must wait.");
    }
    else if(strcmp(signal, "YELLOW") == 0)
    {
        printf("\nCAUTION! Prepare to stop.");
    }
    else if(strcmp(signal, "GREEN") == 0)
    {
        printf("\nGO! Vehicles can move.");
    }
    else
    {
        printf("\nInvalid Signal!");
    }
}

void main()
{
    char signal[10];

    clrscr();

    printf("SMART TRAFFIC SIGNAL SYSTEM\n");
    printf("Enter Signal (RED/YELLOW/GREEN): ");
    scanf("%9s", signal);

    trafficSignal(signal);

    getch();
}
