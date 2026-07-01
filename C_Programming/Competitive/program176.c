#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo,UINT iPos)
{
    int iResult = 0x0, iMask = 0x1;
    BOOL bFlag = FALSE;

    iMask = iMask<<(iPos-1);

    iResult = iMask & iNo;

    if(iResult == iMask)
    {
        bFlag = TRUE;
    }
    
    return bFlag;
}

int main()
{
    int iValue = 0, iLocation = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%u",&iValue);

    printf("Enter Position : ");
    scanf("%u",&iLocation);

    bRet = ChkBit(iValue,iLocation);

    if(bRet == TRUE)
    {
        printf("bit ON\n");
    }
    else
    {
        printf("bit OFF\n");
    }

    return 0;
}