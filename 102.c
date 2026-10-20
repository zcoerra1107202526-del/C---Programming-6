
#include<stdio.h>
void main()
{
    int i, j;

    clrscr();

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 9; j++)
        {
            if(j == 6-i || j == 4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for(i = 4; i >= 1; i--)
    {
        for(j = 1; j <= 9; j++)
        {
            if(j == 6-i || j == 4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n HAPPY DIWALI!");

    getch();
}
