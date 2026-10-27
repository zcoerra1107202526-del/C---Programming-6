#include<stdio.h>


void sortObjects(float weight[])
{
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("\nObject %d (%.2f kg): ",
               i + 1, weight[i]);

        if(weight[i] < 2)
        {
            printf("LIGHT OBJECT");
        }
        else if(weight[i] <= 5)
        {
            printf("MEDIUM OBJECT");
        }
        else
        {
            printf("HEAVY OBJECT");
        }
    }
}

void main()
{
    float weight[5];
    int i;

    clrscr();

    printf("CONVEYOR BELT SORTING SYSTEM\n");
    printf("Enter weight of 5 objects in kg:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%f", &weight[i]);
    }

    sortObjects(weight);

    getch();
}
