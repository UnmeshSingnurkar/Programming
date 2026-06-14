#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0, iAns = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iAns = iAns + 2;
        printf("%d\t",iAns);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of Elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}