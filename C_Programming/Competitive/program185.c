#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, UINT iStart, UINT iEnd)
{
    UINT iMask1 = 0x1, iMask2 = 0x1, iResult = 0x0;
    int iCnt = 0;
    for(iCnt = 0; iCnt < iEnd; iCnt++)
    {
        iMask1 = iMask1<<1;
        if(iCnt < (iEnd - iStart))
        {
            iMask1++;
        }
    }

    iResult = iNo ^ iMask1;

    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation1 = 0, iLocation2 = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%u",&iValue);

    printf("Enter Start : ");
    scanf("%u",&iLocation1);

    printf("Enter End : ");
    scanf("%u",&iLocation2);

    iRet = ToggleBitRange(iValue,iLocation1,iLocation2);

    printf("Updated Number : %u\n",iRet);

    return 0;
}