//Accept two number from user and display first number  in second number of times

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iNt = 0;   

    for(iNt = 1; iNt <= iFrequency; iNt++)
    {
        printf("%d\n",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCnt = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    printf("Enter Frequency : ");
    scanf("%d",&iCnt);

    Display(iValue,iCnt);

    return 0;

}