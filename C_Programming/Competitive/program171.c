#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iResult = 0x0, iMask = 0xFFFFFFBF;

    iResult = iMask & iNo;
    
    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%u",&iValue);

    iRet = OffBit(iValue);

    printf("Updated Number : %u\n",iRet);

    return 0;
}