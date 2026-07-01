#include<stdio.h>

typedef unsigned int UINT;


UINT CountOne(UINT iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        if((iNo & 0x1) == 0x1)
        {
            iCount++;
        }
        iNo = iNo >> 1;
    }
    
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%u",&iValue);

    iRet = CountOne(iValue);

    printf("Number of ON bits : %d\n",iRet);

    return 0;
}