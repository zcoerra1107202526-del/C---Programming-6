#include<stdio.h>

void inspectObjects(float size[])
{
    int i, pass = 0, fail = 0;

    for(i = 0; i < 5; i++)
    {
        printf("\nObject %d: ", i + 1);

        if(size[i] >= 9.5 && size[i] <= 10.5)
        {
            printf("PASS");
            pass++;
        }
        else
        {
            printf("FAIL");
            fail++;
        }
    }

    printf("\n\nPassed Objects = %d", pass);
    printf("\nFailed Objects = %d", fail);
}

void main()
{
    float size[5];
    int i;

    clrscr();

    printf("ROBOTIC QUALITY INSPECTION\n");
    printf("Enter 5 object sizes in mm:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%f", &size[i]);
    }

    inspectObjects(size);

    getch();
}
