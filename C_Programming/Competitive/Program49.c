// write a program which accept range from user and return addition of all even numbers in between that range

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    printf("\n");

    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending point : ");
    scanf("%d",&iValue2);

    if((iValue1 < 0) || (iValue2 < iValue1))
    {
        printf("Invalid Input\n");
    }
    else
    {
        iRet = RangeSumEven(iValue1,iValue2);

        printf("Addition of even numbers in the range are : %d\n",iRet);
    }
    
    return 0;
}