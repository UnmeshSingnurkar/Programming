//Accept a number from user and print that no of *

#include<stdio.h>

void Display(int iNo)
{
    //Write updator
    while(iNo > 0)
    {
        printf("*");
        iNo--;
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