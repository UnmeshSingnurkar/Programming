#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    int iMask = 0x00004000, iResult = 0x0;
    BOOL bFlag = FALSE;

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
        printf("15th bit ON\n");
    }
    else
    {
        printf("15th bit OFF\n");
    }

    return 0;
}