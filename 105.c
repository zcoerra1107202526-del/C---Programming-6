#include <stdio.h>
void main()
{
    int i, weight;

    clrscr();

    printf("CONVEYOR BELT INSPECTION SYSTEM\n");
    printf("--------------------------------\n");

    for(i = 1; i <= 5; i++)
    {
        printf("\nEnter weight of item %d in grams: ", i);
        scanf("%d", &weight);

        if(weight >= 100 && weight <= 500)
            printf("Item %d: ACCEPTED\n", i);
        else
            printf("Item %d: REJECTED\n", i);
    }

    printf("\nInspection completed.");
    getch();
}
