#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask = 0xFFFFEFFF, iNo = 0, iPos = 0;

    printf("Enter Number : ");
    scanf("%d",&iNo);

    iNo = iNo & iMask;

    printf("Updated Number : %d\n",iNo);
    
    return 0;
}