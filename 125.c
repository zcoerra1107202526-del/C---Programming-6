#include<stdio.h>


void checkEnvironment(float temp, float humidity)
{
    if(temp >= 20 && temp <= 30 &&
       humidity >= 40 && humidity <= 70)
    {
        printf("\nEnvironment Status: OPTIMAL");
    }
    else if(temp > 30 || humidity > 70)
    {
        printf("\nEnvironment Status: TOO HOT OR HUMID");
    }
    else
    {
        printf("\nEnvironment Status: NEEDS ATTENTION");
    }
}

void main()
{
    float temp, humidity;

    clrscr();

    printf("SMART GREENHOUSE MONITOR\n");

    printf("Enter Temperature in Celsius: ");
    scanf("%f", &temp);

    printf("Enter Humidity Percentage: ");
    scanf("%f", &humidity);

    checkEnvironment(temp, humidity);

    getch();
}
