// write a program which accept range from user and display all numbers in between that range in reverse order

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Starting point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending point : ");
    scanf("%d",&iValue2);

    if(iValue2 < iValue1)
    {
        printf("Invalid Input\n");
    }
    else
    {
        RangeDisplayRev(iValue1,iValue2);
    }
    
    return 0;
}