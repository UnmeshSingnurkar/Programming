#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 0x100, iMask2 = 0x800, iResult = 0x0;
    BOOL bFlag = FALSE;

    if((iMask1 == (iMask1 & iNo)) || (iMask2 == (iMask2 & iNo)))
    {
        bFlag = TRUE;
    }

    return bFlag;
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%u",&iValue);

    bRet = ChkBit(iValue);

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