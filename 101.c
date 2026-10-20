
#include<stdio.h>
void main()
{
    int i, j;

    clrscr();

    printf("       *");
    printf("\n      / \\");
    printf("\n     /___\\");
    printf("\n    /     \\");
    printf("\n   /_______\\");
    printf("\n   |       |");

    for(i = 1; i <= 5; i++)
    {
        printf("\n   |");
        for(j = 1; j <= 7; j++)
        {
            if(i == 1 || i == 5 || j == 1 || j == 7)
                printf("*");
            else
                printf(" ");
        }
        printf("|");
    }

    printf("\n   |_______|");
    printf("\n      ||");
    printf("\n      ||");
    printf("\n     /||\\");
    printf("\n    /_||_\\");
    printf("\n      **");

    printf("\n\n   HAPPY DIWALI!");

    getch();
}
