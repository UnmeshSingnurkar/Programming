#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0, iMask = 0X10000, iAns = 0;

    printf("Enter Number : ");
    scanf("%d",&iNo);
    
    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("17th Bit is ON\n");
    }
    else
    {
        printf("17th Bit is OFF\n");
    }
    
    return 0;
}