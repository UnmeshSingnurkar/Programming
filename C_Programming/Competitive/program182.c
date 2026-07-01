#include<stdio.h>

typedef unsigned int UINT;


void CommonBits(UINT iNo1, UINT iNo2)
{
    int iPos = 1;
    UINT iResult = 0x0;

    iResult = iNo1 & iNo2;

    while(iResult != 0)
    {
        if((iResult & 0x1) == 0x1)
        {
            printf("%d\t",iPos);
        }
        iResult = iResult >> 1;
        iPos++;
    }
    printf("\n");
}

int main()
{
    UINT iValue1 = 0, iValue2 = 0;

    printf("Enter 1st Number : ");
    scanf("%u",&iValue1);

    printf("Enter 2nd Number : ");
    scanf("%u",&iValue2);

    CommonBits(iValue1,iValue2);

    return 0;
}