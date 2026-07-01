#include<stdio.h>

typedef unsigned int UINT;


UINT OffBit(UINT iNo,UINT iPos)
{
    int iResult = 0x0, iMask = 0x1;

    iMask = iMask<<(iPos-1);

    iResult = iMask ^ iNo;
    
    return iResult;
}

int main()
{
    int iValue = 0, iLocation = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%u",&iValue);

    printf("Enter Position : ");
    scanf("%u",&iLocation);

    iRet = OffBit(iValue,iLocation);

    printf("Updated : %u\n",iRet);

    return 0;
}