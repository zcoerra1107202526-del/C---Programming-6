#include<stdio.h>
void main()
{
  int n;
clrscr();

printf("Enter a number:");
scanf("%d",&n);

    if(n > 0)
        printf("Positive Number");
    else if(n < 0)
        printf("Negative Number");
    else
        printf("Number is Zero");

    getch();
}
