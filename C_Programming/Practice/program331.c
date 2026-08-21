#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask = 0x0, iNo = 0;

    printf("Enter Number : ");
    scanf("%u",&iNo);

    iMask = 0x400;

    iNo = iNo ^ iMask;

    printf("Updated Number : %d\n",iNo);
    
    return 0;
}