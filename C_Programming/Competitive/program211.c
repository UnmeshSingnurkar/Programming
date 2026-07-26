#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        printf("*\t");
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);
    printf("\n");

    return 0; 
}