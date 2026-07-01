#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    int iMask1 = 0x00000010, iMask2 = 0x00020000, iResult = 0x0, iMask = 0x0;
    BOOL bFlag = FALSE;

    iMask = iMask1 | iMask2;

    iResult = iMask & iNo;

    if(iResult == iMask)
    {
        bFlag = TRUE;
    }
    
    return bFlag;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

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