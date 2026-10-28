#include<stdio.h>
#include<string.h>

void sortWaste(char waste[])
{
    if(strcmp(waste, "PLASTIC") == 0)
    {
        printf("Plastic Bin");
    }
    else if(strcmp(waste, "PAPER") == 0)
    {
        printf("Paper Bin");
    }
    else if(strcmp(waste, "METAL") == 0)
    {
        printf("Metal Bin");
    }
    else if(strcmp(waste, "ORGANIC") == 0)
    {
        printf("Organic Waste Bin");
    }
    else
    {
        printf("Unknown Waste");
    }
}

void main()
{
    char waste[20];
    int i;

    clrscr();

    printf("AUTOMATED WASTE SEGREGATION ROBOT\n");
    printf("Categories: PLASTIC PAPER METAL ORGANIC\n");

    for(i = 1; i <= 3; i++)
    {
        printf("\nEnter Waste Type: ");
        scanf("%19s", waste);

        printf("Sorting Destination: ");
        sortWaste(waste);

        printf("\n");
    }

    getch();
}
