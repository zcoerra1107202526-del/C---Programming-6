
#include<stdio.h>

float averageSpeed(int speed[])
{
    int i, sum = 0;

    for(i = 0; i < 5; i++)
    {
        sum = sum + speed[i];
    }

    return sum / 5.0;
}

void main()
{
    int motor[5], i;
    float avg;

    clrscr();

    printf("Enter 5 motor speed readings in RPM:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &motor[i]);
    }

    avg = averageSpeed(motor);

    printf("\nAverage Motor Speed = %.2f RPM", avg);

    getch();
}
