//Accept a number from user and print that no of *

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    //Writer Updater
    while(iCnt<iNo)
    {
        printf("*");
        iCnt++;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}