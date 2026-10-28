
#include<stdio.h>

void checkForce(float force[])
{
    int i;

    printf("\nGRIPPER FORCE ANALYSIS\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nReading %d: %.2f N - ",
               i + 1, force[i]);

        if(force[i] < 10)
        {
            printf("Weak Grip");
        }
        else if(force[i] <= 30)
        {
            printf("Normal Grip");
        }
        else
        {
            printf("Excessive Force");
        }
    }
}

void main()
{
    float force[5];
    int i;

    clrscr();

    printf("ROBOTIC GRIPPER FORCE MONITOR\n");
    printf("Enter 5 force readings in Newtons:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%f", &force[i]);
    }

    checkForce(force);

    getch();
}
