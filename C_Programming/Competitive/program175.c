#include<stdio.h>

typedef unsigned int UINT;


UINT ToggleBit(UINT iNo)
{
    UINT iResult = 0x0, iMask = 0xF;

    iResult = iMask | iNo;
    
    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%u",&iValue);

    iRet = ToggleBit(iValue);

    printf("Updated Number : %u\n",iRet);

    return 0;
}