#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0, iMask = 0X1, iAns = 0, iPos = 0;

    printf("Enter Number : ");
    scanf("%d",&iNo);
    
    printf("Enter the position : ");
    scanf("%d",&iPos);

    iMask = iMask << (iPos - 1);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("%d Bit is ON\n",iPos);
    }
    else
    {
        printf("%d Bit is OFF\n",iPos);
    }
    
    return 0;
}