#include<stdio.h>
void DisplayACII()
{
    int iValue = 0;
    char ch;

    printf("Enter the Character : ");
    scanf("%d",&iValue);
    printf("%c\n",iValue);
}

int main()
{
    DisplayACII();

    return 0;
}