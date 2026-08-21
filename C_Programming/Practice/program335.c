#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x1, iResult = 0;

    if(iPos < 1 || iPos > 32)
    {
        printf("Invalid Bit Position \n");
        return iNo;
    }

    iMask = iMask << (iPos-1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    printf("Enter the bit position : ");
    scanf("%d",&iLocation);

    iRet = ToggleBit(iValue,iLocation);

    printf("Updated Number : %d\n",iRet);
    
    return 0;
}