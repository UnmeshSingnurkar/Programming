// write a program which accept a number and display difference of even factorial and odd factorial

#include<stdio.h>


int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iMul1 = 1;
    int iMul2 = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iMul1 = iMul1 * iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iMul2 = iMul2 * iCnt;
        }
    }

    return iMul1-iMul2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is %d\n",iRet);

    return 0;
}