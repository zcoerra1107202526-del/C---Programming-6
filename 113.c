
#include<stdio.h>

int findHighest(int a[])
{
    int i, max;

    max = a[0];

    for(i = 1; i < 5; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}

void main()
{
    int sensor[5], i;

    clrscr();

    printf("Enter 5 sensor readings:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &sensor[i]);
    }

    printf("\nHighest Sensor Reading = %d",
           findHighest(sensor));

    getch();
}
