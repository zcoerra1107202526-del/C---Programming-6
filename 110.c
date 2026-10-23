#include<stdio.h>
void main()
{
  int battery;
clrscr();

printf("Enter robot battery percentage:");
scanf("%d",&battery);

if(battery>=50)
{
printf("Robot is ready to work");
}
else
{
printf("Robot needs charging!");
}
getch();
}
