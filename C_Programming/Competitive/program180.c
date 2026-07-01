#include<stdio.h>

typedef unsigned int UINT;


UINT OffBit(UINT iNo)
{
    int iResult = 0x0, iMask = 0xF000000F;

    iResult = iMask ^ iNo;
    
    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%u",&iValue);

    iRet = OffBit(iValue);

    printf("Updated : %u\n",iRet);

    return 0;
}