#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask = 0x1, iNo = 0, iPos = 0;

    printf("Enter Number : ");
    scanf("%d",&iNo);

    printf("Enter the bit position : ");
    scanf("%d",&iPos);

    iMask = iMask << (iPos-1);

    iNo = iNo ^ iMask;

    printf("Updated Number : %d\n",iNo);
    
    return 0;
}