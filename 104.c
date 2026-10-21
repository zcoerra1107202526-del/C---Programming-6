#include <stdio.h>
void main()
{
    int angle, i;

    clrscr();

    printf("ROBOTIC ARM POSITION CHECKER\n");
    printf("----------------------------\n");

    for(i = 1; i <= 3; i++)
    {
        printf("\nEnter angle for movement %d: ", i);
        scanf("%d", &angle);

        if(angle >= 0 && angle <= 180)
            printf("Movement %d: Valid angle\n", i);
        else
            printf("Movement %d: Invalid angle\n", i);
    }

    printf("\nPosition checking completed.");
    getch();
}
