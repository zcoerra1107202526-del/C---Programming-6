#include<stdio.h>
#include<string.h>
void main()
{
  char password[20];
clrscr();

printf("Enter password:");
scanf("%s",&password);

if(strcmp(password,"ROBOT@123")==0)
{
printf("Access Granted!");
}
else
{
printf("Access Denied");
}
getch();
}
