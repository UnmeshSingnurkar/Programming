#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL ChkBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0x1, iMask2 = 0x1, iResult = 0x0;
    BOOL bFlag = FALSE;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    if((iMask1 == (iMask1 & iNo)) || (iMask2 == (iMask2 & iNo)))
    {
        bFlag = TRUE;
    }

    return bFlag;
}

int main()
{
    UINT iValue = 0, iLocation1 = 0, iLocation2 = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%u",&iValue);

    printf("Enter Position 1 : ");
    scanf("%u",&iLocation1);

    printf("Enter Position 2 : ");
    scanf("%u",&iLocation2);

    bRet = ChkBit(iValue,iLocation1,iLocation2);

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    return 0;
}