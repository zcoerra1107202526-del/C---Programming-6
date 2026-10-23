#include<stdio.h>
#include<stdio.h>
void main()
{
  int angle,i;
clrscr();

    printf("ROBOTIC ARM SIMULATOR\n");
    printf("Enter arm angle (0 to 180): ");
    scanf("%d", &angle);

    if(angle >= 0 && angle <= 180)
    {
        for(i = 0; i <= angle; i += 30)
        {
            printf("Arm position: %d degrees\n", i);
        }

        printf("Movement completed!");
    }
    else
    {
        printf("Invalid angle!");
    }

    getch();
}
